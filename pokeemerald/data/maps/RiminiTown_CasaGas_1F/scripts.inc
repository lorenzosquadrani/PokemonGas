.set LOCALID_MOM, 1
.set LOCALID_DAD, 2

RiminiTown_CasaGas_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RiminiTown_CasaGas_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RiminiTown_CasaGas_1F_OnFrame
	.byte 0

RiminiTown_CasaGas_1F_OnTransition:
	call_if_eq VAR_RIMINI_INTRO_STATE, 1, RiminiTown_CasaGas_1F_EventScript_PlaceMom
	end

RiminiTown_CasaGas_1F_OnFrame:
	map_script_2 VAR_RIMINI_INTRO_STATE, 1, RiminiTown_CasaGas_1F_EventScript_DadSpeech
	.2byte 0

RiminiTown_CasaGas_1F_EventScript_PlaceMom::
	setobjectxyperm LOCALID_MOM, 9, 8
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
	return


RiminiTown_CasaGas_1F_EventScript_DadSpeech::
	lockall
	msgbox RiminiTown_CasaGas_1F_EventScript_DadSpeech_Text_0
	applymovement LOCALID_DAD, RiminiTown_CasaGas_1F_Movement_DadFaceGas
	closemessage
	applymovement LOCALID_MOM, RiminiTown_CasaGas_1F_Movement_MomGoSit
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, RiminiTown_CasaGas_1F_Movement_GasApproachDad
	waitmovement LOCALID_MOM
	msgbox RiminiTown_CasaGas_1F_EventScript_DadSpeech_Text_1
	delay 40
	msgbox RiminiTown_CasaGas_1F_EventScript_DadSpeech_Text_2
	giveitem ITEM_CAFFE
	msgbox RiminiTown_CasaGas_1F_EventScript_DadSpeech_Text_3
	setvar VAR_RIMINI_INTRO_STATE, 2
	releaseall
	end


RiminiTown_CasaGas_1F_Movement_MomGoSit:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	face_right
	step_end

RiminiTown_CasaGas_1F_Movement_GasApproachDad:
	walk_up
	walk_left
	walk_left
	walk_left
	face_up
	step_end

RiminiTown_CasaGas_1F_Movement_DadFaceGas:
	face_down
	step_end

RiminiTown_CasaGas_1F_EventScript_DadSpeech_Text_0:
	.string "MOM: Guarda un po' chi è tornato,\n"
	.string "tesoro.$"

RiminiTown_CasaGas_1F_EventScript_DadSpeech_Text_1:
	.string "Ciao figliolo, spero tu sia pronto per la\n"
	.string "sfida di oggi!$"

RiminiTown_CasaGas_1F_EventScript_DadSpeech_Text_2:
	.string "Come quale sfida?! I tuoi amici non ti\n"
	.string "hanno spiegato come funziona la\l"
	.string "LAUREA?\p"
	.string "Ti conviene andare a trovarli prima di\n"
	.string "partire per Bologna, allora.\p"
	.string "A proposito, la signora che abita qui a\n"
	.string "fianco ha ordinato un pacco di caffé.\l"
	.string "Se non sbaglio è la mamma di un tuo\l"
	.string "amico, perché non glielo porti tu?$"

RiminiTown_CasaGas_1F_EventScript_DadSpeech_Text_3:
	.string "Ci vediamo più tardi a Bologna!$"
