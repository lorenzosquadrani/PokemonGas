.set LOCALID_STE, 1
.set LOCALID_MOM, 4
.set LOCALID_RIVAL, 7
.set LOCALID_BIRCH, 8

RiminiTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RiminiTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RiminiTown_OnFrame
	.byte 0

RiminiTown_OnTransition:
	setflag FLAG_VISITED_RIMINI_TOWN
	end

RiminiTown_OnFrame:
	map_script_2 VAR_RIMINI_INTRO_STATE, 1, RiminiTown_EventScript_StepOffTruck
	.2byte 0

RiminiTown_EventScript_StepOffTruck::
	lockall
	setvar VAR_TEMP_PAR_4, 5
	setvar VAR_TEMP_PAR_5, 8
	call RiminiTown_EventScript_GoInsideWithMom
	warpsilent MAP_RIMINI_TOWN_CASA_GAS_1F, 8, 8
	waitstate
	releaseall
	end

RiminiTown_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

RiminiTown_Movement_MomExitHouse:
	walk_down
	step_end

RiminiTown_Movement_MomApproachDoor:
	delay_16
	delay_8
	walk_in_place_faster_up
	step_end

RiminiTown_Movement_PlayerApproachDoor:
	delay_16
	delay_8
	walk_right
	walk_up
	step_end

RiminiTown_Movement_MomEnterHouse:
	walk_up
	set_invisible
	step_end

RiminiTown_Movement_PlayerEnterHouse:
	walk_up
	walk_up
	step_end

RiminiTown_Movement_PlayerStepOffTruck:
	jump_right
	delay_16
	delay_16
	delay_16
	step_end

RiminiTown_EventScript_GoInsideWithMom::
	delay 15
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_PLAYER, RiminiTown_Movement_PlayerStepOffTruck
	waitmovement 0
	opendoor 11, 20
	waitdooranim
	addobject LOCALID_MOM
	applymovement LOCALID_MOM, RiminiTown_Movement_MomExitHouse
	waitmovement 0
	closedoor 11, 20
	waitdooranim
	delay 10
	msgbox RiminiTown_Text_ANDREAGASPARI, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MOM, RiminiTown_Movement_MomApproachDoor
	applymovement OBJ_EVENT_ID_PLAYER, RiminiTown_Movement_PlayerApproachDoor
	waitmovement 0
	opendoor 11, 20
	waitdooranim
	applymovement LOCALID_MOM, RiminiTown_Movement_MomEnterHouse
	applymovement OBJ_EVENT_ID_PLAYER, RiminiTown_Movement_PlayerEnterHouse
	waitmovement 0
	setflag FLAG_HIDE_RIMINI_TOWN_MOM_OUTSIDE
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	closedoor 11, 20
	waitdooranim
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


RiminiTown_EventScript_SteSign::
	msgbox RiminiTown_EventScript_SteSign_Text_0, MSGBOX_SIGN
	end


RiminiTown_EventScript_CavaSign::
	msgbox RiminiTown_EventScript_CavaSign_Text_0, MSGBOX_SIGN
	end


RiminiTown_EventScript_GasSign::
	msgbox RiminiTown_EventScript_GasSign_Text_0, MSGBOX_SIGN
	end


RiminiTown_EventScript_TommiSign::
	msgbox RiminiTown_EventScript_TommiSign_Text_0, MSGBOX_SIGN
	end


RiminiTown_EventScript_GnassiSign::
	msgbox RiminiTown_EventScript_GnassiSign_Text_0, MSGBOX_SIGN
	end


RiminiTown_EventScript_TownSign::
	msgbox RiminiTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	end


RiminiTown_EventScript_IncontroConSte::
	msgbox RiminiTown_EventScript_IncontroConSte_Text_0
	msgbox RiminiTown_EventScript_IncontroConSte_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_ne RiminiTown_EventScript_IncontroConSte_2
