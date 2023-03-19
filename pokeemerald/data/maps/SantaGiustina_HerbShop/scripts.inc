SantaGiustina_HerbShop_MapScripts::
	.byte 0

SantaGiustina_HerbShop_EventScript_Clerk::
	lock
	faceplayer
	message SantaGiustina_HerbShop_Text_WelcomeToHerbShop
	waitmessage
	pokemart SantaGiustina_HerbShop_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SantaGiustina_HerbShop_Pokemart:
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_NONE
	release
	end

SantaGiustina_HerbShop_EventScript_ExpertM::
	msgbox SantaGiustina_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
	end

SantaGiustina_HerbShop_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CHARCOAL, SantaGiustina_HerbShop_EventScript_ExplainCharcoal
	msgbox SantaGiustina_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
	giveitem ITEM_CHARCOAL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_CHARCOAL
	release
	end

SantaGiustina_HerbShop_EventScript_ExplainCharcoal::
	msgbox SantaGiustina_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
	release
	end

SantaGiustina_HerbShop_Text_WelcomeToHerbShop:
	.string "Welcome to the HERB SHOP, home of\n"
	.string "effective and inexpensive medicine!$"

SantaGiustina_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
	.string "You've come to look at herbal medicine\n"
	.string "in SANTA?\p"
	.string "That's rather commendable.\p"
	.string "I like you! Take this!$"

SantaGiustina_HerbShop_Text_ExplainCharcoal:
	.string "That CHARCOAL I gave you, it's used\n"
	.string "for making herbal medicine.\p"
	.string "It also does wonders when held by\n"
	.string "a POKéMON.\p"
	.string "It intensifies the power of FIRE-type\n"
	.string "moves.$"

SantaGiustina_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
	.string "Herbal medicine works impressively well.\n"
	.string "But your POKéMON will dislike you for it.\l"
	.string "It must be horribly bitter!$"

