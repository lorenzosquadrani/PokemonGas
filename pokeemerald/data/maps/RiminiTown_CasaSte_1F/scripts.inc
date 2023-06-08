.set STE_ID, 2

RiminiTown_CasaSte_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RiminiTown_CasaSte_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RiminiTown_CasaSte_1F_OnFrame
	.byte 0

RiminiTown_CasaSte_1F_OnTransition:
	call_if_eq VAR_RIMINI_INTRO_STATE, 3, RiminiTown_CasaSte_1F_EventScript_PlaceSte
	end

RiminiTown_CasaSte_1F_OnFrame:
	map_script_2 VAR_RIMINI_INTRO_STATE, 3, RiminiTown_CasaSte_1F_EventScript_PassaSte
	.2byte 0

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


RiminiTown_CasaSte_1F_EventScript_PlaceSte::
	setobjectxyperm STE_ID, 2, 8
	setobjectmovementtype STE_ID, MOVEMENT_TYPE_FACE_UP
	return


RiminiTown_CasaSte_1F_EventScript_PassaSte::
	lockall
	msgbox RiminiTown_CasaSte_1F_EventScript_PassaSte_Text_0
	closemessage
	applymovement STE_ID, RiminiTown_CasaSte_1F_Movement_SteVaSu
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, RiminiTown_CasaSte_1F_Movement_GasVaSu
	waitmovement 0
	setvar VAR_RIMINI_INTRO_STATE, 4
	setflag FLAG_HIDE_STE_1F
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	warpsilent MAP_RIMINI_TOWN_CASA_STE_2F, 1, 2
	waitstate
	releaseall
	end


RiminiTown_CasaSte_1F_Movement_SteVaSu:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end

RiminiTown_CasaSte_1F_Movement_GasVaSu:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

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

RiminiTown_CasaSte_1F_EventScript_PassaSte_Text_0:
	.string "STE: Ciao Mamma!$"
