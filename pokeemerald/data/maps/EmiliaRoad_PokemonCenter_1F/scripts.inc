.set LOCALID_NURSE, 1
.set LOCALID_LANETTE, 4

EmiliaRoad_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EmiliaRoad_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

EmiliaRoad_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_EMILIA_ROAD
	call Common_EventScript_UpdateBrineyLocation
	end

EmiliaRoad_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

EmiliaRoad_PokemonCenter_1F_EventScript_Girl::
	msgbox EmiliaRoad_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
	end

EmiliaRoad_PokemonCenter_1F_EventScript_ExpertM::
	msgbox EmiliaRoad_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
	end

EmiliaRoad_PokemonCenter_1F_EventScript_Lanette::
	lock
	faceplayer
	msgbox EmiliaRoad_PokemonCenter_1F_Text_LanetteGreeting, MSGBOX_DEFAULT
	closemessage
	switch VAR_FACING
	case DIR_NORTH, EmiliaRoad_PokemonCenter_1F_EventScript_LanetteExitNorth
	case DIR_WEST, EmiliaRoad_PokemonCenter_1F_EventScript_LanetteExitWest
	end

EmiliaRoad_PokemonCenter_1F_EventScript_LanetteExitNorth::
	applymovement LOCALID_LANETTE, EmiliaRoad_PokemonCenter_1F_Movement_LanetteExitNorth
	waitmovement 0
	goto EmiliaRoad_PokemonCenter_1F_EventScript_LanetteExited
	end

EmiliaRoad_PokemonCenter_1F_EventScript_LanetteExitWest::
	applymovement LOCALID_LANETTE, EmiliaRoad_PokemonCenter_1F_Movement_LanetteExitWest
	waitmovement 0
	goto EmiliaRoad_PokemonCenter_1F_EventScript_LanetteExited
	end

EmiliaRoad_PokemonCenter_1F_EventScript_LanetteExited::
	playse SE_SLIDING_DOOR
	removeobject LOCALID_LANETTE
	clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
	release
	end

EmiliaRoad_PokemonCenter_1F_Movement_LanetteExitNorth:
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

EmiliaRoad_PokemonCenter_1F_Movement_LanetteExitWest:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

EmiliaRoad_PokemonCenter_1F_Text_LanetteGreeting:
	.string "Oh, hello.\n"
	.string "You are?\p"
	.string "Okay, your name's {PLAYER}{KUN}.\n"
	.string "I can see that you're a TRAINER.\p"
	.string "So that means you use the POKéMON\n"
	.string "Storage System I developed.\p"
	.string "How I arrived at that conclusion is\n"
	.string "a simple deductive process.\p"
	.string "You spoke to me because you wanted\n"
	.string "to access something on this PC.\p"
	.string "Oh, I'm sorry. I'm LANETTE.\p"
	.string "Honestly, I'm glad to meet you--it's\n"
	.string "great you're using the Storage System.\p"
	.string "If you could, please visit me at home.\n"
	.string "My house is on ROUTE 114.$"

EmiliaRoad_PokemonCenter_1F_Text_FossilManiacEdgeOfTown:
	.string "I wonder what POKéMON looked like\n"
	.string "long, long ago?\p"
	.string "Maybe the FOSSIL MANIAC at the edge\n"
	.string "of town will know.$"

EmiliaRoad_PokemonCenter_1F_Text_PlantHardyTrees:
	.string "In the fields of EMILIA, we plant\n"
	.string "seedlings of hardy trees that thrive\l"
	.string "even in volcanic ash.$"

