RiminiMare_Mart_MapScripts::
	.byte 0

RiminiMare_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart RiminiMare_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
RiminiMare_Mart_Pokemart:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE
	release
	end

RiminiMare_Mart_EventScript_Boy::
	msgbox RiminiMare_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
	end

RiminiMare_Mart_EventScript_ExpertF::
	msgbox RiminiMare_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
	end

RiminiMare_Mart_EventScript_Lass::
	msgbox RiminiMare_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
	end

RiminiMare_Mart_Text_XSpecialIsCrucial:
	.string "For any POKéMON match, X SPECIAL\n"
	.string "is crucial.\p"
	.string "It jacks up the power of some moves\n"
	.string "even though it's only for one battle.$"

RiminiMare_Mart_Text_NoStrategyGuidesForBattleTent:
	.string "They don't seem to sell any winning\n"
	.string "strategy guides for the BATTLE TENT…\p"
	.string "It seems one must rely on one's\n"
	.string "own wits after all…$"

RiminiMare_Mart_Text_NestBallOnWeakenedPokemon:
	.string "The NEST BALL works better on\n"
	.string "weakened POKéMON.\p"
	.string "RIMINIMARE is the only place you can\n"
	.string "buy it.$"

