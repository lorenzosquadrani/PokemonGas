EmiliaRoad_PistaSkateSouth_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EmiliaRoad_PistaSkateSouth_OnTransition
	.byte 0

EmiliaRoad_PistaSkateSouth_OnTransition:
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 3, EmiliaRoad_PistaSkateSouth_EventScript_RestartChallenge
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 2, EmiliaRoad_PistaSkateSouth_EventScript_RestartChallenge
	end

EmiliaRoad_PistaSkateSouth_EventScript_RestartChallenge::
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
	return

EmiliaRoad_PistaSkateSouth_EventScript_Clerk::
	lock
	faceplayer
	msgbox EmiliaRoad_PistaSkateSouth_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
	release
	end

EmiliaRoad_PistaSkateSouth_EventScript_BikeCheck::
	lockall
	specialvar VAR_RESULT, GetPlayerAvatarBike
	call_if_eq VAR_RESULT, 2, EmiliaRoad_PistaSkateSouth_EventScript_OnMachBike
	goto_if_eq VAR_RESULT, 0, EmiliaRoad_PistaSkateSouth_EventScript_NoBike
	setflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 1
	releaseall
	end

EmiliaRoad_PistaSkateSouth_EventScript_OnMachBike::
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
	return

EmiliaRoad_PistaSkateSouth_EventScript_NoBike::
	msgbox EmiliaRoad_PistaSkateSouth_Text_TooDangerousToWalk, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, EmiliaRoad_PistaSkateSouth_Movement_PushPlayerBackFromCounter
	waitmovement 0
	releaseall
	end

EmiliaRoad_PistaSkateSouth_Movement_PushPlayerBackFromCounter:
	walk_left
	step_end

EmiliaRoad_PistaSkateSouth_EventScript_ClearCyclingRoad::
	lockall
	setvar VAR_CYCLING_CHALLENGE_STATE, 0
	clearflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 0
	releaseall
	end

EmiliaRoad_PistaSkateSouth_Text_GoAllOutOnCyclingRoad:
	.string "On CYCLING ROAD, you can go all out\n"
	.string "and cycle as fast as you'd like.\p"
	.string "It feels great to go that fast, but try\n"
	.string "not to crash into anyone!$"

EmiliaRoad_PistaSkateSouth_Text_TooDangerousToWalk:
	.string "Sorry, you can't walk on CYCLING\n"
	.string "ROAD. It's too dangerous.\p"
	.string "Please come back with a BIKE.$"

