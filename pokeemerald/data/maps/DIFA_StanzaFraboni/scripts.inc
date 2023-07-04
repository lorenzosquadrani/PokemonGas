DIFA_StanzaFraboni_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, DIFA_StanzaFraboni_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, DIFA_StanzaFraboni_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DIFA_StanzaFraboni_OnFrame
	.byte 0

DIFA_StanzaFraboni_OnWarp:
	map_script_2 VAR_TEMP_1, 0, DIFA_StanzaFraboni_EventScript_PlayerTurnNorth
	.2byte 0

DIFA_StanzaFraboni_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

DIFA_StanzaFraboni_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 1, DIFA_StanzaFraboni_EventScript_WalkInCloseDoor
	.2byte 0

DIFA_StanzaFraboni_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 2
	releaseall
	end

DIFA_StanzaFraboni_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_FRABONI, DIFA_StanzaFraboni_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 2, DIFA_StanzaFraboni_EventScript_CloseDoor
	end

DIFA_StanzaFraboni_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

DIFA_StanzaFraboni_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

DIFA_StanzaFraboni_EventScript_Fraboni::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_FRABONI, DIFA_StanzaFraboni_EventScript_Fraboni_2
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox DIFA_StanzaFraboni_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_FRABONI, DIFA_StanzaFraboni_Text_Defeat
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	setflag FLAG_DEFEATED_ELITE_4_FRABONI
	msgbox DIFA_StanzaFraboni_Text_PostBattleSpeech, MSGBOX_DEFAULT
DIFA_StanzaFraboni_EventScript_Fraboni_1:
	release
	end

DIFA_StanzaFraboni_EventScript_Fraboni_2:
	msgbox DIFA_StanzaFraboni_Text_PostBattleSpeech, MSGBOX_DEFAULT
	goto DIFA_StanzaFraboni_EventScript_Fraboni_1


DIFA_StanzaFraboni_Text_IntroSpeech::
	.string "Oh ma guarda che bel ragazzo abbiamo\n"
	.string "qui!\p"
	.string "Ciao Andrea, io sono la professoresa\n"
	.string "FRABONI, e non vedo l'ora di vedere\l"
	.string "cosa tu e i tuoi Pokémons sapete fare.\l"
	.string "Combattiamo!$"

DIFA_StanzaFraboni_Text_Defeat::
	.string "Caspiterina, sei proprio forte.$"

DIFA_StanzaFraboni_Text_PostBattleSpeech::
	.string "Ottimo, Andrea. Non mi sarei aspettata\n"
	.string "di meno da un bel ragazzone come te.\l"
	.string "Chissà cos'altro sai fare bene... Ti\l"
	.string "segno un bel 30L ovviamente, in bocca\l"
	.string "al lupo!$"
