BolognaTown_SantaMariaMaggiore_MapScripts::
	.byte 0


BolognaTown_SantaMariaMaggiore_EventScript_MTShop::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BolognaTown_SantaMariaMaggiore_MTShop
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
BolognaTown_SantaMariaMaggiore_MTShop:
	.2byte ITEM_TM01_FOCUS_PUNCH
	.2byte ITEM_TM02_DRAGON_CLAW
	.2byte ITEM_TM03_WATER_PULSE
	.2byte ITEM_TM05_ROAR
    .2byte ITEM_TM06_TOXIC
    .2byte ITEM_TM07_HAIL
    .2byte ITEM_TM08_BULK_UP
    .2byte ITEM_TM09_BULLET_SEED
    .2byte ITEM_TM10_HIDDEN_POWER
    .2byte ITEM_TM11_SUNNY_DAY
    .2byte ITEM_TM12_TAUNT
    .2byte ITEM_TM13_ICE_BEAM
    .2byte ITEM_TM14_BLIZZARD
    .2byte ITEM_TM15_HYPER_BEAM
    .2byte ITEM_TM16_LIGHT_SCREEN
    .2byte ITEM_TM17_PROTECT
    .2byte ITEM_TM18_RAIN_DANCE
    .2byte ITEM_TM19_GIGA_DRAIN
    .2byte ITEM_TM20_SAFEGUARD
    .2byte ITEM_TM21_FRUSTRATION
    .2byte ITEM_TM22_SOLAR_BEAM
    .2byte ITEM_TM23_IRON_TAIL
    .2byte ITEM_TM24_THUNDERBOLT
    .2byte ITEM_TM25_THUNDER
    .2byte ITEM_TM26_EARTHQUAKE
    .2byte ITEM_TM27_RETURN
    .2byte ITEM_TM28_DIG
    .2byte ITEM_TM29_PSYCHIC
    .2byte ITEM_TM30_SHADOW_BALL
    .2byte ITEM_TM31_BRICK_BREAK
    .2byte ITEM_TM32_DOUBLE_TEAM
    .2byte ITEM_TM34_SHOCK_WAVE
    .2byte ITEM_TM35_FLAMETHROWER
    .2byte ITEM_TM36_SLUDGE_BOMB
    .2byte ITEM_TM37_SANDSTORM
    .2byte ITEM_TM38_FIRE_BLAST
    .2byte ITEM_TM39_ROCK_TOMB
    .2byte ITEM_TM40_AERIAL_ACE
    .2byte ITEM_TM41_TORMENT
    .2byte ITEM_TM42_FACADE
    .2byte ITEM_TM43_SECRET_POWER
    .2byte ITEM_TM44_REST
    .2byte ITEM_TM45_ATTRACT
    .2byte ITEM_TM46_THIEF
    .2byte ITEM_TM47_STEEL_WING
    .2byte ITEM_TM48_SKILL_SWAP
    .2byte ITEM_TM49_SNATCH
    .2byte ITEM_TM50_OVERHEAT
    .2byte ITEM_HM01_CUT
    .2byte ITEM_HM02_FLY
    .2byte ITEM_HM03_SURF
    .2byte ITEM_HM04_STRENGTH
    .2byte ITEM_HM05_FLASH
    .2byte ITEM_HM06_ROCK_SMASH
    .2byte ITEM_HM07_WATERFALL
    .2byte ITEM_HM08_DIVE
	.2byte ITEM_NONE
	release
	end

BolognaTown_SantaMariaMaggiore_EventScript_ItemsShop::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BolognaTown_SantaMariaMaggiore_ItemsShop
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
BolognaTown_SantaMariaMaggiore_ItemsShop:
    .2byte ITEM_BRIGHT_POWDER
    .2byte ITEM_WHITE_HERB
    .2byte ITEM_MACHO_BRACE
    .2byte ITEM_EXP_SHARE
    .2byte ITEM_QUICK_CLAW
    .2byte ITEM_SOOTHE_BELL
    .2byte ITEM_MENTAL_HERB
    .2byte ITEM_CHOICE_BAND
    .2byte ITEM_KINGS_ROCK
    .2byte ITEM_SILVER_POWDER
    .2byte ITEM_AMULET_COIN
    .2byte ITEM_CLEANSE_TAG
    .2byte ITEM_SOUL_DEW
    .2byte ITEM_DEEP_SEA_TOOTH
    .2byte ITEM_DEEP_SEA_SCALE
    .2byte ITEM_SMOKE_BALL
    .2byte ITEM_EVERSTONE
    .2byte ITEM_FOCUS_BAND
    .2byte ITEM_LUCKY_EGG
    .2byte ITEM_SCOPE_LENS
    .2byte ITEM_METAL_COAT
    .2byte ITEM_DRAGON_SCALE
    .2byte ITEM_LIGHT_BALL
    .2byte ITEM_SOFT_SAND
    .2byte ITEM_HARD_STONE
    .2byte ITEM_MIRACLE_SEED
    .2byte ITEM_BLACK_GLASSES
    .2byte ITEM_BLACK_BELT
    .2byte ITEM_MAGNET
    .2byte ITEM_MYSTIC_WATER
    .2byte ITEM_SHARP_BEAK
    .2byte ITEM_POISON_BARB
    .2byte ITEM_NEVER_MELT_ICE
    .2byte ITEM_SPELL_TAG
    .2byte ITEM_TWISTED_SPOON
    .2byte ITEM_CHARCOAL
    .2byte ITEM_DRAGON_FANG
    .2byte ITEM_UP_GRADE
    .2byte ITEM_SHELL_BELL
    .2byte ITEM_SEA_INCENSE
    .2byte ITEM_LAX_INCENSE
    .2byte ITEM_LUCKY_PUNCH
    .2byte ITEM_METAL_POWDER
    .2byte ITEM_THICK_CLUB
    .2byte ITEM_STICK
	.2byte ITEM_NONE
	release
	end


