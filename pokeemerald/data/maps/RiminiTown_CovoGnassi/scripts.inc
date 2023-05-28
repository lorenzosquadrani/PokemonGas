RiminiTown_CovoGnassi_MapScripts::
	.byte 0


RiminiTown_CovoGnassi_EventScript_PietraGas::
	finditem ITEM_PIETRA_GAS
	setflag FLAG_PRESA_PIETRA_GAS
	return


RiminiTown_CovoGnassi_EventScript_ArrivaGnassi::
	addobject 8
	msgbox RiminiTown_CovoGnassi_EventScript_ArrivaGnassi_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, GasGuardaGnassi
	lockall
	applymovement 8, GnassiRaggiungeGas
	waitmovement 0
	compare VAR_GNASSI_STATE, 0
	goto_if_eq RiminiTown_CovoGnassi_EventScript_ArrivaGnassi_1
	trainerbattle_single TRAINER_GNASSI_MEWTWO, GnassiShortIntro, GnassiOutro, RiminiTown_CovoGnassi_EventScript_GnassiDefeated
	return

RiminiTown_CovoGnassi_EventScript_ArrivaGnassi_1:
	setvar VAR_GNASSI_STATE, 1
	trainerbattle_single TRAINER_GNASSI, GnassiIntro, GnassiOutro, RiminiTown_CovoGnassi_EventScript_GnassiDefeated
	return


RiminiTown_CovoGnassi_EventScript_GnassiDefeated::
	msgbox RiminiTown_CovoGnassi_EventScript_GnassiDefeated_Text_0
	closemessage
	applymovement 8, GnassiSeNeVa
	waitmovement 0
	removeobject 8
	setvar VAR_GNASSI_STATE, 2
	releaseall
	return


GnassiRaggiungeGas:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

GnassiSeNeVa:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

GasGuardaGnassi:
	face_down
	step_end

RiminiTown_CovoGnassi_EventScript_Gnassi::
	msgbox RiminiTown_CovoGnassi_EventScript_Gnassi_Text_0
	closemessage
	return


RiminiTown_CovoGnassi_EventScript_ArrivaGnassi_Text_0:
	.string "FERMO LI!$"

RiminiTown_CovoGnassi_EventScript_GnassiDefeated_Text_0:
	.string "Ok, mi hai battuto Andrea. Ma col\n"
	.string "cacchio che ti dò i miei pokemon\l"
	.string "leggendari. Prendi la pietra, è un pezzo\l"
	.string "più unico che raro. E VATTENE.$"

RiminiTown_CovoGnassi_EventScript_Gnassi_Text_0:
	.string "Ancora qui? Aria.$"

GnassiIntro::
	.string "Andrea Gaspari, finalmente ci\n"
	.string "incontriamo.\p"
	.string "Ti tengo d'occhio da quella volta in cui\n"
	.string "hai vinto il LIUC Business Game. Ti ho\l"
	.string "lasciato in vita, perché non sembravi\l"
	.string "interessato alla carica di SINDACO di\l"
	.string "RIMINI... forse mi sono sbagliato.\p"
	.string "Entrare nel mio covo... Hai osato troppo,\n"
	.string "ragazzo.\p"
	.string "I miei pokemons da SPIAGGIA ti\n"
	.string "distruggeranno!$"

GnassiShortIntro::
	.string "Ancora tu! Mi hai stufato, vieni MEWTWO!$"

GnassiOutro::
	.string "PORCO DIO.$"
