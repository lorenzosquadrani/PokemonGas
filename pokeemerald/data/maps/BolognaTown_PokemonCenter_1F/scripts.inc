.set LOCALID_NURSE, 1

BolognaTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BolognaTown_PokemonCenter_1F_OnTransition
	.byte 0

BolognaTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_BOLOGNA_TOWN
	end

BolognaTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

BolognaTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox BolognaTown_PokemonCenter_1F_EventScript_Gentleman_Text_0
	end


BolognaTown_PokemonCenter_1F_EventScript_Boy::
	checkitem ITEM_MACH_BIKE
	compare VAR_RESULT, 0
	goto_if_ne BolognaTown_PokemonCenter_1F_EventScript_Boy_2
	msgbox BolognaTown_PokemonCenter_1F_EventScript_Boy_Text_1
BolognaTown_PokemonCenter_1F_EventScript_Boy_1:
	end

BolognaTown_PokemonCenter_1F_EventScript_Boy_2:
	msgbox BolognaTown_PokemonCenter_1F_EventScript_Boy_Text_0
	goto BolognaTown_PokemonCenter_1F_EventScript_Boy_1


BolognaTown_PokemonCenter_1F_EventScript_Girl::
	msgbox BolognaTown_PokemonCenter_1F_EventScript_Girl_Text_0
	end


BolognaTown_PokemonCenter_1F_EventScript_Gentleman_Text_0:
	.string "Sono Guccini. Dio è morto.$"

BolognaTown_PokemonCenter_1F_EventScript_Boy_Text_0:
	.string "Ehi amico, fico quel penny board!$"

BolognaTown_PokemonCenter_1F_EventScript_Boy_Text_1:
	.string "Cazzo guardi, vuoi ciucciarmelo?$"

BolognaTown_PokemonCenter_1F_EventScript_Girl_Text_0:
	.string "Scusa mio fratello, è proprio rude.\n"
	.string "Rispetta solo quelli che hanno uno\l"
	.string "skateboard.$"
