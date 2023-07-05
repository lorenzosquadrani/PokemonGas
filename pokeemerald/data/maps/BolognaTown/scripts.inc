BolognaTown_MapScripts::
	.byte 0


BolognaTown_EventScript_Birra1::
	lock
	msgbox BolognaTown_EventScript_Birra1_Text_0, MSGBOX_NPC
	release
	return


BolognaTown_EventScript_TipaDroghe::
	lock
	msgbox BolognaTown_EventScript_TipaDroghe_Text_0, MSGBOX_NPC
	release
	return


BolognaTown_EventScript_VecchioEntrata::
	lock
	msgbox BolognaTown_EventScript_VecchioEntrata_Text_0, MSGBOX_NPC
	release
	return


BolognaTown_EventScript_Birra1_Text_0:
	.string "Biraaa! Biraa! 1 euro, fresca fresca!!$"

BolognaTown_EventScript_TipaDroghe_Text_0:
	.string "Hey, hai qualche moneta da darmi? Devo\n"
	.string "andare a comprare un paio di\l"
	.string "pasticche...$"

BolognaTown_EventScript_VecchioEntrata_Text_0:
	.string "Sei sicuro di voler venire a Bolo? Lo sai\n"
	.string "che poi finisci ubriaco e fatto steso\l"
	.string "in mezzo a una piazza...$"
