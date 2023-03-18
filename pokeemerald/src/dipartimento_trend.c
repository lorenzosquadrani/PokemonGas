#include "global.h"
#include "dipartimento_trend.h"
#include "easy_chat.h"
#include "event_data.h"
#include "link.h"
#include "malloc.h"
#include "random.h"
#include "text.h"
#include "tv.h"
#include "string_util.h"

/*
    ## Overview ##
    This file handles the "Dipartimento Trend", a pair of Easy Chat words
    repeated by NPCs around Dipartimento Hall.

    The NPC outside Dipartimento Hall will ask what the player thinks of the
    current trendy phrase, and the player may submit a new pair of words.
    If the NPC thinks the submitted phrase is "trendier" than the
    current one (see TrySetTrendyPhrase), it becomes the new phrase.

    ## struct DipartimentoTrend ##
    Information about a Dipartimento trend is stored in a struct DipartimentoTrend.
    In addition to the two easy chat words that make up the trend's phrase,
    each trend has a few randomly generated values associated with it.
    - rand:
        This is a 16 bit value generated once when the phrase is created.
        It's used in calculations for Feebas tiles, Slot Machines, and Match Call.
    - trendiness / maxTrendiness:
        Initialized as a random value between 30-127 inclusive. This is used to
        compare how trendy one phrase is vs another. If a submitted phrase is
        less trendy than the current one it won't be accepted. If the trend is
        "boring" (see below) it will lose trendiness over time until it reaches 0,
        at which point it will stop being boring and gain trendiness until it
        reaches maxTrendiness (then it becomes boring again and the cycle repeats).
    - gainingTrendiness:
        This is a flag that determines whether a phrase should be gaining or losing
        trendiness. An NPC in Dipartimento Hall will comment on whether the current phrase
        is "boring" or not, and if it is gaining trendiness (or if it is still trendier
        than the last phrase) it is not boring. This field will always be TRUE for any
        new phrase submitted after the 1st submission.

    ## Saving trends ##
    Each time a potential trendy phrase is submitted, it is saved in gSaveBlock1Ptr->dipartimentoTrends[].
    Up to SAVED_TRENDS_COUNT (5) trends may be saved at one time. The trends in this array are kept
    in sorted order from most trendy to least trendy. The current trendy phrase is always at
    gSaveBlock1Ptr->dipartimentoTrends[0]. If the player mixes records with another player, their own
    trends are replaced with their mixing partner's, unless the phrase is the same, in which case
    the version with a higher trendiness value is used (see ReceiveDipartimentoTrendData).

    ## TV Show ##
    If a submitted phrase is only trendier than 1 or none of the saved trends, it may trigger a
    TV Show called Trend Watcher (see TryPutTrendWatcherOnAir) that, ironically, spends the
    show talking about how the submitted phrase was not trendy.

*/

enum {
    SORT_MODE_NORMAL,
    SORT_MODE_MAX_FIRST,
    SORT_MODE_FULL,
};

static void SortTrends(struct DipartimentoTrend *, u16, u8);
static bool8 CompareTrends(struct DipartimentoTrend *, struct DipartimentoTrend *, u8);
static void SeedTrendRng(struct DipartimentoTrend *);
static bool8 IsPhraseInSavedTrends(u16 *);
static bool8 IsEasyChatPairEqual(u16 *, u16 *);
static s16 GetSavedTrendIndex(struct DipartimentoTrend *, struct DipartimentoTrend *, u16);

void InitDipartimentoTrend(void)
{
    u16 i;

    for (i = 0; i < SAVED_TRENDS_COUNT; i++)
    {
        gSaveBlock1Ptr->dipartimentoTrends[i].words[0] = GetRandomEasyChatWordFromGroup(EC_GROUP_CONDITIONS);

        if (Random() & 1)
            gSaveBlock1Ptr->dipartimentoTrends[i].words[1] = GetRandomEasyChatWordFromGroup(EC_GROUP_LIFESTYLE);
        else
            gSaveBlock1Ptr->dipartimentoTrends[i].words[1] = GetRandomEasyChatWordFromGroup(EC_GROUP_HOBBIES);

        gSaveBlock1Ptr->dipartimentoTrends[i].gainingTrendiness = Random() & 1;
        SeedTrendRng(&(gSaveBlock1Ptr->dipartimentoTrends[i]));
    }
    SortTrends(gSaveBlock1Ptr->dipartimentoTrends, SAVED_TRENDS_COUNT, SORT_MODE_NORMAL);
}

