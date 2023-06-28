RiminiTown_CasaChecco_1F_MapScripts::
	.byte 0


RiminiTown_CasaChecco_1F_CheccoStuff::
	lock
	faceplayer
	compare VAR_RIMINI_MARE_STATE, 0
	goto_if_eq RiminiTown_CasaChecco_1F_CheccoStuff_2
	random 4
	compare VAR_RESULT, 0
	goto_if_eq RiminiTown_CasaChecco_1F_CheccoStuff_6
	compare VAR_RESULT, 1
	goto_if_eq RiminiTown_CasaChecco_1F_CheccoStuff_7
	compare VAR_RESULT, 2
	goto_if_eq RiminiTown_CasaChecco_1F_CheccoStuff_8
	compare VAR_RESULT, 3
	goto_if_eq RiminiTown_CasaChecco_1F_CheccoStuff_9
RiminiTown_CasaChecco_1F_CheccoStuff_5:
	closemessage
RiminiTown_CasaChecco_1F_CheccoStuff_1:
	release
	return

RiminiTown_CasaChecco_1F_CheccoStuff_2:
	msgbox RiminiTown_CasaChecco_1F_CheccoStuff_Text_0
	giveitem ITEM_BUONO_SKATE
	closemessage
	setvar VAR_RIMINI_MARE_STATE, 1
	goto RiminiTown_CasaChecco_1F_CheccoStuff_1

RiminiTown_CasaChecco_1F_CheccoStuff_6:
	msgbox RiminiTown_CasaChecco_1F_CheccoStuff_Text_1
	goto RiminiTown_CasaChecco_1F_CheccoStuff_5

RiminiTown_CasaChecco_1F_CheccoStuff_7:
	msgbox RiminiTown_CasaChecco_1F_CheccoStuff_Text_2
	goto RiminiTown_CasaChecco_1F_CheccoStuff_5

RiminiTown_CasaChecco_1F_CheccoStuff_8:
	msgbox RiminiTown_CasaChecco_1F_CheccoStuff_Text_3
	goto RiminiTown_CasaChecco_1F_CheccoStuff_5

RiminiTown_CasaChecco_1F_CheccoStuff_9:
	msgbox RiminiTown_CasaChecco_1F_CheccoStuff_Text_4
	goto RiminiTown_CasaChecco_1F_CheccoStuff_5


RiminiTown_CasaChecco_1F_CheccoStuff_Text_0:
	.string "Buonsgiur Gas! Ils me dicon che ti\n"
	.string "laurei aiòjurdui, in bocca al lupo.\p"
	.string "Hai visto che hanno aperto la pista da\n"
	.string "skate Rimini-Bologna? Direi che è\l"
	.string "l'occasione perfetta per provarla.\l"
	.string "Puppati questo buono per un penny\l"
	.string "board allo skate shop.\p"
	.string "...\p"
	.string "...\p"
	.string "Sì, mia mamma fa i pompini al\n"
	.string "proprietario, OK?! Prendilo e basta.$"

RiminiTown_CasaChecco_1F_CheccoStuff_Text_1:
	.string "Che fatica$"

RiminiTown_CasaChecco_1F_CheccoStuff_Text_2:
	.string "Porca vacca$"

RiminiTown_CasaChecco_1F_CheccoStuff_Text_3:
	.string "Miseriaccia$"

RiminiTown_CasaChecco_1F_CheccoStuff_Text_4:
	.string "aaaahoooehui$"
