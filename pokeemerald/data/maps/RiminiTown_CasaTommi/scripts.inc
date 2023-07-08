.set LOCALID_TOMMI, 1

RiminiTown_CasaTommi_MapScripts::
	.byte 0


RiminiTown_CasaTommi_EventScript_Tommi::
	lockall
	applymovement LOCALID_TOMMI, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_unset FLAG_TALKED_WITH_TOMMI, RiminiTown_CasaTommi_EventScript_Tommi_2
RiminiTown_CasaTommi_EventScript_Tommi_1:
	call RiminiTown_CasaTommi_EventScript_InsegnaMosse
	msgbox RiminiTown_CasaTommi_EventScript_Tommi_Text_2
	releaseall
	return

RiminiTown_CasaTommi_EventScript_Tommi_2:
	msgbox RiminiTown_CasaTommi_EventScript_Tommi_Text_0
	delay 40
	applymovement LOCALID_TOMMI, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox RiminiTown_CasaTommi_EventScript_Tommi_Text_1
	setflag FLAG_TALKED_WITH_TOMMI
	goto RiminiTown_CasaTommi_EventScript_Tommi_1


RiminiTown_CasaTommi_EventScript_InsegnaMosse::
	msgbox RiminiTown_CasaTommi_EventScript_InsegnaMosse_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RiminiTown_CasaTommi_EventScript_InsegnaMosse_2
	goto_if_unset FLAG_SYS_POKEMON_GET, RiminiTown_CasaTommi_EventScript_InsegnaMosse_5
	msgbox RiminiTown_CasaTommi_EventScript_InsegnaMosse_Text_2
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_TEMP_PAR_4, PARTY_NOTHING_CHOSEN
	goto_if_eq RiminiTown_CasaTommi_EventScript_InsegnaMosse_8
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq RiminiTown_CasaTommi_EventScript_InsegnaMosse_11
	compare VAR_TEMP_PAR_5, 0
	goto_if_eq RiminiTown_CasaTommi_EventScript_InsegnaMosse_14
	msgbox RiminiTown_CasaTommi_EventScript_InsegnaMosse_Text_5
	special TeachMoveRelearnerMove
	waitstate
	return

RiminiTown_CasaTommi_EventScript_InsegnaMosse_2:
	return

RiminiTown_CasaTommi_EventScript_InsegnaMosse_5:
	msgbox RiminiTown_CasaTommi_EventScript_InsegnaMosse_Text_1
	return

RiminiTown_CasaTommi_EventScript_InsegnaMosse_8:
	return

RiminiTown_CasaTommi_EventScript_InsegnaMosse_11:
	msgbox RiminiTown_CasaTommi_EventScript_InsegnaMosse_Text_3
	return

RiminiTown_CasaTommi_EventScript_InsegnaMosse_14:
	msgbox RiminiTown_CasaTommi_EventScript_InsegnaMosse_Text_4
	return


RiminiTown_CasaTommi_EventScript_Tommi_Text_0:
	.string "HO LA MOSSA, GAS.\p"
	.string "Tu oggi ti laurei, vero? Se mi porti i\n"
	.string "tuoi Pokémon, posso insegnargli tutte\l"
	.string "le mosse che imparano con l'esperienza.\p"
	.string "Quelle con le MT e le MN, invece, tocca\n"
	.string "che le compri. Sicuramente a BOLOGNA le\l"
	.string "hanno.$"

RiminiTown_CasaTommi_EventScript_Tommi_Text_1:
	.string "Vuoi sapere cosa c'è dentro il covo di\n"
	.string "Gnassi?!\p"
	.string "Bella domanda, sicuro qualcosa di\n"
	.string "potente. C'è chi dice nasconda dei\l"
	.string "Pokémon estremamente rari. Ma se vuoi\l"
	.string "sapere qualcosa di più preciso, ti\l"
	.string "consiglio di chiedere a Squadra.$"

RiminiTown_CasaTommi_EventScript_Tommi_Text_2:
	.string "Torna quando hai bisogno di una mossa.$"

RiminiTown_CasaTommi_EventScript_InsegnaMosse_Text_0:
	.string "Vuoi che insegni una mossa a uno dei\n"
	.string "tuoi Pokémon?$"

RiminiTown_CasaTommi_EventScript_InsegnaMosse_Text_1:
	.string "Peccato che non hai un cazzo di\n"
	.string "Pokémon, Gassi.$"

RiminiTown_CasaTommi_EventScript_InsegnaMosse_Text_2:
	.string "A quale Pokémon vuoi insegnarla?$"

RiminiTown_CasaTommi_EventScript_InsegnaMosse_Text_3:
	.string "Mi pigli per il culo Gassi? Con un uovo se\n"
	.string "vuoi ci faccio la frittata.$"

RiminiTown_CasaTommi_EventScript_InsegnaMosse_Text_4:
	.string "Mmh, non ho niente da insegnare al\n"
	.string "ragazzo, è ancora troppo giovane.$"

RiminiTown_CasaTommi_EventScript_InsegnaMosse_Text_5:
	.string "Quale mossa vuoi che impari?$"
