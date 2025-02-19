.set LOCALID_NURSE, 1

DIFA_PokemonLeague_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DIFA_PokemonLeague_1F_OnTransition
	.byte 0

DIFA_PokemonLeague_1F_OnTransition:
	setrespawn HEAL_LOCATION_DIFA_POKEMON_LEAGUE
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
	setflag FLAG_VISITED_DIFA
	end

DIFA_PokemonLeague_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

DIFA_PokemonLeague_1F_EventScript_Clerk::
	lock
	faceplayer
	message MaxCosaTiServe
	waitmessage
	pokemart DIFA_PokemonLeague_1F_Pokemart
	msgbox MaxSiChiude, MSGBOX_DEFAULT
	release
	end

	.align 2
DIFA_PokemonLeague_1F_Pokemart:
	.2byte ITEM_POTION
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE
	release
	end

DIFA_PokemonLeague_1F_EventScript_Squadra::
	msgbox DIFA_PokemonLeague_1F_EventScript_Squadra_Text_0, MSGBOX_NPC
	delay 30
	applymovement 16, Common_Movement_ExclamationMark
	msgbox DIFA_PokemonLeague_1F_EventScript_Squadra_Text_1, MSGBOX_NPC
	waitmessage
	release
	end


DIFA_PokemonLeague_1F_EventScript_Tommi::
	lock
	faceplayer
	msgbox DIFA_PokemonLeague_1F_EventScript_Tommi_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq DIFA_PokemonLeague_1F_EventScript_Tommi_2
	call DIFA_PokemonLeague_1F_EventScript_InsegnaMosse
	release
	end

DIFA_PokemonLeague_1F_EventScript_Tommi_2:
	msgbox DIFA_PokemonLeague_1F_EventScript_Tommi_Text_1, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_InsegnaMosse::
	goto_if_unset FLAG_SYS_POKEMON_GET, DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_2
	msgbox DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_Text_1
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_TEMP_PAR_4, PARTY_NOTHING_CHOSEN
	goto_if_eq DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_5
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_8
	compare VAR_TEMP_PAR_5, 0
	goto_if_eq DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_11
	msgbox DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_Text_4
	special TeachMoveRelearnerMove
	waitstate
	return

DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_2:
	msgbox DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_Text_0, MSGBOX_NPC
	return

DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_5:
	return

DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_8:
	msgbox DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_Text_2, MSGBOX_NPC
	return

DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_11:
	msgbox DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_Text_3, MSGBOX_NPC
	return


DIFA_PokemonLeague_1F_EventScript_Gaia::
	lock
	faceplayer
	msgbox DIFA_PokemonLeague_1F_EventScript_Gaia_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq DIFA_PokemonLeague_1F_EventScript_Gaia_2
	msgbox DIFA_PokemonLeague_1F_EventScript_Gaia_Text_2
	trainerbattle_single TRAINER_GAIA, DIFA_PokemonLeague_1F_EventScript_Gaia_Text_3, DIFA_PokemonLeague_1F_EventScript_Gaia_Text_4
	msgbox DIFA_PokemonLeague_1F_EventScript_Gaia_Text_5, MSGBOX_NPC
	release
	end

DIFA_PokemonLeague_1F_EventScript_Gaia_2:
	msgbox DIFA_PokemonLeague_1F_EventScript_Gaia_Text_1, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_Morghi::
	msgbox DIFA_PokemonLeague_1F_EventScript_Morghi_Text_0, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_Stoppi::
	msgbox DIFA_PokemonLeague_1F_EventScript_Stoppi_Text_0, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_Peach::
	msgbox DIFA_PokemonLeague_1F_EventScript_Peach_Text_0, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_Domi::
	lock
	faceplayer
	msgbox DIFA_PokemonLeague_1F_EventScript_Domi_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq DIFA_PokemonLeague_1F_EventScript_Domi_2
	msgbox DIFA_PokemonLeague_1F_EventScript_Domi_Text_2
DIFA_PokemonLeague_1F_EventScript_Domi_1:
	release
	end

DIFA_PokemonLeague_1F_EventScript_Domi_2:
	msgbox DIFA_PokemonLeague_1F_EventScript_Domi_Text_1
	goto DIFA_PokemonLeague_1F_EventScript_Domi_1


