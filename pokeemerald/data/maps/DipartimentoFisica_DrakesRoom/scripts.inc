DIFA_DrakesRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DIFA_DrakesRoom_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, DIFA_DrakesRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, DIFA_StanzaUguccioni_OnWarp
	.byte 0

@ Unused, Drake uses uguccionis identical OnWarp for some reason
DIFA_DrakesRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, DIFA_DrakesRoom_EventScript_PlayerTurnNorth
	.2byte 0

DIFA_DrakesRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

DIFA_DrakesRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 3, DIFA_DrakesRoom_EventScript_WalkInCloseDoor
	.2byte 0

DIFA_DrakesRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 4
	releaseall
	end

DIFA_DrakesRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_DRAKE, DIFA_DrakesRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 4, DIFA_DrakesRoom_EventScript_CloseDoor
	end

DIFA_DrakesRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

DIFA_DrakesRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

DIFA_DrakesRoom_EventScript_Drake::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, DIFA_DrakesRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox DIFA_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_DRAKE, DIFA_DrakesRoom_Text_Defeat
	goto DIFA_DrakesRoom_EventScript_Defeated
	end

DIFA_DrakesRoom_EventScript_PostBattleSpeech::
	msgbox DIFA_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

DIFA_DrakesRoom_EventScript_Defeated::
	setvar VAR_TEMP_PAR_4, FANCOUNTER_DEFEATED_DRAKE
	special Script_TryGainNewFanFromCounter
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox DIFA_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

DIFA_DrakesRoom_Text_IntroSpeech:
	.string "I am the last of the POKéMON LEAGUE\n"
	.string "ELITE FOUR, DRAKE the DRAGON master!\p"
	.string "In their natural state, POKéMON are\n"
	.string "wild living things. They are free.\p"
	.string "At times, they hinder us.\n"
	.string "At times, they help us.\p"
	.string "For us to battle with POKéMON as\n"
	.string "partners, do you know what it takes?\p"
	.string "Do you know what is needed?\p"
	.string "If you don't, then you will never\n"
	.string "prevail over me!$"

DIFA_DrakesRoom_Text_Defeat:
	.string "Superb, it should be said.$"

DIFA_DrakesRoom_Text_PostBattleSpeech:
	.string "You deserve every credit for coming\n"
	.string "this far as a TRAINER of POKéMON.\p"
	.string "You do seem to know what is needed.\p"
	.string "Yes, what a TRAINER needs is a\n"
	.string "virtuous heart.\p"
	.string "POKéMON touch the good hearts of\n"
	.string "TRAINERS and learn good from wrong.\p"
	.string "They touch the good hearts of\n"
	.string "TRAINERS and grow strong.\p"
	.string "Go! Go onwards!\n"
	.string "The CHAMPION is waiting!$"

