@ Sailing to and from Dipartimento uses local IDs from different maps
@ e.g. Route 104's sail to Dipartimento script references local IDs from Dipartimento's map
@ All of these local IDs are labeled here
.equ LOCALID_BRINEY_DIPARTIMENTO, 2
.equ LOCALID_BOAT_DIPARTIMENTO, 4

.equ LOCALID_BOAT_R109, 1
.equ LOCALID_BRINEY_R109, 2

.equ LOCALID_BOAT_R104, 7
.equ LOCALID_BRINEY_R104, 8

DipartimentoFisica_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DipartimentoFisica_OnTransition
	.byte 0

DipartimentoFisica_OnTransition:
	setflag FLAG_VISITED_DIPARTIMENTO_FISICA
	end

DipartimentoFisica_EventScript_Briney::
	lock
	faceplayer
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DipartimentoFisica_EventScript_ReturnToPetalburgPrompt
	message DipartimentoFisica_Text_WhereAreWeBound
	waitmessage
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DIPARTIMENTO, 2, FALSE
	switch VAR_RESULT
	case 0, DipartimentoFisica_EventScript_ChoosePetalburg
	case 1, DipartimentoFisica_EventScript_ChooseSlateport
	case 2, DipartimentoFisica_EventScript_CancelSailSelect
	case MULTI_B_PRESSED, DipartimentoFisica_EventScript_CancelSailSelect
	end

DipartimentoFisica_EventScript_ChoosePetalburg::
	msgbox DipartimentoFisica_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DipartimentoFisica_EventScript_SailToPetalburg
	release
	end

DipartimentoFisica_EventScript_ChooseSlateport::
	msgbox DipartimentoFisica_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DipartimentoFisica_EventScript_SailToSlateport
	release
	end

DipartimentoFisica_EventScript_CancelSailSelect::
	msgbox DipartimentoFisica_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
	closemessage
	release
	end

DipartimentoFisica_EventScript_ReturnToPetalburgPrompt::
	msgbox DipartimentoFisica_Text_SetSailBackToPetalburg, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DipartimentoFisica_EventScript_SailBackToPetalburg
	msgbox DipartimentoFisica_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
	release
	end

DipartimentoFisica_EventScript_SailBackToPetalburg::
	msgbox DipartimentoFisica_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
	closemessage
	goto DipartimentoFisica_EventScript_SailToPetalburg
	end

DipartimentoFisica_EventScript_Woman::
	msgbox DipartimentoFisica_Text_TinyIslandCommunity, MSGBOX_NPC
	end

DipartimentoFisica_EventScript_TownSign::
	msgbox DipartimentoFisica_Text_TownSign, MSGBOX_SIGN
	end

DipartimentoFisica_EventScript_GymSign::
	msgbox DipartimentoFisica_Text_GymSign, MSGBOX_SIGN
	end

DipartimentoFisica_EventScript_HallSign::
	msgbox DipartimentoFisica_Text_HallSign, MSGBOX_SIGN
	end

DipartimentoFisica_EventScript_OldRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, DipartimentoFisica_EventScript_HowsFishing
	msgbox DipartimentoFisica_Text_GettingItchToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DipartimentoFisica_EventScript_GiveOldRod
	goto_if_eq VAR_RESULT, NO, DipartimentoFisica_EventScript_NotGettingItchToFish
	end

DipartimentoFisica_EventScript_GiveOldRod::
	msgbox DipartimentoFisica_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox DipartimentoFisica_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
	release
	end

DipartimentoFisica_EventScript_NotGettingItchToFish::
	msgbox DipartimentoFisica_Text_ThatsTooBadThen, MSGBOX_DEFAULT
	release
	end

DipartimentoFisica_EventScript_HowsFishing::
	message DipartimentoFisica_Text_HowsYourFishing
	waitmessage
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
	goto_if_eq VAR_RESULT, 0, DipartimentoFisica_EventScript_FishingExcellent
	goto_if_eq VAR_RESULT, 1, DipartimentoFisica_EventScript_FishingNotSoGood
	end