RiminiTown_EventScript_IncontroConSte_1:
	msgbox RiminiTown_EventScript_IncontroConSte_Text_4
	closemessage
	setvar VAR_RIMINI_INTRO_STATE, 3
	applymovement LOCALID_STE, RiminiTown_Movement_SteVersoCasa
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, RiminiTown_Movement_GasVersoCasaSte
	waitmovement 0
	opendoor 21, 20
	waitdooranim
	applymovement LOCALID_STE, RiminiTown_Movement_SteEntra
	applymovement OBJ_EVENT_ID_PLAYER, RiminiTown_Movement_GasEntraSte
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	closedoor 21, 20
	waitdooranim
	setflag FLAG_INCONTRATO_STE
	clearflag FLAG_HIDE_STE_1F
	clearflag FLAG_HIDE_STE_2F
	warpsilent MAP_RIMINI_TOWN_CASA_STE_1F, 1, 8
	waitstate
	releaseall
	end

RiminiTown_EventScript_IncontroConSte_2:
	msgbox RiminiTown_EventScript_IncontroConSte_Text_2, MSGBOX_YESNO
RiminiTown_EventScript_IncontroConSte_4:
	compare VAR_RESULT, 1
	goto_if_ne RiminiTown_EventScript_IncontroConSte_5
	goto RiminiTown_EventScript_IncontroConSte_1

RiminiTown_EventScript_IncontroConSte_5:
	msgbox RiminiTown_EventScript_IncontroConSte_Text_3, MSGBOX_YESNO
	goto RiminiTown_EventScript_IncontroConSte_4


RiminiTown_EventScript_NeedPokemonTriggerDown::
	lockall
	msgbox RiminiTown_EventScript_NeedPokemonTriggerDown_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, RiminiTown_Movement_GasMoveDown
	waitmovement 0
	releaseall
	end


RiminiTown_EventScript_NeedPokemonTriggerUp::
	lockall
	msgbox RiminiTown_EventScript_NeedPokemonTriggerDown_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, RiminiTown_Movement_GasMoveUp
	waitmovement 0
	releaseall
	end


RiminiTown_EventScript_GasVersoSteTrigger1::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, RiminiTown_Movement_GasVersoSte1
	waitmovement 0
	call RiminiTown_EventScript_IncontroConSte
	end


RiminiTown_EventScript_GasVersoSteTrigger2::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, RiminiTown_Movement_GasVersoSte2
	waitmovement 0
	call RiminiTown_EventScript_IncontroConSte
	return


RiminiTown_EventScript_DoveCazzo::
	msgbox RiminiTown_EventScript_DoveCazzo_Text_0
	closemessage
	return


RiminiTown_EventScript_Snorlax::
	lockall
	checkitem ITEM_POKE_PISTOLA
	msgbox RiminiTown_EventScript_Snorlax_Text_0
	compare VAR_RESULT, 0
	goto_if_ne RiminiTown_EventScript_Snorlax_2
RiminiTown_EventScript_Snorlax_1:
	waitmessage
	releaseall
	return

RiminiTown_EventScript_Snorlax_2:
	msgbox RiminiTown_EventScript_Snorlax_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RiminiTown_EventScript_Snorlax_4
	goto RiminiTown_EventScript_Snorlax_1

RiminiTown_EventScript_Snorlax_4:
	msgbox RiminiTown_EventScript_Snorlax_Text_2
	waitse
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SNORLAX, 40, ITEM_LEFTOVERS
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RiminiTown_EventScript_Snorlax_6
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq RiminiTown_EventScript_Snorlax_7
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq RiminiTown_EventScript_Snorlax_8
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq RiminiTown_EventScript_Snorlax_9
	goto RiminiTown_EventScript_Snorlax_1

RiminiTown_EventScript_Snorlax_6:
	call Won_or_Caught
	call FLAG_BATTLED_SNORLAX
	goto RiminiTown_EventScript_Snorlax_1

RiminiTown_EventScript_Snorlax_7:
	call Won_or_Caught
	setflag FLAG_BATTLED_SNORLAX
	goto RiminiTown_EventScript_Snorlax_1

