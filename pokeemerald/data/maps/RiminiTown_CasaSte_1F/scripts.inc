RiminiTown_CasaSte_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RiminiTown_CasaGas_2F_OnTransition
	.byte 0

RiminiTown_CasaSte_1F_OnTransition:
	end

RiminiTown_CasaSte_1F_EventScript_MammadiSte::
	lockall
	faceplayer
	goto_if_set FLAG_CONSEGNATO_CAFFE, RiminiTown_CasaSte_1F_EventScript_MammadiSte_2
	msgbox RiminiTown_CasaSte_1F_EventScript_MammadiSte_Text_1
	delay 40
	msgbox RiminiTown_CasaSte_1F_EventScript_MammadiSte_Text_2
	removeitem ITEM_CAFFE
	setflag FLAG_CONSEGNATO_CAFFE
RiminiTown_CasaSte_1F_EventScript_MammadiSte_1:
	releaseall
	end

RiminiTown_CasaSte_1F_EventScript_MammadiSte_2:
	msgbox RiminiTown_CasaSte_1F_EventScript_MammadiSte_Text_0
	goto RiminiTown_CasaSte_1F_EventScript_MammadiSte_1


RiminiTown_CasaSte_1F_EventScript_MammadiSte_Text_0:
	.string "Grazie per il caffé!$"

RiminiTown_CasaSte_1F_EventScript_MammadiSte_Text_1:
	.string "Buongiorno! Posso aiutarti?$"

RiminiTown_CasaSte_1F_EventScript_MammadiSte_Text_2:
	.string "Oh, il caffé che avevo ordinato!\p"
	.string "Grazie, tu allora devi essere Gas,\n"
	.string "Stefano mi ha parlato di te. Non credo\l"
	.string "che sia in casa ora, probabilmente sarà\l"
	.string "alla cava a bighellonare.$"
