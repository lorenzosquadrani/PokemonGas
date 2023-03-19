SantaGiustina_House_MapScripts::
	.byte 0

SantaGiustina_House_EventScript_OldMan::
	msgbox SantaGiustina_House_Text_WifeWarmingEggInHotSprings, MSGBOX_NPC
	end

SantaGiustina_House_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox SantaGiustina_House_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SantaGiustina_House_Text_WifeWarmingEggInHotSprings:
	.string "My wife's warming an EGG in the hot\n"
	.string "springs. This is what she told me.\p"
	.string "She left two POKéMON with the DAY CARE.\n"
	.string "And they discovered that EGG!$"

SantaGiustina_House_Text_Zigzagoon:
	.string "ZIGZAGOON: Pshoo!$"

