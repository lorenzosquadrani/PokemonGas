.set LOCALID_SIOLI, 1
.set LOCALID_BIRCH, 2

DIFA_ChampionsRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DIFA_ChampionsRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, DIFA_ChampionsRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DIFA_ChampionsRoom_OnFrame
	.byte 0

DIFA_ChampionsRoom_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	end

DIFA_ChampionsRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, DIFA_ChampionsRoom_EventScript_PlayerTurnNorth
	.2byte 0

DIFA_ChampionsRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

DIFA_ChampionsRoom_OnFrame:
	map_script_2 VAR_TEMP_1, 0, DIFA_ChampionsRoom_EventScript_EnterRoom
	.2byte 0

DIFA_ChampionsRoom_EventScript_EnterRoom::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
	waitmovement 0
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, DIFA_ChampionsRoom_Movement_PlayerApproachSioli
	waitmovement 0
	setvar VAR_TEMP_1, 1
	goto DIFA_ChampionsRoom_EventScript_Sioli
	releaseall
	end

DIFA_ChampionsRoom_Movement_PlayerApproachSioli:
	walk_up
	walk_up
	step_end

DIFA_ChampionsRoom_EventScript_Sioli::
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
	msgbox DIFA_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SIOLI, DIFA_ChampionsRoom_Text_Defeat
	goto DIFA_ChampionsRoom_EventScript_Defeated
	end

DIFA_ChampionsRoom_EventScript_Defeated::
	playse SE_DOOR
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
	special DrawWholeMapView
	msgbox DIFA_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SIOLI, DIFA_ChampionsRoom_Movement_SioliExit
	waitmovement 0

	playse SE_DOOR
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	addobject LOCALID_BIRCH
	applymovement LOCALID_BIRCH, DIFA_ChampionsRoom_Movement_TagliaApproachPlayer
	waitmovement 0
	msgbox DIFA_ChampionsRoom_Text_TagliaSiCongratula, MSGBOX_DEFAULT
	closemessage
	delay 30
	playse SE_PIN
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
	waitmovement 0
	msgbox DIFA_ChampionsRoom_Text_TagliaSiEntra, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLACE, DIFA_ChampionsRoom_Movement_TagliaExit
	applymovement OBJ_EVENT_ID_PLAYER, DIFA_ChampionsRoom_Movement_PlayerExit
	waitmovement 0
	warp MAP_DIFA_HALL_OF_FAME, 7, 16
	waitstate
	releaseall
	end

DIFA_ChampionsRoom_Movement_TagliaApproachPlayer:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_in_place_faster_right
	step_end

DIFA_ChampionsRoom_Movement_PlayerExit:
	delay_16
	delay_16
	walk_up
	walk_up
	walk_up
	delay_16
	walk_up
	delay_8
	set_invisible
	step_end

DIFA_ChampionsRoom_Movement_TagliaExit:
	walk_up
	walk_right
	walk_up
	walk_up
	delay_16
	walk_up
	delay_8
	set_invisible
	step_end

DIFA_ChampionsRoom_Movement_SioliExit:
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end

DIFA_ChampionsRoom_Text_IntroSpeech::
	.string "Benvenuto, Andrea.\p"
	.string "Le mie congratulazioni per essere\n"
	.string "arrivato fin qui. Io sono il tuo\l"
	.string "esaminatore finale.\p"
	.string "Il mio nome è MAXIMILIAN SIOLI, e non\n"
	.string "sarò buono quanto sono sexy.\p"
	.string "Avanti, cominciamo!$"

DIFA_ChampionsRoom_Text_Defeat::
	.string "È finita...$"

DIFA_ChampionsRoom_Text_PostBattleSpeech::
	.string "SIOLI: Complimenti ragazzo, mi sembrano\n"
	.string "degli ottimi risultati.\p"
	.string "Cortemente, aspetta qui mentre discuto\n"
	.string "con la commissione.$"

DIFA_ChampionsRoom_Text_TagliaSiCongratula::
	.string "MCP: Grande Gas, ce l'hai fatta! Ho\n"
	.string "saputo che Kamentchik ha fatto lo\l"
	.string "stronzo, ti ha dato 29. Speriamo che\l"
	.string "non ti giochi la LODE, cazzo.$"

DIFA_ChampionsRoom_Text_TagliaSiEntra::
	.string "MCP: È ora di entrare! Daje andiamo.$"