DipartimentoFisica_EventScript_FishingExcellent::
	msgbox DipartimentoFisica_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
	release
	end

DipartimentoFisica_EventScript_FishingNotSoGood::
	msgbox DipartimentoFisica_Text_FishingAdvice, MSGBOX_DEFAULT
	release
	end

DipartimentoFisica_EventScript_SailToPetalburg::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_DIPARTIMENTO, MAP_DIPARTIMENTO_FISICA, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DIPARTIMENTO_FISICA, 0
	applymovement LOCALID_BRINEY_DIPARTIMENTO, DipartimentoFisica_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DIPARTIMENTO
	applymovement OBJ_EVENT_ID_PLAYER, DipartimentoFisica_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DIPARTIMENTO_FISICA
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DIPARTIMENTO, DipartimentoFisica_Movement_SailToPetalburg
	applymovement OBJ_EVENT_ID_PLAYER, DipartimentoFisica_Movement_SailToPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	call Common_EventScript_StopBrineysBoatMusic
	applymovement OBJ_EVENT_ID_PLAYER, DipartimentoFisica_Movement_ExitBoatPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DIPARTIMENTO_FISICA
	hideobjectat LOCALID_BOAT_DIPARTIMENTO, MAP_DIPARTIMENTO_FISICA
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DIPARTIMENTO_FISICA
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	waitstate
	release
	end

DipartimentoFisica_EventScript_SailToSlateport::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_DIPARTIMENTO, MAP_DIPARTIMENTO_FISICA, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DIPARTIMENTO_FISICA, 1
	applymovement LOCALID_BRINEY_DIPARTIMENTO, DipartimentoFisica_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DIPARTIMENTO
	applymovement OBJ_EVENT_ID_PLAYER, DipartimentoFisica_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DIPARTIMENTO_FISICA
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DIPARTIMENTO, DipartimentoFisica_Movement_SailToSlateport
	applymovement OBJ_EVENT_ID_PLAYER, DipartimentoFisica_Movement_SailToSlateport
	waitmovement 0
	call Common_EventScript_StopBrineysBoatMusic
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
	applymovement OBJ_EVENT_ID_PLAYER, DipartimentoFisica_Movement_ExitBoatSlateport
	waitmovement 0
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
	addobject LOCALID_BRINEY_R109
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
	applymovement LOCALID_BRINEY_R109, DipartimentoFisica_Movement_BrineyExitBoat
	waitmovement 0
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	addobject LOCALID_BOAT_R109
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DIPARTIMENTO_FISICA
	hideobjectat LOCALID_BOAT_DIPARTIMENTO, MAP_DIPARTIMENTO_FISICA
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DipartimentoFisica_EventScript_LandedSlateportDeliverGoods
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DipartimentoFisica_EventScript_LandedSlateport
	closemessage
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DIPARTIMENTO_FISICA
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
	copyobjectxytoperm LOCALID_BRINEY_R109
	release
	end

DipartimentoFisica_EventScript_LandedSlateportDeliverGoods::
	msgbox DipartimentoFisica_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
	return

DipartimentoFisica_EventScript_LandedSlateport::
	msgbox DipartimentoFisica_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
	return

DipartimentoFisica_Movement_SailToPetalburg:
	walk_up
	walk_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DipartimentoFisica_Movement_SailToSlateport:
	walk_right
	walk_fast_right
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

DipartimentoFisica_Movement_PlayerBoardBoat:
	walk_right
	walk_up
	step_end

DipartimentoFisica_Movement_ExitBoatPetalburg:
	walk_up
	walk_up
	walk_up
	step_end

DipartimentoFisica_Movement_ExitBoatSlateport:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

DipartimentoFisica_Movement_BrineyBoardBoat:
	walk_up
	step_end

DipartimentoFisica_Movement_BrineyExitBoat:
	walk_up
	walk_up
	step_end

