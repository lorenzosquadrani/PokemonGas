.set LOCALID_MOM, 1

RiminiTown_CasaGas_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RiminiTown_CasaGas_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RiminiTown_CasaGas_1F_OnFrame
	.byte 0

RiminiTown_CasaGas_1F_OnTransition:
	call_if_eq VAR_RIMINI_INTRO_STATE, 3, RiminiTown_CasaGas_1F_EventScript_PlaceMom
	end

RiminiTown_CasaGas_1F_OnFrame:
	map_script_2 VAR_RIMINI_INTRO_STATE, 3, RiminiTown_CasaGas_1F_EventScript_DadSpeech
	.2byte 0

RiminiTown_CasaGas_1F_EventScript_PlaceMom::
	setobjectxyperm LOCALID_MOM, 9, 8
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
	return


RiminiTown_CasaGas_1F_EventScript_DadSpeech::
	lockall
	msgbox RiminiTown_CasaGas_1F_EventScript_DadSpeech_Text_0
	setvar VAR_RIMINI_INTRO_STATE, 4
	releaseall
	end


RiminiTown_CasaGas_1F_EventScript_DadSpeech_Text_0:
	.string "MOM: Guarda un po' chi è tornato,\n"
	.string "tesoro.$"
