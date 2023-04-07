.set STE_ID, 1

RiminiTown_CasaSte_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RiminiTown_CasaSte_2F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RiminiTown_CasaSte_2F_OnFrame
	.byte 0

RiminiTown_CasaSte_2F_OnTransition:
	call_if_eq VAR_RIMINI_INTRO_STATE, 4, RiminiTown_CasaSte_2F_EventScript_PlaceSte
	end

RiminiTown_CasaSte_2F_OnFrame:
	map_script_2 VAR_RIMINI_INTRO_STATE, 4, RiminiTown_CasaSte_2F_EventScript_SteApreIlPacco
	.2byte 0

RiminiTown_CasaSte_2F_EventScript_PlaceSte::
	setobjectxyperm STE_ID, 1, 4
	setobjectmovementtype STE_ID, MOVEMENT_TYPE_FACE_LEFT
	return


RiminiTown_CasaSte_2F_EventScript_SteApreIlPacco::
	lockall
	msgbox RiminiTown_CasaSte_2F_EventScript_SteApreIlPacco_Text_0
	closemessage
	applymovement STE_ID, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement STE_ID, Common_Movement_Delay48
	waitmovement 0
	msgbox RiminiTown_CasaSte_2F_EventScript_SteApreIlPacco_Text_1
	closemessage
	applymovement STE_ID, RiminiTown_CasaGas_2F_Movement_SteGuardaGas
	waitmovement 0
	msgbox RiminiTown_CasaSte_2F_EventScript_SteApreIlPacco_Text_2
	closemessage
	applymovement STE_ID, RiminiTown_CasaGas_2F_Movement_SteVaDaGas
	waitmovement 0
	delay 20
	givemon SPECIES_GASTLY, 30
	msgbox RiminiTown_CasaSte_2F_EventScript_SteApreIlPacco_Text_3
	closemessage
	setvar VAR_RIMINI_INTRO_STATE, 5
	releaseall
	end


RiminiTown_CasaGas_2F_Movement_SteGuardaGas:
	face_up
	step_end

RiminiTown_CasaGas_2F_Movement_SteVaDaGas:
	walk_up
	step_end

RiminiTown_CasaSte_2F_EventScript_SteApreIlPacco_Text_0:
	.string "Eccolo qui, eheh.\p"
	.string "Inutile che ti dica che questa è roba\n"
	.string "buona, amico.\p"
	.string "Altro che la roba di Dalia, questa...$"

RiminiTown_CasaSte_2F_EventScript_SteApreIlPacco_Text_1:
	.string "Ma che cacchio è sta roba?!\p"
	.string "Sembra essere un Pokémon.\n"
	.string "Mmh, di sicuro hanno sbagliato pacco.\p"
	.string "CHE PALLE.$"

RiminiTown_CasaSte_2F_EventScript_SteApreIlPacco_Text_2:
	.string "Vabbé Gas prendilo tu, magari ti torna\n"
	.string "utile oggi pomeriggio.$"

RiminiTown_CasaSte_2F_EventScript_SteApreIlPacco_Text_3:
	.string "Mi toccherà ordinare dell'altra DROGA\n"
	.string "oggi a Bologna.$"