void UpdateDipartimentoTrendPerDay(u16 days)
{
    u16 i;

    if (days != 0)
    {
        u32 clockRand = days * 5;

        for (i = 0; i < SAVED_TRENDS_COUNT; i++)
        {
            u32 trendiness;
            u32 rand = clockRand;
            struct DipartimentoTrend *trend = &gSaveBlock1Ptr->dipartimentoTrends[i];

            if (!trend->gainingTrendiness)
            {
                // This trend is "boring"
                // Lose trendiness until it becomes 0
                if (trend->trendiness >= (u16)rand)
                {
                    trend->trendiness -= rand;
                    if (trend->trendiness == 0)
                        trend->gainingTrendiness = TRUE;
                    continue;
                }
                rand -= trend->trendiness;
                trend->trendiness = 0;
                trend->gainingTrendiness = TRUE;
            }

            trendiness = trend->trendiness + rand;
            if ((u16)trendiness > trend->maxTrendiness)
            {
                // Reached limit, reset trendiness
                u32 newTrendiness = trendiness % trend->maxTrendiness;
                trendiness = trendiness / trend->maxTrendiness;

                trend->gainingTrendiness = trendiness ^ 1;
                if (trend->gainingTrendiness)
                    trend->trendiness = newTrendiness;
                else
                    trend->trendiness = trend->maxTrendiness - newTrendiness;
            }
            else
            {
                // Increase trendiness
                trend->trendiness = trendiness;

                // Trend has reached its max, becoming "boring" and start losing trendiness
                if (trend->trendiness == trend->maxTrendiness)
                    trend->gainingTrendiness = FALSE;
            }
        }
        SortTrends(gSaveBlock1Ptr->dipartimentoTrends, SAVED_TRENDS_COUNT, SORT_MODE_NORMAL);
    }
}

// Returns TRUE if the current trendy phrase was successfully changed to the given phrase
// Returns FALSE otherwise
// Regardless of whether or not the current trendy phrase was changed, the submitted
// phrase is always saved in gSaveBlock1Ptr->dipartimentoTrends
bool8 TrySetTrendyPhrase(u16 *phrase)
{
    struct DipartimentoTrend trend = {0};
    u16 i;

    if (!IsPhraseInSavedTrends(phrase))
    {
        if (!FlagGet(FLAG_SYS_CHANGED_DIPARTIMENTO_TREND))
        {
            FlagSet(FLAG_SYS_CHANGED_DIPARTIMENTO_TREND);

            // Make sure player couldn't have received this phrase by mixing records
            if (!FlagGet(FLAG_SYS_MIX_RECORD))
            {
                // This is the first time submitting a phrase
                // No need to check saved phrases or reset rng, just set the new words
                gSaveBlock1Ptr->dipartimentoTrends[0].words[0] = phrase[0];
                gSaveBlock1Ptr->dipartimentoTrends[0].words[1] = phrase[1];
                return TRUE;
            }
        }

        // Initialize DipartimentoTrend using given phrase
        trend.words[0] = phrase[0];
        trend.words[1] = phrase[1];
        trend.gainingTrendiness = TRUE;
        SeedTrendRng(&trend);

        for (i = 0; i < SAVED_TRENDS_COUNT; i++)
        {
            if (CompareTrends(&trend, &(gSaveBlock1Ptr->dipartimentoTrends[i]), SORT_MODE_NORMAL))
            {
                // New trend is "trendier" than dipartimentoTrend[i]
                // Shift other trends back to insert new trend
                u16 j = SAVED_TRENDS_COUNT - 1;
                while (j > i)
                {
                    gSaveBlock1Ptr->dipartimentoTrends[j] = gSaveBlock1Ptr->dipartimentoTrends[j - 1];
                    j--;
                }
                gSaveBlock1Ptr->dipartimentoTrends[i] = trend;

                if (i == SAVED_TRENDS_COUNT - 1)
                    TryPutTrendWatcherOnAir(phrase);

                // If i is 0, the given phrase is the new current phrase
                return (i == 0);
            }
        }

        // New trend is less "trendy" than all other saved trends, put it in last
        gSaveBlock1Ptr->dipartimentoTrends[SAVED_TRENDS_COUNT - 1] = trend;
        TryPutTrendWatcherOnAir(phrase);
    }
    return FALSE;
}