DipartimentoFisica_EventScript_TrendyPhraseBoy::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DipartimentoFisica_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DipartimentoFisica_EventScript_ConfirmTrendyPhrase
	goto_if_eq VAR_RESULT, NO, DipartimentoFisica_EventScript_RejectTrendyPhrase
	end

DipartimentoFisica_EventScript_ConfirmTrendyPhrase::
	msgbox DipartimentoFisica_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
	release
	end

DipartimentoFisica_EventScript_RejectTrendyPhrase::
	msgbox DipartimentoFisica_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, TRUE, DipartimentoFisica_EventScript_GiveNewTrendyPhrase
	goto_if_eq VAR_RESULT, FALSE, DipartimentoFisica_EventScript_CancelNewTrendyPhrase
	end

DipartimentoFisica_EventScript_GiveNewTrendyPhrase::
	incrementgamestat GAME_STAT_STARTED_TRENDS
	goto_if_eq VAR_0x8004, FALSE, DipartimentoFisica_EventScript_PhraseNotTrendyEnough
	msgbox DipartimentoFisica_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
	release
	end

DipartimentoFisica_EventScript_CancelNewTrendyPhrase::
	msgbox DipartimentoFisica_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
	release
	end

DipartimentoFisica_EventScript_PhraseNotTrendyEnough::
	msgbox DipartimentoFisica_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
	release
	end

DipartimentoFisica_Text_TinyIslandCommunity:
	.string "DIPARTIMENTO is a tiny island community.\n"
	.string "If something gets trendy here,\l"
	.string "everyone picks up on it right away.$"

DipartimentoFisica_Text_TownSign:
	.string "DIPARTIMENTO TOWN\n"
	.string "“A tiny island in the blue sea.”$"

DipartimentoFisica_Text_GymSign:
	.string "DIPARTIMENTO TOWN POKéMON GYM\n"
	.string "LEADER: BRAWLY\l"
	.string "“A big wave in fighting!”$"

DipartimentoFisica_Text_HallSign:
	.string "DIPARTIMENTO HALL\n"
	.string "“Everyone's information exchange!”$"

Route104_Text_LandedInDipartimentoDeliverLetter:
	.string "MR. BRINEY: Ahoy!\n"
	.string "We've hit land in DIPARTIMENTO.\p"
	.string "I suppose you're off to deliver that\n"
	.string "LETTER to, who was it now, STEVEN!$"

DipartimentoFisica_Text_SetSailBackToPetalburg:
	.string "MR. BRINEY: Have you delivered your\n"
	.string "LETTER?\p"
	.string "Or were you meaning to sail back to\n"
	.string "PETALBURG?$"

DipartimentoFisica_Text_PetalburgWereSettingSail2:
	.string "MR. BRINEY: PETALBURG it is, then!\p"
	.string "Anchors aweigh!\n"
	.string "PEEKO, we're setting sail, my darling!$"

DipartimentoFisica_Text_GoDeliverIllBeWaiting:
	.string "MR. BRINEY: Then you go on and deliver\n"
	.string "the LETTER. I'll be waiting.$"

DipartimentoFisica_Text_BrineyLandedInDipartimento:
	.string "MR. BRINEY: Ahoy!\n"
	.string "We've hit land in DIPARTIMENTO!\p"
	.string "You just go on and tell me whenever\n"
	.string "you want to set sail again!$"

DipartimentoFisica_Text_WhereAreWeBound:
	.string "MR. BRINEY: Ahoy!\n"
	.string "For you, I'll go out to sea anytime!\p"
	.string "Now, my friend, where are we bound?$"

DipartimentoFisica_Text_PetalburgWereSettingSail:
	.string "MR. BRINEY: PETALBURG, is it?\p"
	.string "Anchors aweigh!\n"
	.string "PEEKO, we're setting sail, my darling!$"

DipartimentoFisica_Text_SlateportWereSettingSail:
	.string "MR. BRINEY: SLATEPORT, is it?\p"
	.string "Anchors aweigh!\n"
	.string "PEEKO, we're setting sail, my darling!$"

