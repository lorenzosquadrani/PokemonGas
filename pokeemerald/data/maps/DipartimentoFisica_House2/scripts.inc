DipartimentoFisica_House2_MapScripts::
	.byte 0

DipartimentoFisica_House2_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SILK_SCARF, DipartimentoFisica_House2_EventScript_ExplainSilkScarf
	msgbox DipartimentoFisica_House2_Text_WantYouToHaveSilkScarf, MSGBOX_DEFAULT
	giveitem ITEM_SILK_SCARF
	goto_if_eq VAR_RESULT, FALSE, DipartimentoFisica_House2_EventScript_NoRoomForScarf
	setflag FLAG_RECEIVED_SILK_SCARF
	release
	end

DipartimentoFisica_House2_EventScript_NoRoomForScarf::
	msgbox DipartimentoFisica_House2_Text_NoRoom, MSGBOX_DEFAULT
	release
	end

DipartimentoFisica_House2_EventScript_ExplainSilkScarf::
	msgbox DipartimentoFisica_House2_Text_ExplainSilkScarf, MSGBOX_DEFAULT
	release
	end

DipartimentoFisica_House2_EventScript_Boy::
	msgbox DipartimentoFisica_House2_Text_BrawlySoCool, MSGBOX_NPC
	end

DipartimentoFisica_House2_Text_WantYouToHaveSilkScarf:
	.string "Gorge your eyes on this!\p"
	.string "It's a SILK SCARF. It's right at the\n"
	.string "cutting edge of fashion, yeah!\p"
	.string "Oh, I can see your eyes twinkling!\n"
	.string "You appreciate my dazzling style!\p"
	.string "Oh, you're a delight!\n"
	.string "Here you go. I want you to have it!$"

DipartimentoFisica_House2_Text_NoRoom:
	.string "Oh, you don't have room?\p"
	.string "Now, listen tight, this SCARF is a must-\n"
	.string "have! Why, I would sell all my items\l"
	.string "in order to get it!$"

DipartimentoFisica_House2_Text_ExplainSilkScarf:
	.string "The SILK SCARF raises the power of\n"
	.string "NORMAL-type moves.\p"
	.string "It's a marvelous SCARF that will go\n"
	.string "with almost all POKéMON!$"

DipartimentoFisica_House2_Text_BrawlySoCool:
	.string "Wow, you bothered to cross the sea\n"
	.string "to visit DIPARTIMENTO?\p"
	.string "Did you maybe come here because you\n"
	.string "heard about BRAWLY?\p"
	.string "He's so cool…\n"
	.string "Everyone idolizes him.$"

