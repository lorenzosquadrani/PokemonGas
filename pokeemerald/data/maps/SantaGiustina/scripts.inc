SantaGiustina_MapScripts::
	.byte 0


SantaGiustina_EventScript_PortaChiusa::
	msgbox SantaGiustina_EventScript_PortaChiusa_Text_0
	closemessage
	return


SantaGiustina_EventScript_CartelloTown::
	msgbox SantaGiustina_EventScript_CartelloTown_Text_0
	closemessage
	return


SantaGiustina_EventScript_Striscione1::
	msgbox SantaGiustina_EventScript_Striscione1_Text_0
	closemessage
	return


SantaGiustina_EventScript_Striscione2::
	msgbox SantaGiustina_EventScript_Striscione2_Text_0
	closemessage
	return


SantaGiustina_EventScript_Striscione3::
	msgbox SantaGiustina_EventScript_Striscione3_Text_0
	closemessage
	return


SantaGiustina_EventScript_Striscione4::
	msgbox SantaGiustina_EventScript_Striscione4_Text_0
	closemessage
	return


SantaGiustina_EventScript_Striscione5::
	msgbox SantaGiustina_EventScript_Striscione5_Text_0
	closemessage
	return


SantaGiustina_EventScript_Striscione6::
	msgbox SantaGiustina_EventScript_Striscione6_Text_0
	closemessage
	return


SantaGiustina_EventScript_CentroMon::
	msgbox SantaGiustina_EventScript_CentroMon_Text_0
	closemessage
	return


SantaGiustina_EventScript_CartelloSquadra::
	msgbox SantaGiustina_EventScript_CartelloSquadra_Text_0
	closemessage
	return


SantaGiustina_EventScript_Squadra::
	lock
	faceplayer
	compare VAR_SANTA_GIUSTINA_STATE, 0
	goto_if_eq SantaGiustina_EventScript_Squadra_2
	random 4
	compare VAR_RESULT, 0
	goto_if_eq SantaGiustina_EventScript_Squadra_6
	compare VAR_RESULT, 1
	goto_if_eq SantaGiustina_EventScript_Squadra_7
	compare VAR_RESULT, 2
	goto_if_eq SantaGiustina_EventScript_Squadra_8
SantaGiustina_EventScript_Squadra_5:
	closemessage
SantaGiustina_EventScript_Squadra_1:
	release
	return

SantaGiustina_EventScript_Squadra_2:
	msgbox SantaGiustina_EventScript_Squadra_Text_0
	giveitem ITEM_POKE_BALL, 10
	msgbox SantaGiustina_EventScript_Squadra_Text_1
	setflag FLAG_ADVENTURE_STARTED
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	msgbox SantaGiustina_EventScript_Squadra_Text_2
	closemessage
	applymovement 1, Common_Movement_Delay48
	applymovement STE_ID, Common_Movement_ExclamationMark
	msgbox SantaGiustina_EventScript_Squadra_Text_3
	giveitem ITEM_POKE_PISTOLA
	closemessage
	setvar VAR_SANTA_GIUSTINA_STATE, 1
	goto SantaGiustina_EventScript_Squadra_1

SantaGiustina_EventScript_Squadra_6:
	msgbox SantaGiustina_EventScript_Squadra_Text_4
	goto SantaGiustina_EventScript_Squadra_5

SantaGiustina_EventScript_Squadra_7:
	msgbox SantaGiustina_EventScript_Squadra_Text_5
	goto SantaGiustina_EventScript_Squadra_5

SantaGiustina_EventScript_Squadra_8:
	msgbox SantaGiustina_EventScript_Squadra_Text_6
	goto SantaGiustina_EventScript_Squadra_5


SantaGiustina_EventScript_PortaChiusa_Text_0:
	.string "La porta è chiusa, come è normale che\n"
	.string "sia.$"

SantaGiustina_EventScript_CartelloTown_Text_0:
	.string "SANTA GIUSTINA$"

SantaGiustina_EventScript_Striscione1_Text_0:
	.string "Meglio gay che col cancro.$"

SantaGiustina_EventScript_Striscione2_Text_0:
	.string "Meno smog più puttane.$"

SantaGiustina_EventScript_Striscione3_Text_0:
	.string "Fate sta cazzo di circonvallazione.$"

SantaGiustina_EventScript_Striscione4_Text_0:
	.string "Ho il cancro.$"

SantaGiustina_EventScript_Striscione5_Text_0:
	.string "Abbasso la fog, viva la fig.$"

SantaGiustina_EventScript_Striscione6_Text_0:
	.string "Tutto fumo niente arrosto.$"

SantaGiustina_EventScript_CentroMon_Text_0:
	.string "Centro Pokémon. Curiamo i tuoi\n"
	.string "Pokemons.$"

SantaGiustina_EventScript_CartelloSquadra_Text_0:
	.string "Casa di Squadra$"

SantaGiustina_EventScript_Squadra_Text_0:
	.string "Bella Gassi, ti stavo aspettando. Come\n"
	.string "avrai capito, oggi ti laurei. Ti starai\l"
	.string "chiedendo come. Beh, ovviamente devi\l"
	.string "andare in DIFA. E avrai bisogno di una\l"
	.string "squadra di Pokemons. Puoi costruirtela\l"
	.string "come vuoi, ma occhio perché non\l"
	.string "troverai altre pokéballs a parte quelle\l"
	.string "che ti sto per dare.\p"
	.string "Ecco, tieni.$"

SantaGiustina_EventScript_Squadra_Text_1:
	.string "Ci sono tutti i Pokemons che vuoi in\n"
	.string "giro, devi solo trovarli eheh. Ora ti\l"
	.string "attivo il Pokedex, così puoi vedere\l"
	.string "dove cercarli.$"

SantaGiustina_EventScript_Squadra_Text_2:
	.string "I leggendari ovviamente non ci sono, ce\n"
	.string "li ha tutti Gnassi.$"

SantaGiustina_EventScript_Squadra_Text_3:
	.string "Come? Vuoi entrare nel suo covo? Beh\n"
	.string "allora dovrai liberarti di quello\l"
	.string "Snorlax all'ingresso. Tieni, prova a\l"
	.string "sparargli.$"

SantaGiustina_EventScript_Squadra_Text_4:
	.string "Daje Gassi$"

SantaGiustina_EventScript_Squadra_Text_5:
	.string "I am the king of bets$"

SantaGiustina_EventScript_Squadra_Text_6:
	.string "In realtà c'è un altro modo per avere le\n"
	.string "pokeballs, ma non te lo dico.$"