BolognaTown_SantaMariaMaggiore_EventScript_Fu::
	lock
	faceplayer
	message BolognaTown_SantaMariaMaggiore_Text_Fu
	waitmessage
	pokemart BolognaTown_SantaMariaMaggiore_BerryShop
	msgbox BolognaTown_SantaMariaMaggiore_Text_FuTorna, MSGBOX_DEFAULT
	release
	end

	.align 2
BolognaTown_SantaMariaMaggiore_BerryShop:
    .2byte ITEM_CHERI_BERRY
    .2byte ITEM_CHESTO_BERRY
    .2byte ITEM_PECHA_BERRY
    .2byte ITEM_RAWST_BERRY
    .2byte ITEM_ASPEAR_BERRY
    .2byte ITEM_LEPPA_BERRY
    .2byte ITEM_ORAN_BERRY
    .2byte ITEM_PERSIM_BERRY
    .2byte ITEM_LUM_BERRY
    .2byte ITEM_SITRUS_BERRY
    .2byte ITEM_FIGY_BERRY
    .2byte ITEM_WIKI_BERRY
    .2byte ITEM_MAGO_BERRY
    .2byte ITEM_AGUAV_BERRY
    .2byte ITEM_IAPAPA_BERRY
    .2byte ITEM_RAZZ_BERRY
	.2byte ITEM_NONE
	release
	end

BolognaTown_SantaMariaMaggiore_EventScript_Silvia::
	msgbox BolognaTown_SantaMariaMaggiore_EventScript_Silvia_Text_0, MSGBOX_NPC
	end


BolognaTown_SantaMariaMaggiore_EventScript_Bancomat::
	lock
	checkitem ITEM_CARTA_SILVIA
	msgbox BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_Text_0
	compare VAR_RESULT, 0
	goto_if_ne BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_2
BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_1:
	waitmessage
	release
	end

BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_2:
	msgbox BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_4
	goto BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_1

BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_4:
	message BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_Text_2
	multichoice 25, 5, MULTI_RITIRARE_SOLDI, 0
	closemessage
	compare VAR_RESULT, 0
	goto_if_eq BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_6
	compare VAR_RESULT, 1
	goto_if_eq BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_7
	compare VAR_RESULT, 2
	goto_if_eq BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_8
	goto BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_1

BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_6:
	addmoney 1000
	msgbox BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_Text_3
	goto BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_1

BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_7:
	addmoney 10000
	msgbox BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_Text_4
	goto BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_1

BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_8:
	addmoney 100000
	msgbox BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_Text_5
	goto BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_1


BolognaTown_SantaMariaMaggiore_EventScript_Silvia_Text_0:
	.string "SILVIA: Ehi Gas! Hai visto la mia carta\n"
	.string "di credito? Mi sa che l'ho persa qua in\l"
	.string "giro...$"

BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_Text_0:
	.string "Un Bancomat.$"

BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_Text_1:
	.string "Vuoi inserire la carta di Silvia?$"

BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_Text_2:
	.string "Quanti soldi vuoi ritirare?$"

BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_Text_3:
	.string "Gas ritira ¥1000.$"

BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_Text_4:
	.string "Gas ritira ¥10000.$"

BolognaTown_SantaMariaMaggiore_EventScript_Bancomat_Text_5:
	.string "Gas ritira ¥100000$"

BolognaTown_SantaMariaMaggiore_Text_Fu::
	.string "FU: Bella Gas, lascia perdere tutte\n"
	.string "queste troiate. I veri allenatori di\l"
	.string "Pokémons usano le bacche.\p"
	.string "Ecco, guarda pure la mia scorta.$"

BolognaTown_SantaMariaMaggiore_Text_FuTorna::
	.string "FU: Torna se ti servono altre bacche.$"
