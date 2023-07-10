BolognaTown_Mart_MapScripts::
	.byte 0


BolognaTown_Mart_EventScript_PamcialSign::
	msgbox BolognaTown_Mart_EventScript_PamcialSign_Text_0, MSGBOX_SIGN
	end


BolognaTown_Mart_EventScript_PizzaSign::
	msgbox BolognaTown_Mart_EventScript_PizzaSign_Text_0, MSGBOX_SIGN
	return


BolognaTown_Mart_EventScript_Deme::
	msgbox BolognaTown_Mart_EventScript_Deme_Text_0, MSGBOX_NPC
	end


BolognaTown_Mart_EventScript_Leo::
	msgbox BolognaTown_Mart_EventScript_Leo_Text_0, MSGBOX_NPC
	end


BolognaTown_Mart_EventScript_Fabruz::
	msgbox BolognaTown_Mart_EventScript_Fabruz_Text_0, MSGBOX_NPC
	end


BolognaTown_Mart_EventScript_PamcialSign_Text_0:
	.string "PAMCIAL$"

BolognaTown_Mart_EventScript_PizzaSign_Text_0:
	.string "PIZZA IRNERIO$"

BolognaTown_Mart_EventScript_Deme_Text_0:
	.string "DEME: Gli origami sono meglio.$"

BolognaTown_Mart_EventScript_Leo_Text_0:
	.string "LEO: Pamcial è meglio.$"

BolognaTown_Mart_EventScript_Fabruz_Text_0:
	.string "FABRUZ: Questa pizza è una nuvola.$"
