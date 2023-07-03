DIFA_StanzaCastellani_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DIFA_StanzaCastellani_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, DIFA_StanzaCastellani_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, DIFA_StanzaCastellani_OnWarp
	.byte 0

DIFA_StanzaCastellani_OnWarp:
	map_script_2 VAR_TEMP_1, 0, DIFA_StanzaCastellani_EventScript_PlayerTurnNorth
	.2byte 0

DIFA_StanzaCastellani_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

DIFA_StanzaCastellani_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 2, DIFA_StanzaCastellani_EventScript_WalkInCloseDoor
	.2byte 0

DIFA_StanzaCastellani_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 3
	releaseall
	end

DIFA_StanzaCastellani_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_CASTELLANI, DIFA_StanzaCastellani_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 3, DIFA_StanzaCastellani_EventScript_CloseDoor
	end

DIFA_StanzaCastellani_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

DIFA_StanzaCastellani_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

DIFA_StanzaCastellani_EventScript_Castellani::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_CASTELLANI, DIFA_StanzaCastellani_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox DIFA_StanzaCastellani_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CASTELLANI, DIFA_StanzaCastellani_Text_Defeat
	goto DIFA_StanzaCastellani_EventScript_Defeated
	end

DIFA_StanzaCastellani_EventScript_PostBattleSpeech::
	msgbox DIFA_StanzaCastellani_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

DIFA_StanzaCastellani_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_CASTELLANI
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox DIFA_StanzaCastellani_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

DIFA_StanzaCastellani_Text_IntroSpeech:
	.string "Welcome, my name is CASTELLANI\n"
	.string "of the ELITE FOUR.\p"
	.string "I've traveled from afar to HOENN\n"
	.string "so that I may hone my ice skills.\p"
	.string "But all I have seen are challenges by\n"
	.string "weak TRAINERS and their POKéMON.\p"
	.string "What about you?\p"
	.string "It would please me to no end if I could\n"
	.string "go all out against you!$"

DIFA_StanzaCastellani_Text_Defeat:
	.string "You and your POKéMON…\n"
	.string "How hot your spirits burn!\p"
	.string "The all-consuming heat overwhelms.\p"
	.string "It's no surprise that my icy skills\n"
	.string "failed to harm you.$"

DIFA_StanzaCastellani_Text_PostBattleSpeech:
	.string "Advance to the next room.\p"
	.string "And there, confirm the truly fearsome\n"
	.string "side of the POKéMON LEAGUE.$"