DipartimentoFisica_Text_JustTellMeWhenYouNeedToSetSail:
	.string "MR. BRINEY: You just tell me whenever\n"
	.string "you need to set sail again!$"

DipartimentoFisica_Text_GettingItchToFish:
	.string "This is a renowned fishing spot.\n"
	.string "Are you getting the itch to fish?$"

DipartimentoFisica_Text_GiveYouOneOfMyRods:
	.string "I hear you, and I like what\n"
	.string "you're saying!\p"
	.string "I'll give you one of my fishing RODS.$"

DipartimentoFisica_Text_ThrowInFishingAdvice:
	.string "And, as an added bonus, I'll even throw\n"
	.string "in a little fishing advice!\p"
	.string "First, you want to face the water,\n"
	.string "then use the ROD.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull on the ROD.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your ROD\l"
	.string "to haul them in.$"

DipartimentoFisica_Text_ThatsTooBadThen:
	.string "Oh, is that so?\n"
	.string "That's too bad, then.$"

DipartimentoFisica_Text_HowsYourFishing:
	.string "Yo!\n"
	.string "How's your fishing?$"

DipartimentoFisica_Text_GreatHaulInSomeBigOnes:
	.string "Is that right! That's great!\n"
	.string "Haul in some big ones!$"

DipartimentoFisica_Text_FishingAdvice:
	.string "Oh, hey, don't get down on yourself!\n"
	.string "I'll give you a little fishing advice.\p"
	.string "First, you want to face the water,\n"
	.string "then use the ROD.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull the ROD.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your ROD\l"
	.string "to haul them in.$"

DipartimentoFisica_Text_XIsTheBiggestHappeningThingRight:
	.string "I like what's hip, happening, and trendy.\n"
	.string "I'm always checking it out.\p"
	.string "Listen, have you heard about this new\n"
	.string "“{STR_VAR_1}”?\p"
	.string "That's right!\n"
	.string "Of course you know!\p"
	.string "I mean, sheesh,\n"
	.string "“{STR_VAR_1}”…\l"
	.string "It's the hottest thing in cool!\p"
	.string "Wherever you're from,\n"
	.string "“{STR_VAR_1}”\l"
	.string "is the biggest happening thing, right?$"

DipartimentoFisica_Text_TellMeWhatsNewAndIn:
	.string "Hunh?\n"
	.string "It's not the hip and happening thing?\p"
	.string "Well, hey, you have to tell me,\n"
	.string "what's new and what's “in”?$"

DipartimentoFisica_Text_OfCourseIKnowAboutThat:
	.string "Hunh?\n"
	.string "“{STR_VAR_2}”?\p"
	.string "… …\p"
	.string "…Uh… Yeah! That's right!\n"
	.string "Yeah, I knew that! Knew it all along!\p"
	.string "Of course I know about that!\n"
	.string "“{STR_VAR_2},” right?\p"
	.string "Yeah, that's it, it's there!\n"
	.string "Isn't “{STR_VAR_2}”\l"
	.string "the coolest, or what?\p"
	.string "It's the hippest thing in hip.\n"
	.string "You think I'd not know about it?\p"
	.string "“{STR_VAR_1}”…\n"
	.string "It's, like, so five minutes ago.\p"
	.string "Now, “{STR_VAR_2}” is\n"
	.string "what's vital and in tune with the times!$"

DipartimentoFisica_Text_XHuhIThinkYIsCool:
	.string "Hmm…\n"
	.string "“{STR_VAR_2},” huh?\p"
	.string "But personally, I think\n"
	.string "“{STR_VAR_1}”\l"
	.string "is what's real in cool.$"

DipartimentoFisica_Text_HearOfAnyTrendsComeShareWithMe:
	.string "Well, if you hear of any happening new\n"
	.string "trends, come share them with me, okay?$"

DipartimentoFisica_Text_YeahDefinitionOfInRightNow:
	.string "Yeah, absolutely right!\p"
	.string "“{STR_VAR_1}” is the\n"
	.string "definition of “in” right now.$"