DIFA_PokemonLeague_1F_EventScript_Checco::
	msgbox DIFA_PokemonLeague_1F_EventScript_Checco_Text_0, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_Simo::
	msgbox DIFA_PokemonLeague_1F_EventScript_Simo_Text_0, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_Dalia::
	msgbox DIFA_PokemonLeague_1F_EventScript_Dalia_Text_0, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_Janko::
	msgbox DIFA_PokemonLeague_1F_EventScript_Janko_Text_0, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_Sarah::
	msgbox DIFA_PokemonLeague_1F_EventScript_Sarah_Text_0, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_Diego::
	msgbox DIFA_PokemonLeague_1F_EventScript_Diego_Text_0, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_Mati::
	msgbox DIFA_PokemonLeague_1F_EventScript_Mati_Text_0, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_Filo::
	msgbox DIFA_PokemonLeague_1F_EventScript_Filo_Text_0, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_Cami::
	msgbox DIFA_PokemonLeague_1F_EventScript_Cami_Text_0, MSGBOX_NPC
	end


DIFA_PokemonLeague_1F_EventScript_Taglia_Advice_1::
	setvar VAR_DIFA_STATE, 1
	applymovement 9, Common_Movement_ExclamationMark
	applymovement 9, Common_Movement_WalkInPlaceFasterUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox DIFA_PokemonLeague_1F_EventScript_Taglia_Advice_1_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 9, taglia_approach_player_1
	waitmovement 0
	msgbox DIFA_PokemonLeague_1F_EventScript_Taglia_Advice_1_Text_1
	giveitem ITEM_REVIVE, 5
	end


DIFA_PokemonLeague_1F_EventScript_Taglia_Advice_2::
	lock
	setvar VAR_DIFA_STATE, 1
	applymovement 9, Common_Movement_FacePlayer
	waitmovement 0
	applymovement 9, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox DIFA_PokemonLeague_1F_EventScript_Taglia_Advice_1_Text_0, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement 9, taglia_approach_player_2
	waitmovement 0
	msgbox DIFA_PokemonLeague_1F_EventScript_Taglia_Advice_1_Text_1
	giveitem ITEM_REVIVE, 5
	msgbox DIFA_PokemonLeague_1F_EventScript_Taglia_Advice_2_Text_0
	release
	end


DIFA_PokemonLeague_1F_EventScript_Taglia::
	msgbox DIFA_PokemonLeague_1F_EventScript_Taglia_Text_0, MSGBOX_NPC
	end


taglia_approach_player_1:
	walk_left
	walk_up
	walk_up
	walk_left
	step_end

taglia_approach_player_2:
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

DIFA_PokemonLeague_1F_EventScript_Squadra_Text_0:
	.string "SQUADRA: Bella Gassi, felice di vedere\n"
	.string "che sei arrivato fino a qua.\p"
	.string "Spero che la tua squadra sia decente,\n"
	.string "perché non sarà facile laurearsi.\l"
	.string "Giusto perché sono buono, ho messo che\l"
	.string "i professori non possono usare\l"
	.string "strumenti per curare i Pokémons.$"

DIFA_PokemonLeague_1F_EventScript_Squadra_Text_1:
	.string "Come dici? Nei negozi trovi solo\n"
	.string "Pozioni?\p"
	.string "AHAH devo aver dimenticato di mettere\n"
	.string "le altre cure...$"

DIFA_PokemonLeague_1F_EventScript_Tommi_Text_0:
	.string "EAGLE: Daje Gassi, hai ancora bisogno di\n"
	.string "qualche mossa?$"

DIFA_PokemonLeague_1F_EventScript_Tommi_Text_1:
	.string "Ok, se hai bisogno chiedi.$"

DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_Text_0:
	.string "Peccato che non hai un cazzo di\n"
	.string "Pokémon, Gassi.$"

DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_Text_1:
	.string "A quale Pokémon vuoi insegnarla?$"

DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_Text_2:
	.string "Mi pigli per il culo Gassi? Con un uovo se\n"
	.string "vuoi ci faccio la frittata.$"

DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_Text_3:
	.string "Mmh, non ho niente da insegnare al\n"
	.string "ragazzo, è ancora troppo giovane.$"

DIFA_PokemonLeague_1F_EventScript_InsegnaMosse_Text_4:
	.string "Quale mossa vuoi che impari?$"

DIFA_PokemonLeague_1F_EventScript_Gaia_Text_0:
	.string "GAIA: Ciao Gas! Vuoi allenarti per la\n"
	.string "laurea con i miei gabbiani?$"

DIFA_PokemonLeague_1F_EventScript_Gaia_Text_1:
	.string "Ok, in bocca al lupo allora.$"

DIFA_PokemonLeague_1F_EventScript_Gaia_Text_2:
	.string "Molto bene, cominciamo!$"

