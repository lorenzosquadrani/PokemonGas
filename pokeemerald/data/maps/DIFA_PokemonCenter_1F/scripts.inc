.set LOCALID_NURSE, 1
.set LOCALID_SCOTT, 4

DIFA_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DIFA_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

DIFA_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_DIFA
	call_if_unset FLAG_MET_SCOTT_IN_DIFA, DIFA_PokemonCenter_1F_EventScript_TryShowScott
	end

DIFA_PokemonCenter_1F_EventScript_TryShowScott::
	goto_if_unset FLAG_BADGE06_GET, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_DIFA_POKEMON_CENTER_1F_SCOTT
	return

DIFA_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

DIFA_PokemonCenter_1F_EventScript_Woman::
	msgbox DIFA_PokemonCenter_1F_Text_LeagueAfterVictoryRoad, MSGBOX_NPC
	end

DIFA_PokemonCenter_1F_EventScript_ExpertM::
	msgbox DIFA_PokemonCenter_1F_Text_BelieveInYourPokemon, MSGBOX_NPC
	end

DIFA_PokemonCenter_1F_EventScript_Scott::
	lock
	faceplayer
	msgbox DIFA_PokemonCenter_1F_Text_ScottHappyForYou, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, DIFA_PokemonCenter_1F_EventScript_ScottExitNorth
	call_if_eq VAR_FACING, DIR_EAST, DIFA_PokemonCenter_1F_EventScript_ScottExit
	call_if_eq VAR_FACING, DIR_WEST, DIFA_PokemonCenter_1F_EventScript_ScottExit
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_IN_DIFA
	playse SE_EXIT
	waitse
	removeobject LOCALID_SCOTT
	release
	end

DIFA_PokemonCenter_1F_EventScript_ScottExitNorth::
	applymovement LOCALID_SCOTT, DIFA_PokemonCenter_1F_Movement_ScottExitNorth
	waitmovement 0
	return

DIFA_PokemonCenter_1F_EventScript_ScottExit::
	applymovement LOCALID_SCOTT, DIFA_PokemonCenter_1F_Movement_ScottExit
	waitmovement 0
	return

DIFA_PokemonCenter_1F_Movement_ScottExitNorth:
	walk_left
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	step_end

DIFA_PokemonCenter_1F_Movement_ScottExit:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

DIFA_PokemonCenter_1F_Text_LeagueAfterVictoryRoad:
	.string "The POKéMON LEAGUE is only a short\n"
	.string "distance after the VICTORY ROAD.\p"
	.string "If you've come this far, what choice\n"
	.string "do you have but to keep going?$"

DIFA_PokemonCenter_1F_Text_BelieveInYourPokemon:
	.string "The long and harrowing VICTORY ROAD…\p"
	.string "It's like reliving the path one has\n"
	.string "traveled in life…\p"
	.string "Believe in your POKéMON and give it\n"
	.string "your very best!$"

DIFA_PokemonCenter_1F_Text_ScottHappyForYou:
	.string "SCOTT: {PLAYER}{KUN}, you've clawed your\n"
	.string "way up to face the POKéMON LEAGUE!\p"
	.string "I'm happy for you!\n"
	.string "You made my cheering worthwhile!\p"
	.string "{PLAYER}{KUN}, if you were to become\n"
	.string "the POKéMON LEAGUE CHAMPION…\p"
	.string "I'll get in touch with you then.\p"
	.string "Okay, {PLAYER}{KUN}.\n"
	.string "Go for greatness!$"

