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
	goto_if_set FLAG_DEFEATED_ELITE_4_CASTELLANI, DIFA_StanzaCastellani_EventScript_Castellani_2
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox DIFA_StanzaCastellani_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CASTELLANI, DIFA_StanzaCastellani_Text_Defeat
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	setflag FLAG_DEFEATED_ELITE_4_CASTELLANI
	msgbox DIFA_StanzaCastellani_Text_PostBattleSpeech, MSGBOX_DEFAULT
DIFA_StanzaCastellani_EventScript_Castellani_1:
	release
	end

DIFA_StanzaCastellani_EventScript_Castellani_2:
	msgbox DIFA_StanzaCastellani_Text_PostBattleSpeech, MSGBOX_DEFAULT
	goto DIFA_StanzaCastellani_EventScript_Castellani_1


DIFA_StanzaCastellani_Text_IntroSpeech::
	.string "Buongiorno, signor Gaspari.\p"
	.string "Sono lieto, si fa per dire, di darle il\n"
	.string "benventuo al suo primo esame. Per\l"
	.string "conseguire la sua laurea ovviamente\l"
	.string "dovrà passare tutti gli esami, ma non si\l"
	.string "preoccupi, il mio è facile.\p"
	.string "Sono il professor UGUZZONI, e mi sono\n"
	.string "già rotto i COGLIONI. Cominciamo!$"

DIFA_StanzaCastellani_Text_Defeat::
	.string "Una successione di sconfitte, ma almeno\n"
	.string "è limitata AHAH$"

DIFA_StanzaCastellani_Text_PostBattleSpeech::
	.string "Ok, per me basta così Gaspari. Ti dò 30L,\n"
	.string "vai pure avanti.$"
