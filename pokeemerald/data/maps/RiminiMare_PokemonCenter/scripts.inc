.set LOCALID_NURSE, 1

RiminiMare_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RiminiMare_PokemonCenter_1F_OnTransition
	.byte 0

RiminiMare_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_RIMINI_MARE
	end

RiminiMare_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

RiminiMare_PokemonCenter_1F_EventScript_Bill::
	msgbox RiminiMare_PokemonCenter_1F_EventScript_Bill_Text_0, MSGBOX_NPC
	end


RiminiMare_PokemonCenter_1F_EventScript_Bill_Text_0:
	.string "BILL: Come? Il mio PC? Perché mai dovrei\n"
	.string "lasciare il mio PC al Centro Pokémon?$"