DIFA_PokemonLeague_1F_EventScript_Gaia_Text_3:
	.string "Te faccio er culo.$"

DIFA_PokemonLeague_1F_EventScript_Gaia_Text_4:
	.string "I miei poveri gabbiani...$"

DIFA_PokemonLeague_1F_EventScript_Gaia_Text_5:
	.string "Wow, non male Gas! Possiamo rifarlo\n"
	.string "quando vuoi.$"

DIFA_PokemonLeague_1F_EventScript_Morghi_Text_0:
	.string "MORGANA: Forza Gas!$"

DIFA_PokemonLeague_1F_EventScript_Stoppi_Text_0:
	.string "STOPPI: Sono la più figa.$"

DIFA_PokemonLeague_1F_EventScript_Peach_Text_0:
	.string "PEACH: settemiladuecentouno,\n"
	.string "settemiladuecentodue, sett... Oh Gas!\p"
	.string "In bocca al lupo per la laurea!$"

DIFA_PokemonLeague_1F_EventScript_Domi_Text_0:
	.string "DOMI: Ciao Gas! Hai visto che figo il mio\n"
	.string "sito web personale?$"

DIFA_PokemonLeague_1F_EventScript_Domi_Text_1:
	.string "Come no?! Dacci un'occhiata, l'indirizzo\n"
	.string "è domingoranieri.com$"

DIFA_PokemonLeague_1F_EventScript_Domi_Text_2:
	.string "Figo eh? Daje con sta laurea.$"

DIFA_PokemonLeague_1F_EventScript_Checco_Text_0:
	.string "CHECCO: Il mio sito web fa schifo in\n"
	.string "confronto a quello di Domi...$"

DIFA_PokemonLeague_1F_EventScript_Simo_Text_0:
	.string "SIMO: Chissà quale Pokémon farebbe i\n"
	.string "pompini migliori...$"

DIFA_PokemonLeague_1F_EventScript_Dalia_Text_0:
	.string "DALIA: sono palesemente più figa di\n"
	.string "Stoppi, ma non so perché lei è molto più\l"
	.string "hot.$"

DIFA_PokemonLeague_1F_EventScript_Janko_Text_0:
	.string "JANKO: Ehi Gas, ho saputo che quel\n"
	.string "coglione di Squadra ti ha dato solo\l"
	.string "Pozioni per curare i Pokémons. Niente\l"
	.string "panico, c'è qui il Dottore per te. Se\l"
	.string "vuoi curare i Pokémons basta che fai\l"
	.string "Start, Pokémon, selezioni quello che\l"
	.string "vuoi curare, poi clicchi su Libera. Se ti\l"
	.string "chiede conferma fai SÌ, mi raccomando.$"

DIFA_PokemonLeague_1F_EventScript_Sarah_Text_0:
	.string "SARAH: Lo sapevi che Sarah fa rima con\n"
	.string "baldracca?$"

DIFA_PokemonLeague_1F_EventScript_Diego_Text_0:
	.string "DIEGO: In bocca al lupo per la laurea\n"
	.string "Gas!$"

DIFA_PokemonLeague_1F_EventScript_Mati_Text_0:
	.string "MATI: Che bello che ti laurei Gas, buona\n"
	.string "fortuna!$"

DIFA_PokemonLeague_1F_EventScript_Filo_Text_0:
	.string "FILO: Dirò una sola cosa campione:\n"
	.string "SPINGERE.$"

DIFA_PokemonLeague_1F_EventScript_Cami_Text_0:
	.string "CAMI: Forza Gas!$"

DIFA_PokemonLeague_1F_EventScript_Taglia_Advice_1_Text_0:
	.string "MCP: Ehi Gas!$"

DIFA_PokemonLeague_1F_EventScript_Taglia_Advice_1_Text_1:
	.string "MCP: Occhio che ovviamente se cominci\n"
	.string "la laurea non puoi tornare indietro.\p"
	.string "...\p"
	.string "Dio santo sono in ansia per te. Tò tieni\n"
	.string "sti revitalizzanti che mi fai pietà.$"

DIFA_PokemonLeague_1F_EventScript_Taglia_Advice_2_Text_0:
	.string "Daje Gas!$"

DIFA_PokemonLeague_1F_EventScript_Taglia_Text_0:
	.string "MCP: Daje Gassi! Hai studiato anche tu\n"
	.string "sugli appunti di Sonia, vero?$"

MaxCosaTiServe::
	.string "MAX: Buongiorno, ti serve qualcosa?$"

MaxSiChiude::
	.string "Si chiude!$"
