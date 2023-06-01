.set LOCALID_WALLACE, 1

DIFA_HallOfFame_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DIFA_HallOfFame_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, DIFA_HallOfFame_OnWarp
	.byte 0

DIFA_HallOfFame_OnWarp:
	map_script_2 VAR_TEMP_1, 0, DIFA_HallOfFame_EventScript_TurnPlayerNorth
	.2byte 0

DIFA_HallOfFame_EventScript_TurnPlayerNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

DIFA_HallOfFame_OnFrame:
	map_script_2 VAR_TEMP_1, 0, DIFA_HallOfFame_EventScript_EnterHallOfFame
	.2byte 0

DIFA_HallOfFame_EventScript_EnterHallOfFame::
	lockall
	applymovement LOCALID_WALLACE, DIFA_HallOfFame_Movement_WalkIntoHallOfFame1
	applymovement OBJ_EVENT_ID_PLAYER, DIFA_HallOfFame_Movement_WalkIntoHallOfFame1
	waitmovement 0
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox DIFA_HallOfFame_Text_HereWeHonorLeagueChampions, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLACE, DIFA_HallOfFame_Movement_WalkIntoHallOfFame2
	applymovement OBJ_EVENT_ID_PLAYER, DIFA_HallOfFame_Movement_WalkIntoHallOfFame2
	waitmovement 0
	delay 20
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox DIFA_HallOfFame_Text_LetsRecordYouAndYourPartnersNames, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 20
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
	delay 40
	setvar VAR_TEMP_1, 1
	call DIFA_HallOfFame_EventScript_SetGameClearFlags
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, DIFA_HallOfFame_EventScript_GameClearMale
	goto_if_eq VAR_RESULT, FEMALE, DIFA_HallOfFame_EventScript_GameClearFemale
	end

DIFA_HallOfFame_EventScript_GameClearMale::
	setrespawn HEAL_LOCATION_RIMINI_TOWN_CASA_GAS_2F
	fadescreenspeed FADE_TO_BLACK, 24
	special GameClear
	waitstate
	releaseall
	end

DIFA_HallOfFame_EventScript_GameClearFemale::
	setrespawn HEAL_LOCATION_RIMINI_TOWN_CASA_STE_2F
	fadescreenspeed FADE_TO_BLACK, 24
	special GameClear
	waitstate
	releaseall
	end

DIFA_HallOfFame_Movement_WalkIntoHallOfFame1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DIFA_HallOfFame_Movement_WalkIntoHallOfFame2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DIFA_HallOfFame_Text_HereWeHonorLeagueChampions:
	.string "WALLACE: This room…\p"
	.string "This is where we keep records of\n"
	.string "POKéMON that prevailed through\l"
	.string "harsh battles.\p"
	.string "It is here that the LEAGUE CHAMPIONS\n"
	.string "are honored.$"

DIFA_HallOfFame_Text_LetsRecordYouAndYourPartnersNames:
	.string "WALLACE: Come on, let's record your\n"
	.string "name as a TRAINER who triumphed over\l"
	.string "the POKéMON LEAGUE, and the names of\l"
	.string "the partners who battled with you.$"

