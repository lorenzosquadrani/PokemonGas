.set LOCALID_MART_EMPLOYEE, 2
.set LOCALID_FOOTPRINTS_MAN, 3
.set LOCALID_RIVAL, 4

BolognaTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BolognaTown_OnTransition
	.byte 0

BolognaTown_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	setflag FLAG_VISITED_BOLOGNA_TOWN
	call_if_unset FLAG_ADVENTURE_STARTED, BolognaTown_EventScript_BlockWestEntrance
	call_if_unset FLAG_RECEIVED_POTION_BOLOGNA, BolognaTown_EventScript_MoveMartEmployee
	call_if_set FLAG_ADVENTURE_STARTED, BolognaTown_EventScript_SetBolognaState
	end

@ This script seems pointless because nothing uses VAR_BOLOGNA_TOWN_STATE
BolognaTown_EventScript_SetBolognaState::
	setvar VAR_BOLOGNA_TOWN_STATE, 1
	return

BolognaTown_EventScript_BlockWestEntrance::
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
	return

BolognaTown_EventScript_MoveMartEmployee::
	setobjectxyperm LOCALID_MART_EMPLOYEE, 13, 14
	setobjectmovementtype LOCALID_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
	return

BolognaTown_EventScript_TownSign::
	msgbox BolognaTown_Text_TownSign, MSGBOX_SIGN
	end

BolognaTown_EventScript_Girl::
	msgbox BolognaTown_Text_SavingMyProgress, MSGBOX_NPC
	end

BolognaTown_EventScript_MartEmployee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POTION_BOLOGNA, BolognaTown_EventScript_ExplainPotion
	goto_if_set FLAG_TEMP_1, BolognaTown_EventScript_ExplainPotion
	setflag FLAG_TEMP_1
	playbgm MUS_FOLLOW_ME, FALSE
	msgbox BolognaTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, BolognaTown_EventScript_GoToMartSouth
	case DIR_NORTH, BolognaTown_EventScript_GoToMartNorth
	case DIR_EAST, BolognaTown_EventScript_GoToMartEast
	end

BolognaTown_EventScript_GoToMartSouth::
	applymovement LOCALID_MART_EMPLOYEE, BolognaTown_Movement_EmployeeSouth
	applymovement OBJ_EVENT_ID_PLAYER, BolognaTown_Movement_PlayerSouth
	waitmovement 0
	goto BolognaTown_EventScript_ExplainPokemonMart
	end

BolognaTown_EventScript_GoToMartNorth::
	applymovement LOCALID_MART_EMPLOYEE, BolognaTown_Movement_EmployeeNorth
	applymovement OBJ_EVENT_ID_PLAYER, BolognaTown_Movement_PlayerNorth
	waitmovement 0
	goto BolognaTown_EventScript_ExplainPokemonMart
	end

BolognaTown_EventScript_GoToMartEast::
	applymovement OBJ_EVENT_ID_PLAYER, BolognaTown_Movement_PlayerEast
	applymovement LOCALID_MART_EMPLOYEE, BolognaTown_Movement_EmployeeEast
	waitmovement 0
	goto BolognaTown_EventScript_ExplainPokemonMart
	end

BolognaTown_EventScript_ExplainPokemonMart::
	msgbox BolognaTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
	giveitem ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, BolognaTown_EventScript_BagIsFull
	msgbox BolognaTown_Text_PotionExplanation, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_POTION_BOLOGNA
	fadedefaultbgm
	release
	end

BolognaTown_EventScript_ExplainPotion::
	msgbox BolognaTown_Text_PotionExplanation, MSGBOX_DEFAULT
	release
	end

BolognaTown_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	fadedefaultbgm
	release
	end

BolognaTown_Movement_EmployeeEast:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

BolognaTown_Movement_EmployeeSouth:
	walk_left
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

BolognaTown_Movement_EmployeeNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

BolognaTown_Movement_Unknown1:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	walk_in_place_faster_down
	step_end

BolognaTown_Movement_PlayerEast:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BolognaTown_Movement_PlayerSouth:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BolognaTown_Movement_PlayerNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BolognaTown_Movement_Unknown2:
	walk_left
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BolognaTown_EventScript_FootprintsMan::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, BolognaTown_EventScript_NotBlockingPath
	msgbox BolognaTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

BolognaTown_EventScript_BlockedPath::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, BolognaTown_Movement_PlayerStepBack
	applymovement LOCALID_FOOTPRINTS_MAN, BolognaTown_Movement_BackUp
	waitmovement 0
	msgbox BolognaTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, BolognaTown_Movement_ReturnToOriginalPosition
	waitmovement 0
	releaseall
	end

BolognaTown_EventScript_NotBlockingPath::
	msgbox BolognaTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
	release
	end

BolognaTown_EventScript_Rival::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	setvar VAR_0x8009, 0
	goto BolognaTown_EventScript_ShowRivalMessage
	end