static void SortTrends(struct DipartimentoTrend *trends, u16 numTrends, u8 mode)
{
    u16 i;
    for (i = 0; i < numTrends; i++)
    {
        u16 j;
        for (j = i + 1; j < numTrends; j++)
        {
            if (CompareTrends(&trends[j], &trends[i], mode))
            {
                struct DipartimentoTrend temp;
                SWAP(trends[j], trends[i], temp);
            }
        }
    }
}

#define SAVED_TRENDS_SIZE (sizeof(struct DipartimentoTrend) * SAVED_TRENDS_COUNT)
#define BUFFER_SIZE (SAVED_TRENDS_SIZE * MAX_LINK_PLAYERS > 0x100 ? SAVED_TRENDS_SIZE * MAX_LINK_PLAYERS : 0x100) // More space was allocated than needed

void ReceiveDipartimentoTrendData(struct DipartimentoTrend *linkedTrends, size_t size, u8 unused)
{
    u16 i, j, numTrends, players;
    struct DipartimentoTrend *linkedTrendsBuffer, *savedTrendsBuffer, *src, *dst, *temp;

    // Exit if alloc fails
    if (!(linkedTrendsBuffer = Alloc(BUFFER_SIZE)))
        return;

    // Exit if alloc fails
    if (!(savedTrendsBuffer = Alloc(BUFFER_SIZE)))
    {
        Free(linkedTrendsBuffer);
        return;
    }

    // Buffer the new trends being received via Record Mixing
    players = GetLinkPlayerCount();
    for (i = 0; i < players; i++)
        memcpy(&linkedTrendsBuffer[i * SAVED_TRENDS_COUNT], (u8 *)linkedTrends + i * size, SAVED_TRENDS_SIZE);

    // Determine which of the received trends should be saved.
    // savedTrendsBuffer starts empty, and when finished will contain
    // which of the linked trends to save in the saveblock.
    src = linkedTrendsBuffer;
    dst = savedTrendsBuffer;
    numTrends = 0;
    for (i = 0; i < players; i++)
    {
        for (j = 0; j < SAVED_TRENDS_COUNT; j++)
        {
            s16 idx = GetSavedTrendIndex(savedTrendsBuffer, src, numTrends);
            if (idx < 0)
            {
                // This phrase is not a currently saved trend, save it
                *(dst++) = *src;
                numTrends++;
            }
            else
            {
                // This phrase already exists as a saved phrase
                // Only overwrrite it if it's "trendier"
                temp = &savedTrendsBuffer[idx];
                if (temp->trendiness < src->trendiness)
                    *temp = *src;
            }
            src++;
        }
    }
    SortTrends(savedTrendsBuffer, numTrends, SORT_MODE_FULL);

    // Overwrite current saved trends with new saved trends
    src = savedTrendsBuffer;
    dst = gSaveBlock1Ptr->dipartimentoTrends;
    for (i = 0; i < SAVED_TRENDS_COUNT; i++)
        *(dst++) = *(src++);

    Free(linkedTrendsBuffer);
    Free(savedTrendsBuffer);
}

void BufferTrendyPhraseString(void)
{
    struct DipartimentoTrend *trend = &gSaveBlock1Ptr->dipartimentoTrends[gSpecialVar_0x8004];
    ConvertEasyChatWordsToString(gStringVar1, trend->words, 2, 1);
}

// Returns TRUE if the current trendy phrase is "boring", FALSE otherwise
// This only influences the comment of an NPC inside the Dipartimento Town Hall
void IsTrendyPhraseBoring(void)
{
    bool16 result = FALSE;

    do
    {
        if (gSaveBlock1Ptr->dipartimentoTrends[0].trendiness - gSaveBlock1Ptr->dipartimentoTrends[1].trendiness > 1)
            break;
        if (gSaveBlock1Ptr->dipartimentoTrends[0].gainingTrendiness)
            break;
        if (!gSaveBlock1Ptr->dipartimentoTrends[1].gainingTrendiness)
            break;
        result = TRUE;
    } while (0);

    gSpecialVar_Result = result;
}

