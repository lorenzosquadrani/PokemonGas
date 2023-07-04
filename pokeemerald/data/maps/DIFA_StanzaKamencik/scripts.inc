DIFA_StanzaKamencik_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DIFA_StanzaKamencik_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, DIFA_StanzaKamencik_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, DIFA_StanzaUguccioni_OnWarp
	.byte 0

@ Unused, Kamencik uses uguccionis identical OnWarp for some reason
DIFA_StanzaKamencik_OnWarp:
	map_script_2 VAR_TEMP_1, 0, DIFA_StanzaKamencik_EventScript_PlayerTurnNorth
	.2byte 0

DIFA_StanzaKamencik_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

DIFA_StanzaKamencik_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 3, DIFA_StanzaKamencik_EventScript_WalkInCloseDoor
	.2byte 0

DIFA_StanzaKamencik_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 4
	releaseall
	end

DIFA_StanzaKamencik_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_KAMENCIK, DIFA_StanzaKamencik_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 4, DIFA_StanzaKamencik_EventScript_CloseDoor
	end

DIFA_StanzaKamencik_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

DIFA_StanzaKamencik_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

DIFA_StanzaKamencik_EventScript_Kamencik::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_KAMENCIK, DIFA_StanzaKamencik_EventScript_Kamencik_2
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox DIFA_StanzaKamencik_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_KAMENCIK, DIFA_StanzaKamencik_Text_Defeat
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	setflag FLAG_DEFEATED_ELITE_4_KAMENCIK
	msgbox DIFA_StanzaKamencik_Text_PostBattleSpeech, MSGBOX_DEFAULT
DIFA_StanzaKamencik_EventScript_Kamencik_1:
	release
	end

DIFA_StanzaKamencik_EventScript_Kamencik_2:
	msgbox DIFA_StanzaKamencik_Text_PostBattleSpeech, MSGBOX_DEFAULT
	goto DIFA_StanzaKamencik_EventScript_Kamencik_1


DIFA_StanzaKamencik_Text_IntroSpeech::
	.string "Salve, io sono il professor Kamentchik e\n"
	.string "davero posiamo già cominciere l'esame.$"

DIFA_StanzaKamencik_Text_Defeat::
	.string "Sìsì, lei ha ragione.$"

DIFA_StanzaKamencik_Text_PostBattleSpeech::
	.string "Per me è suficiente, le dò un 29.\n"
	.string "Prosegua pure per la sua ultima sfida.$"