BolognaTown_EventScript_RivalTrigger1::
	lockall
	applymovement LOCALID_RIVAL, BolognaTown_Movement_RivalApproachPlayer1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto BolognaTown_EventScript_ShowRivalMessage
	end

BolognaTown_EventScript_RivalTrigger2::
	lockall
	applymovement LOCALID_RIVAL, BolognaTown_Movement_RivalApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto BolognaTown_EventScript_ShowRivalMessage
	end

BolognaTown_EventScript_RivalTrigger3::
	lockall
	applymovement LOCALID_RIVAL, BolognaTown_Movement_RivalApproachPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto BolognaTown_EventScript_ShowRivalMessage
	end

BolognaTown_EventScript_ShowRivalMessage::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, BolognaTown_EventScript_ShowMayMessage
	goto_if_eq VAR_RESULT, FEMALE, BolognaTown_EventScript_ShowBrendanMessage
	end

BolognaTown_EventScript_ShowMayMessage::
	msgbox BolognaTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
	goto BolognaTown_EventScript_RivalFinish
	end

BolognaTown_EventScript_ShowBrendanMessage::
	msgbox BolognaTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
	goto BolognaTown_EventScript_RivalFinish
	end

BolognaTown_EventScript_RivalFinish::
	closemessage
	call_if_eq VAR_0x8009, 0, BolognaTown_EventScript_DoExitMovement1
	call_if_eq VAR_0x8009, 1, BolognaTown_EventScript_DoExitMovement2
	applymovement LOCALID_RIVAL, BolognaTown_Movement_RivalExit
	waitmovement 0
	removeobject LOCALID_RIVAL
	setvar VAR_BOLOGNA_RIVAL_STATE, 2
	setflag FLAG_HIDE_BOLOGNA_TOWN_RIVAL
	releaseall
	end

BolognaTown_EventScript_DoExitMovement1::
	goto_if_ne VAR_FACING, DIR_SOUTH, BolognaTown_EventScript_DoExitMovement2
	applymovement LOCALID_RIVAL, BolognaTown_Movement_RivalExit
	waitmovement 0
	return

BolognaTown_EventScript_DoExitMovement2::
	applymovement OBJ_EVENT_ID_PLAYER, BolognaTown_Movement_WatchRivalExit
	applymovement LOCALID_RIVAL, BolognaTown_Movement_RivalExit
	waitmovement 0
	return

BolognaTown_Movement_RivalApproachPlayer1:
	walk_left
	walk_left
	step_end

BolognaTown_Movement_RivalApproachPlayer2:
	walk_left
	step_end

BolognaTown_Movement_RivalApproachPlayer3:
	face_left
	step_end

BolognaTown_Movement_RivalExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

BolognaTown_Movement_WatchRivalExit:
	delay_8
	delay_4
	walk_in_place_faster_down
	step_end

BolognaTown_Movement_PlayerStepBack:
	delay_8
	walk_right
	step_end

BolognaTown_Movement_BackUp:
	walk_fast_up
	walk_in_place_faster_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

BolognaTown_Movement_ReturnToOriginalPosition:
	walk_down
	walk_left
	step_end

BolognaTown_Text_SavingMyProgress:
	.string "I want to take a rest, so I'm saving my\n"
	.string "progress.$"

BolognaTown_Text_IWorkAtPokemonMart:
	.string "Hi!\n"
	.string "I work at a POKéMON MART.\p"
	.string "Can I get you to come with me?$"

BolognaTown_Text_ThisIsAPokemonMart:
	.string "This is a POKéMON MART.\n"
	.string "Just look for our blue roof.\p"
	.string "We sell a variety of goods including\n"
	.string "POKé BALLS for catching POKéMON.\p"
	.string "Here, I'd like you to have this as\n"
	.string "a promotional item.$"

BolognaTown_Text_PotionExplanation:
	.string "A POTION can be used anytime, so it's\n"
	.string "even more useful than a POKéMON CENTER\l"
	.string "in certain situations.$"

BolognaTown_Text_WaitDontComeInHere:
	.string "Aaaaah! Wait!\n"
	.string "Please don't come in here.\p"
	.string "I just discovered the footprints of\n"
	.string "a rare POKéMON!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

BolognaTown_Text_DiscoveredFootprints:
	.string "I just discovered the footprints of\n"
	.string "a rare POKéMON!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

BolognaTown_Text_FinishedSketchingFootprints:
	.string "I finished sketching the footprints of\n"
	.string "a rare POKéMON.\p"
	.string "But it turns out they were only my\n"
	.string "own footprints…$"

BolognaTown_Text_MayLetsGoBack:
	.string "MAY: {PLAYER}{KUN}!\n"
	.string "Over here!\l"
	.string "Let's hurry home!$"

BolognaTown_Text_BrendanLetsGoBack:
	.string "BRENDAN: I'm heading back to my dad's\n"
	.string "LAB now.\l"
	.string "{PLAYER}, you should hustle back, too.$"

BolognaTown_Text_TownSign:
	.string "BOLOGNA TOWN\n"
	.string "“Where things start off scarce.”$"