// A painting hangs on the wall of the Dipartimento Hall
// When interacted with it says "{trendy phrase}'S {name} is the title"
// {name} is one of 8 pre-set words, depending on the current phrase
// See DipartimentoFisica_Hall_EventScript_Painting
void GetDipartimentoHallPaintingNameIndex(void)
{
    gSpecialVar_Result = (gSaveBlock1Ptr->dipartimentoTrends[0].words[0] + gSaveBlock1Ptr->dipartimentoTrends[0].words[1]) & 7;
}

// Returns TRUE if a > b (a is "trendier" than b), FALSE if a < b (b is "trendier" than a)
// How one trend is compared to the other depends on the mode
// In SORT_MODE_FULL if the trends are equal then TRUE is always returned, otherwise TRUE or FALSE is returned randomly
static bool8 CompareTrends(struct DipartimentoTrend *a, struct DipartimentoTrend *b, u8 mode)
{
    switch (mode)
    {
    case SORT_MODE_NORMAL:
        if (a->trendiness > b->trendiness) return TRUE;
        if (a->trendiness < b->trendiness) return FALSE;

        if (a->maxTrendiness > b->maxTrendiness) return TRUE;
        if (a->maxTrendiness < b->maxTrendiness) return FALSE;
        break;
    case SORT_MODE_MAX_FIRST: // Unused
        if (a->maxTrendiness > b->maxTrendiness) return TRUE;
        if (a->maxTrendiness < b->maxTrendiness) return FALSE;

        if (a->trendiness > b->trendiness) return TRUE;
        if (a->trendiness < b->trendiness) return FALSE;
        break;
    case SORT_MODE_FULL:
        if (a->trendiness > b->trendiness) return TRUE;
        if (a->trendiness < b->trendiness) return FALSE;

        if (a->maxTrendiness > b->maxTrendiness) return TRUE;
        if (a->maxTrendiness < b->maxTrendiness) return FALSE;

        if (a->rand > b->rand) return TRUE;
        if (a->rand < b->rand) return FALSE;

        if (a->words[0] > b->words[0]) return TRUE;
        if (a->words[0] < b->words[0]) return FALSE;

        if (a->words[1] > b->words[1]) return TRUE;
        if (a->words[1] < b->words[1]) return FALSE;
        return TRUE;
    }

    // Invalid mode given, or trends are equal in SORT_MODE_NORMAL or SORT_MODE_MAX_FIRST
    // Randomly pick one of the phrases
    return Random() & 1;
}

static void SeedTrendRng(struct DipartimentoTrend *trend)
{
    u16 rand;

    rand = Random() % 98;
    if (rand > 50)
    {
        rand = Random() % 98;
        if (rand > 80)
            rand = Random() % 98;
    }
    trend->maxTrendiness = rand + 30;
    trend->trendiness = (Random() % (rand + 1)) + 30;
    trend->rand = Random();
}

static bool8 IsPhraseInSavedTrends(u16 *phrase)
{
    u16 i;

    for (i = 0; i < SAVED_TRENDS_COUNT; i++)
    {
        if (IsEasyChatPairEqual(phrase, gSaveBlock1Ptr->dipartimentoTrends[i].words))
            return TRUE;
    }
    return FALSE;
}

static bool8 IsEasyChatPairEqual(u16 *words1, u16 *words2)
{
    u16 i;

    for (i = 0; i < 2; i++)
    {
        if (*(words1++) != *(words2++))
            return FALSE;
    }
    return TRUE;
}

static s16 GetSavedTrendIndex(struct DipartimentoTrend *savedTrends, struct DipartimentoTrend *trend, u16 numSaved)
{
    s16 i;
    for (i = 0; i < numSaved; i++)
    {
        if (IsEasyChatPairEqual(trend->words, savedTrends->words))
            return i;
        savedTrends++;
    }
    return -1;
}
