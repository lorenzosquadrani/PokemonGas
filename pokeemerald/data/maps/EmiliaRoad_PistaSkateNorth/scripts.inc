EmiliaRoad_PistaSkateNorth_MapScripts::
	.byte 0

EmiliaRoad_PistaSkateNorth_EventScript_Clerk::
	lock
	faceplayer
	msgbox EmiliaRoad_PistaSkateNorth_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
	release
	end

EmiliaRoad_PistaSkateNorth_EventScript_BikeCheck::
	lockall
	specialvar VAR_RESULT, GetPlayerAvatarBike
	goto_if_eq VAR_RESULT, 0, EmiliaRoad_PistaSkateNorth_EventScript_NoBike
	setflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 1
	releaseall
	end

EmiliaRoad_PistaSkateNorth_EventScript_NoBike::
	msgbox EmiliaRoad_PistaSkateNorth_Text_TooDangerousToWalk, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, EmiliaRoad_PistaSkateNorth_Movement_PushPlayerBackFromCounter
	waitmovement 0
	releaseall
	end

EmiliaRoad_PistaSkateNorth_Movement_PushPlayerBackFromCounter:
	walk_left
	step_end

EmiliaRoad_PistaSkateNorth_EventScript_ClearCyclingRoad::
	lockall
	clearflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 0
	releaseall
	end

EmiliaRoad_PistaSkateNorth_Text_GoAllOutOnCyclingRoad:
	.string "Circolare.$"

EmiliaRoad_PistaSkateNorth_Text_TooDangerousToWalk:
	.string "Scusa giovanotto.\n"
	.string "Dove credi di andare senza\n"
	.string "uno skateboard?$"
