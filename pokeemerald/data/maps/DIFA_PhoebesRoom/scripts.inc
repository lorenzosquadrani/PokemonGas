DIFA_PhoebesRoom_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, DIFA_PhoebesRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, DIFA_PhoebesRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DIFA_PhoebesRoom_OnFrame
	.byte 0

DIFA_PhoebesRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, DIFA_PhoebesRoom_EventScript_PlayerTurnNorth
	.2byte 0

DIFA_PhoebesRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

DIFA_PhoebesRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 1, DIFA_PhoebesRoom_EventScript_WalkInCloseDoor
	.2byte 0

DIFA_PhoebesRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 2
	releaseall
	end

DIFA_PhoebesRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, DIFA_PhoebesRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 2, DIFA_PhoebesRoom_EventScript_CloseDoor
	end

DIFA_PhoebesRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

DIFA_PhoebesRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

DIFA_PhoebesRoom_EventScript_Phoebe::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, DIFA_PhoebesRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox DIFA_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_PHOEBE, DIFA_PhoebesRoom_Text_Defeat
	goto DIFA_PhoebesRoom_EventScript_Defeated
	end

DIFA_PhoebesRoom_EventScript_PostBattleSpeech::
	msgbox DIFA_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

DIFA_PhoebesRoom_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox DIFA_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

DIFA_PhoebesRoom_Text_IntroSpeech:
	.string "Ahahaha!\p"
	.string "I'm PHOEBE of the ELITE FOUR.\n"
	.string "I did my training on MT. PYRE.\p"
	.string "While I trained, I gained the ability\n"
	.string "to commune with GHOST-type POKéMON.\p"
	.string "Yes, the bond I developed with POKéMON\n"
	.string "is extremely tight.\p"
	.string "So, come on, just try and see if you can\n"
	.string "even inflict damage on my POKéMON!$"

DIFA_PhoebesRoom_Text_Defeat:
	.string "Oh, darn.\n"
	.string "I've gone and lost.$"

DIFA_PhoebesRoom_Text_PostBattleSpeech:
	.string "There's a definite bond between you\n"
	.string "and your POKéMON, too.\p"
	.string "I didn't recognize it, so it's only\n"
	.string "natural that I lost.\p"
	.string "Yup, I'd like to see how far your bond\n"
	.string "will carry you.\p"
	.string "Go ahead, move on to the next room.$"

