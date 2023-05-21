.set LOCALID_BIRCH, 2
.set LOCALID_ZIGZAGOON, 4

Marecchia_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Marecchia_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Marecchia_OnFrame
	.byte 0

Marecchia_OnTransition:
	call ProfBirch_EventScript_UpdateLocation
	end

Marecchia_OnFrame:
	map_script_2 VAR_MARECCHIA_STATE, 0, Marecchia_EventScript_HideMapNamePopup
	.2byte 0

Marecchia_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_MARECCHIA_STATE, 1
	end

Marecchia_EventScript_StartBirchRescue::
	lockall
	playbgm MUS_HELP, TRUE
	msgbox Marecchia_Text_HelpMe, MSGBOX_DEFAULT
	closemessage
	setobjectxy LOCALID_BIRCH, 0, 15
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
	applymovement OBJ_EVENT_ID_PLAYER, Marecchia_Movement_EnterScene
	applymovement LOCALID_BIRCH, Marecchia_Movement_BirchRunAway1
	applymovement LOCALID_ZIGZAGOON, Marecchia_Movement_ZigzagoonChase1
	waitmovement 0
	applymovement LOCALID_ZIGZAGOON, Marecchia_Movement_ZigzagoonChaseInCircles
	applymovement LOCALID_BIRCH, Marecchia_Movement_BirchRunInCircles
	waitmovement 0
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement LOCALID_ZIGZAGOON, Marecchia_Movement_ZigzagoonFaceBirch
	applymovement LOCALID_BIRCH, Marecchia_Movement_BirchFaceZigzagoon
	waitmovement 0
	msgbox Marecchia_Text_PleaseHelp, MSGBOX_DEFAULT
	closemessage
	setvar VAR_MARECCHIA_STATE, 2
	releaseall
	end

Marecchia_EventScript_PreventExitSouth::
	lockall
	msgbox Marecchia_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Marecchia_Movement_PreventExitSouth
	waitmovement 0
	releaseall
	end

Marecchia_EventScript_PreventExitWest::
	lockall
	msgbox Marecchia_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Marecchia_Movement_PreventExitWest
	waitmovement 0
	releaseall
	end

Marecchia_EventScript_PreventExitNorth::
	lockall
	msgbox Marecchia_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Marecchia_Movement_PreventExitNorth
	waitmovement 0
	releaseall
	end

Marecchia_Movement_PreventExitSouth:
	walk_up
	step_end

Marecchia_Movement_PreventExitWest:
	walk_right
	step_end

Marecchia_Movement_PreventExitNorth:
	walk_down
	step_end

Marecchia_Movement_ZigzagoonChaseInCircles:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

Marecchia_Movement_ZigzagoonChase1:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

@ Leftover data? This command is unused.
	step_end

Marecchia_Movement_ZigzagoonFaceBirch:
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	step_end

Marecchia_Movement_EnterScene:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_faster_left
	step_end

Marecchia_Movement_BirchRunInCircles:
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Marecchia_Movement_BirchRunAway1:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	step_end

@ Leftover data? This command is unused.
	step_end

Marecchia_Movement_BirchFaceZigzagoon:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	step_end

Marecchia_Movement_Unused1:
	walk_up
	walk_up
	step_end

Marecchia_Movement_Unused2:
	walk_up
	walk_left
	walk_up
	step_end

Marecchia_EventScript_Youngster::
	msgbox Marecchia_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
	end

Marecchia_EventScript_Boy::
	msgbox Marecchia_Text_WildPokemonInTallGrass, MSGBOX_NPC
	end

Marecchia_EventScript_RouteSign::
	msgbox Marecchia_Text_RouteSign, MSGBOX_SIGN
	end

Marecchia_EventScript_BirchsBag::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ZIGZAGOON
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	special ChooseStarter
	waitstate
	applymovement LOCALID_BIRCH, Marecchia_Movement_BirchApproachPlayer
	waitmovement 0
	msgbox Marecchia_Text_YouSavedMe, MSGBOX_DEFAULT
	special HealPlayerParty
	setflag FLAG_HIDE_MARECCHIA_BIRCH_ZIGZAGOON_BATTLE
	clearflag FLAG_HIDE_RIMINI_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_MARECCHIA_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_MARECCHIA_STATE, 3
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Marecchia_EventScript_HideMayInBedroom
	call_if_eq VAR_RESULT, FEMALE, Marecchia_EventScript_HideBrendanInBedroom
	warp MAP_RIMINI_TOWN_CASA_TOMMI, 6, 5
	waitstate
	release
	end

Marecchia_EventScript_HideMayInBedroom::
	setflag FLAG_HIDE_RIMINI_TOWN_CASA_STE_RIVAL_BEDROOM
	return

Marecchia_EventScript_HideBrendanInBedroom::
	setflag FLAG_HIDE_RIMINI_TOWN_CASA_GAS_RIVAL_BEDROOM
	return

Marecchia_Movement_BirchApproachPlayer:
	walk_right
	step_end

Marecchia_Text_HelpMe:
	.string "H-help me!$"

Marecchia_Text_PleaseHelp:
	.string "Hello! You over there!\n"
	.string "Please! Help!\p"
	.string "In my BAG!\n"
	.string "There's a POKé BALL!$"

Marecchia_Text_DontLeaveMe:
	.string "Wh-Where are you going?!\n"
	.string "Don't leave me like this!$"

Marecchia_Text_YouSavedMe:
	.string "PROF. BIRCH: Whew…\p"
	.string "I was in the tall grass studying wild\n"
	.string "POKéMON when I was jumped.\p"
	.string "You saved me.\n"
	.string "Thanks a lot!\p"
	.string "Oh?\p"
	.string "Hi, you're {PLAYER}{KUN}!\p"
	.string "This is not the place to chat, so come\n"
	.string "by my POKéMON LAB later, okay?$"

Marecchia_Text_TakeTiredPokemonToPokeCenter:
	.string "If POKéMON get tired, take them to\n"
	.string "a POKéMON CENTER.\p"
	.string "There's a POKéMON CENTER in BOLOGNA\n"
	.string "TOWN right close by.$"

Marecchia_Text_WildPokemonInTallGrass:
	.string "Wild POKéMON will jump out at you in\n"
	.string "tall grass.\p"
	.string "If you want to catch POKéMON, you have\n"
	.string "to go into the tall grass and search.$"

Marecchia_Text_RouteSign:
	.string "ROUTE 101\n"
	.string "{UP_ARROW} BOLOGNA TOWN$"

