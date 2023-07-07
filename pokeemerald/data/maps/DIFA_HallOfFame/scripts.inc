.set LOCALID_TAGLIA, 12
.set LOCALID_SIOLI, 1
.set LOCALID_FRABONI, 20
.set LOCALID_UGUZZONI, 19
.set LOCALID_CASTELLANI, 21
.set LOCALID_KAMENCIK, 22

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

DIFA_HallOfFame_EventScript_GameClear::
	setrespawn HEAL_LOCATION_RIMINI_TOWN_CASA_GAS_2F
	fadescreenspeed FADE_TO_BLACK, 24
	special GameClear
	waitstate
	releaseall
	end

DIFA_HallOfFame_EventScript_EnterHallOfFame::
	lockall
	applymovement LOCALID_TAGLIA, DIFA_HallOfFame_Movement_TagliaSiAccomoda
	applymovement OBJ_EVENT_ID_PLAYER, DIFA_HallOfFame_Movement_GasSiAccomoda
	waitmovement 0
	delay 40
	msgbox DIFA_HallOfFame_EventScript_EnterHallOfFame_Text_0, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, DIFA_HallOfFame_Movement_GasLoCiucciaATutti
	delay 20
	applymovement 11, Common_Movement_ExclamationMark
	applymovement 15, Common_Movement_ExclamationMark
	applymovement 14, Common_Movement_ExclamationMark
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 10, Common_Movement_ExclamationMark
	msgbox DIFA_HallOfFame_EventScript_EnterHallOfFame_Text_1
	waitmovement OBJ_EVENT_ID_PLAYER
	closemessage
	msgbox DIFA_HallOfFame_EventScript_EnterHallOfFame_Text_2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SIOLI, DIFA_HallOfFame_Movement_SioliSiLeva
	applymovement LOCALID_FRABONI, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_CASTELLANI, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_UGUZZONI, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_KAMENCIK, Common_Movement_WalkInPlaceFasterLeft
	applymovement OBJ_EVENT_ID_PLAYER, DIFA_ChampionsRoom_Movement_GasFaDuePassi
	waitmovement 0
	delay 20
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
	delay 40
	setvar VAR_TEMP_1, 1
	call DIFA_HallOfFame_EventScript_SetGameClearFlags
	goto DIFA_HallOfFame_EventScript_GameClear
	end


DIFA_HallOfFame_Movement_TagliaSiAccomoda:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

DIFA_HallOfFame_Movement_GasSiAccomoda:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DIFA_HallOfFame_Movement_GasLoCiucciaATutti:
	walk_up
	delay_16
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	delay_16
	walk_right
	walk_in_place_up
	delay_16
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_up
	delay_16
	walk_right
	walk_in_place_up
	delay_16
	walk_down
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

DIFA_HallOfFame_Movement_SioliSiLeva:
	walk_right
	walk_in_place_fast_left
	step_end

DIFA_ChampionsRoom_Movement_GasFaDuePassi:
	walk_up
	walk_up
	step_end

DIFA_HallOfFame_EventScript_EnterHallOfFame_Text_0:
	.string "SIOLI: Andrea Gaspari\p"
	.string "La commissione qui riunita le\n"
	.string "conferisce la POKéLAUREA con un\l"
	.string "risultato di 110 su 110.\n"
	.string "Congratulazioni!$"

DIFA_HallOfFame_EventScript_EnterHallOfFame_Text_1:
	.string "CLAP CLAP CLAP... BRAVO! ... CLAP CLAP\n"
	.string "UHUHUUU CLAP CLAP ...$"

DIFA_HallOfFame_EventScript_EnterHallOfFame_Text_2:
	.string "SIOLI: Molto bene, ed ora registriamo\n"
	.string "tu e la tua squadra su ALMALAUREA.\n"
	.string "Vieni pure avanti.$"
