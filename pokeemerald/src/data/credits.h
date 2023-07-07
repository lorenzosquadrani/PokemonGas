enum
{
    PAGE_TITLE,
    PAGE_DIRECTOR,
    PAGE_MAIN_PROGRAMMER,
    PAGE_DEBUGGER,
    PAGE_SKATEBOARD_DESIGNER,
    PAGE_MAPPA_DIFA,
    PAGE_CHECCO_GAY0,
    PAGE_CHECCO_GAY1,
    PAGE_CHECCO_GAY2,
    PAGE_CHECCO_GAY3,
    PAGE_CHECCO_GAY4,
    PAGE_CHECCO_GAY5,
    PAGE_CHECCO_GAY6,
    PAGE_CHECCO_GAY7,
    PAGE_CHECCO_GAY8,
    PAGE_CHECCO_GAY9,
    PAGE_COUNT
};

#define ENTRIES_PER_PAGE 5

static const u8 sCreditsText_EmptyString[]                    = _("");
static const u8 sCreditsText_PkmnEmeraldVersion[]             = _("POKéMON PURPLE GAS");
static const u8 sCreditsText_Credits[]                        = _("Credits");
static const u8 sCreditsText_Director[]                       = _("Director");
static const u8 sCreditsText_MainProgrammer[]                 = _("Main Programmer");
static const u8 sCreditsText_Debugger[]                       = _("Debugger");
static const u8 sCreditsText_SkateboardDesigner[]             = _("Skateboard Designer");
static const u8 sCreditsText_MappaDIFA[]                      = _("Mappa DIFA");
static const u8 sCreditsText_Checco[]                         = _("Checco");
static const u8 sCreditsText_LorenzoSquadrani[]               = _("Lorenzo Squadrani");
static const u8 sCreditsText_FrancescoMorri[]                 = _("FrancescoMorri");
static const u8 sCreditsText_JankoPetkovic[]                  = _("Janko Petkovic");
static const u8 sCreditsText_TommasoMarzi[]                   = _("Tommaso Marzi");
static const u8 sCreditsText_Gay[]                            = _("Gay");

static const struct CreditsEntry sCreditsEntry_EmptyString[]                    = { 0, FALSE, sCreditsText_EmptyString};
static const struct CreditsEntry sCreditsEntry_PkmnEmeraldVersion[]             = { 7,  TRUE, sCreditsText_PkmnEmeraldVersion};
static const struct CreditsEntry sCreditsEntry_Credits[]                        = {11,  TRUE, sCreditsText_Credits};
static const struct CreditsEntry sCreditsEntry_Director[]                       = {12,  TRUE, sCreditsText_Director};
static const struct CreditsEntry sCreditsEntry_MainProgrammer[]                 = {10,  TRUE, sCreditsText_MainProgrammer};
static const struct CreditsEntry sCreditsEntry_Debugger[]                       = {11,  TRUE, sCreditsText_Debugger};
static const struct CreditsEntry sCreditsEntry_SkateboardDesigner[]             = {11,  TRUE, sCreditsText_SkateboardDesigner};
static const struct CreditsEntry sCreditsEntry_MappaDIFA[]                      = {11,  TRUE, sCreditsText_MappaDIFA};
static const struct CreditsEntry sCreditsEntry_Checco[]                         = {11,  TRUE, sCreditsText_Checco};
static const struct CreditsEntry sCreditsEntry_LorenzoSquadrani[]               = {11,  TRUE, sCreditsText_LorenzoSquadrani};
static const struct CreditsEntry sCreditsEntry_FrancescoMorri[]                 = {11,  TRUE, sCreditsText_FrancescoMorri};
static const struct CreditsEntry sCreditsEntry_JankoPetkovic[]                  = {11,  TRUE, sCreditsText_JankoPetkovic};
static const struct CreditsEntry sCreditsEntry_TommasoMarzi[]                   = {11,  TRUE, sCreditsText_TommasoMarzi};
static const struct CreditsEntry sCreditsEntry_Gay[]                            = {11,  TRUE, sCreditsText_Gay};

#define _ sCreditsEntry_EmptyString
static const struct CreditsEntry *const sCreditsEntryPointerTable[PAGE_COUNT][ENTRIES_PER_PAGE] =
{
    [PAGE_TITLE] = {
        _,
        sCreditsEntry_PkmnEmeraldVersion,
        sCreditsEntry_Credits,
        _,
        _
    },
    [PAGE_DIRECTOR] = {
        _,
        sCreditsEntry_Director,
        sCreditsEntry_LorenzoSquadrani,
        _,
        _,
    },
    [PAGE_MAIN_PROGRAMMER] = {
        _,
        sCreditsEntry_MainProgrammer,
        sCreditsEntry_LorenzoSquadrani,
        _,
        _,
    },
    [PAGE_DEBUGGER] = {
        _,
        sCreditsEntry_Debugger,
        sCreditsEntry_FrancescoMorri,
        _,
        _,
    },
    [PAGE_SKATEBOARD_DESIGNER] = {
        _,
        sCreditsEntry_SkateboardDesigner,
        sCreditsEntry_JankoPetkovic,
        _,
        _,
    },
    [PAGE_MAPPA_DIFA] = {
        _,
        sCreditsEntry_MappaDIFA,
        sCreditsEntry_TommasoMarzi,
        _,
        _,
    },
    [PAGE_CHECCO_GAY0] = {
        _,
        sCreditsEntry_Checco,
        sCreditsEntry_Gay,
        _,
        _,
    },
    [PAGE_CHECCO_GAY1] = {
        _,
        sCreditsEntry_Checco,
        sCreditsEntry_Gay,
        _,
        _,
    },
    [PAGE_CHECCO_GAY2] = {
        _,
        sCreditsEntry_Checco,
        sCreditsEntry_Gay,
        _,
        _,
    },
    [PAGE_CHECCO_GAY3] = {
        _,
        sCreditsEntry_Checco,
        sCreditsEntry_Gay,
        _,
        _,
    },
    [PAGE_CHECCO_GAY4] = {
        _,
        sCreditsEntry_Checco,
        sCreditsEntry_Gay,
        _,
        _,
    },
    [PAGE_CHECCO_GAY5] = {
        _,
        sCreditsEntry_Checco,
        sCreditsEntry_Gay,
        _,
        _,
    },
    [PAGE_CHECCO_GAY6] = {
        _,
        sCreditsEntry_Checco,
        sCreditsEntry_Gay,
        _,
        _,
    },
    [PAGE_CHECCO_GAY7] = {
        _,
        sCreditsEntry_Checco,
        sCreditsEntry_Gay,
        _,
        _,
    },
    [PAGE_CHECCO_GAY8] = {
        _,
        sCreditsEntry_Checco,
        sCreditsEntry_Gay,
        _,
        _,
    },
    [PAGE_CHECCO_GAY9] = {
        _,
        sCreditsEntry_Checco,
        sCreditsEntry_Gay,
        _,
        _,
    },
};
#undef _
