.set LOCALID_NURSE, 1

SantaGiustina_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SantaGiustina_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SantaGiustina_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SANTA_GIUSTINA
	call Common_EventScript_UpdateBrineyLocation
	end

SantaGiustina_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SantaGiustina_PokemonCenter_1F_EventScript_Youngster::
	msgbox SantaGiustina_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
	end

SantaGiustina_PokemonCenter_1F_EventScript_Woman::
	msgbox SantaGiustina_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
	end

SantaGiustina_PokemonCenter_1F_EventScript_Gentleman::
	msgbox SantaGiustina_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
	end

SantaGiustina_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
	.string "I think POKéMON get closer to their\n"
	.string "TRAINERS if they spend time together.\p"
	.string "The longer the better.\n"
	.string "That's what I think.$"

SantaGiustina_PokemonCenter_1F_Text_HotSpringCanInvigorate:
	.string "It's sort of magical how just sitting\n"
	.string "in a hot-spring pool can invigorate.\p"
	.string "I wish I could let my POKéMON\n"
	.string "soak, too.$"

SantaGiustina_PokemonCenter_1F_Text_TrainersShouldRestToo:
	.string "Hohoho! Hey, kid, you can reach\n"
	.string "the hot springs from here.\p"
	.string "If POKéMON are getting rest, so too\n"
	.string "should their TRAINERS.$"

