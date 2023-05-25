RiminiTown_CovoGnassi_MapScripts::
	.byte 0


RiminiTown_CovoGnassi_EventScript_PietraGas::
	finditem ITEM_PIETRA_GAS
	setflag FLAG_PRESA_PIETRA_GAS
	return


RiminiTown_CovoGnassi_EventScript_ArrivaGnassi::
	addobject 8
	lockall
	msgbox RiminiTown_CovoGnassi_EventScript_ArrivaGnassi_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, GasGuardaGnassi
	waitmovement 0
	applymovement 8, GnassiRaggiungeGas
	waitmovement 0
	setvar VAR_GNASSI_STATE, 2
	releaseall
	return


GnassiRaggiungeGas:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

GasGuardaGnassi:
	face_down
	step_end

RiminiTown_CovoGnassi_EventScript_GnassiBattle::
	return


RiminiTown_CovoGnassi_EventScript_ArrivaGnassi_Text_0:
	.string "FERMO LI!$"