RiminiTown_EventScript_Snorlax_8:
	call RanAway
	goto RiminiTown_EventScript_Snorlax_1

RiminiTown_EventScript_Snorlax_9:
	call RanAway
	goto RiminiTown_EventScript_Snorlax_1


Won_or_Caught::
	fadescreen FADE_TO_BLACK
	removeobject 2
	fadescreen FADE_FROM_BLACK
	return


RanAway::
	msgbox RanAway_Text_0
	return


RiminiTown_Movement_GasVersoSte1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

RiminiTown_Movement_GasVersoSte2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	step_end

RiminiTown_Movement_GasMoveUp:
	walk_up
	step_end

RiminiTown_Movement_GasMoveDown:
	walk_down
	step_end

RiminiTown_Movement_SteVersoCasa:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

RiminiTown_Movement_GasVersoCasaSte:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

RiminiTown_Movement_SteEntra:
	walk_up
	set_invisible
	step_end

RiminiTown_Movement_GasEntraSte:
	walk_up
	walk_up
	step_end

RiminiTown_EventScript_SteSign_Text_0:
	.string "Casa di Ste$"

RiminiTown_EventScript_CavaSign_Text_0:
	.string "La Cava$"

RiminiTown_EventScript_GasSign_Text_0:
	.string "Casa di Gas$"

RiminiTown_EventScript_TommiSign_Text_0:
	.string "Casa di Tommi$"

RiminiTown_EventScript_GnassiSign_Text_0:
	.string "Covo di Gnassi$"

RiminiTown_EventScript_TownSign_Text_0:
	.string "RIMINI TOWN$"

RiminiTown_EventScript_IncontroConSte_Text_0:
	.string "STE: Bella Gas! Oggi pomeriggio ti laurei\n"
	.string "vero? Daje!\p"
	.string "Mi è appena arrivato un pacco di DROGA.$"

RiminiTown_EventScript_IncontroConSte_Text_1:
	.string "Che dici, ci facciamo una canna?$"

RiminiTown_EventScript_IncontroConSte_Text_2:
	.string "Mmh, sicuro sicuro?$"

RiminiTown_EventScript_IncontroConSte_Text_3:
	.string "Dai$"

RiminiTown_EventScript_IncontroConSte_Text_4:
	.string "Bravo! Vieni, andiamo a casa mia a\n"
	.string "prendere la roba.$"

RiminiTown_EventScript_NeedPokemonTriggerDown_Text_0:
	.string "SEI MATTO!? È pericoloso andare fuori\n"
	.string "città senza Pokemons.$"

RiminiTown_EventScript_DoveCazzo_Text_0:
	.string "Ma dove cazzo vai cojone.\p"
	.string "Non li trovi i bugs.$"

RiminiTown_EventScript_Snorlax_Text_0:
	.string "Uno Snorlax addormentato blocca\n"
	.string "l'ingresso.$"

RiminiTown_EventScript_Snorlax_Text_1:
	.string "Vuoi sparargli con la PokéPistola?$"

RiminiTown_EventScript_Snorlax_Text_2:
	.string "Gas spara a Snorlax con la PokéPistola\p"
	.string "...\p"
	.string "La pellaccia di Snorlax respinge il proiettile, ma Snorlax si sveglia e attacca!$"

RanAway_Text_0:
	.string "Snorlax torna a dormire.$"

RiminiTown_Text_ANDREAGASPARI::
	.string "ANDREA GASPARI!\p"
	.string "Non voglio neanche sapere cos'hai\n"
	.string "fatto stanotte e perché sei tornato\l"
	.string "con quel furgone. Ti ricordo, qual'ora\l"
	.string "fossi ancora ubriaco, che oggi\l"
	.string "pomeriggio ti LAUREI.\p"
	.string "Forza, vieni a salutare il babbo prima di\n"
	.string "andare a Bologna.$"
