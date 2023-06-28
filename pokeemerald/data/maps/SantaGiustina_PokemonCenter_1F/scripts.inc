.set LOCALID_NURSE, 1

SantaGiustina_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SantaGiustina_PokemonCenter_1F_OnTransition
	.byte 0

SantaGiustina_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SANTA_GIUSTINA
	end

SantaGiustina_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SantaGiustina_PokemonCenter_1F_EventScript_Youngster::
	msgbox SantaGiustina_PokemonCenter_1F_EventScript_Youngster_Text_0
	end


SantaGiustina_PokemonCenter_1F_EventScript_Woman::
	msgbox SantaGiustina_PokemonCenter_1F_EventScript_Woman_Text_0
	end


SantaGiustina_PokemonCenter_1F_EventScript_Gentleman::
	msgbox SantaGiustina_PokemonCenter_1F_EventScript_Gentleman_Text_0
	end


SantaGiustina_PokemonCenter_1F_EventScript_Youngster_Text_0:
	.string "Squadra è l'uomo più ricco di Santa\n"
	.string "Giustina. Dicono abbia fatto i soldi con\l"
	.string "le schedine.$"

SantaGiustina_PokemonCenter_1F_EventScript_Woman_Text_0:
	.string "Che bei polpaccioni che hai.$"

SantaGiustina_PokemonCenter_1F_EventScript_Gentleman_Text_0:
	.string "Santa Giustina caput mundi.$"
