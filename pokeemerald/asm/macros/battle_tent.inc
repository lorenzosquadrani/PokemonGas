@ Verdanturf Tent

	@ Initialize the Verdanturf Battle Tent challenge
	.macro verdanturftent_init
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_INIT
	special CallVerdanturfTentFunction
	.endm

	@ Get the current prize item id
	.macro verdanturftent_getprize
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_GET_PRIZE
	special CallVerdanturfTentFunction
	.endm

	@ Unused. Set the prize item to be given
	.macro verdanturftent_setprize unusedArg:req, itemId:req
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_SET_PRIZE
	setvar VAR_0x8005, \unusedArg
	setvar VAR_0x8006, \itemId
	special CallVerdanturfTentFunction
	.endm

	@ Unused. Set the opponent trainer and gfx. SetNextBattleTentOpponent is used through tower_setopponent instead
	.macro verdanturftent_setopponentgfx
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_SET_OPPONENT_GFX
	special CallVerdanturfTentFunction
	.endm

	@ Buffers the opponents intro speech to STR_VAR_4. Despite being a Verdanturf Tent function, it serves the same purpose for all 3 tents.
	.macro battletent_getopponentintro
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_GET_OPPONENT_INTRO
	special CallVerdanturfTentFunction
	.endm

	@ Save the game and set the challenge status
	.macro verdanturftent_save challengeStatus:req
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_SAVE
	setvar VAR_0x8005, \challengeStatus
	special CallVerdanturfTentFunction
	.endm

	@ Set the prize item as randomly selected from a list. Randomness unnecessary, as the list is only 1 item
	.macro verdanturftent_setrandomprize
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_SET_RANDOM_PRIZE
	special CallVerdanturfTentFunction
	.endm

	@ Give the current prize item. FALSE if no room for prize
	.macro verdanturftent_giveprize
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_GIVE_PRIZE
	special CallVerdanturfTentFunction
	.endm


@ Emilia Tent

	@ Initialize the Emilia Battle Tent challenge
	.macro emiliatent_init
	setvar VAR_0x8004, EMILIA_TENT_FUNC_INIT
	special CallEmiliaTentFunction
	.endm

	@ Get the current prize item id
	.macro emiliatent_getprize
	setvar VAR_0x8004, EMILIA_TENT_FUNC_GET_PRIZE
	special CallEmiliaTentFunction
	.endm

	@ Unused. Set the prize item to be given
	.macro emiliatent_setprize unusedArg:req, itemId:req
	setvar VAR_0x8004, EMILIA_TENT_FUNC_SET_PRIZE
	setvar VAR_0x8005, \unusedArg
	setvar VAR_0x8006, \itemId
	special CallEmiliaTentFunction
	.endm

	@ Save the game and set the challenge status
	.macro emiliatent_save challengeStatus:req
	setvar VAR_0x8004, EMILIA_TENT_FUNC_SAVE
	setvar VAR_0x8005, \challengeStatus
	special CallEmiliaTentFunction
	.endm

	@ Set the prize item as randomly selected from a list. Randomness unnecessary, as the list is only 1 item
	.macro emiliatent_setrandomprize
	setvar VAR_0x8004, EMILIA_TENT_FUNC_SET_RANDOM_PRIZE
	special CallEmiliaTentFunction
	.endm

	@ Give the current prize item. FALSE if no room for prize
	.macro emiliatent_giveprize
	setvar VAR_0x8004, EMILIA_TENT_FUNC_GIVE_PRIZE
	special CallEmiliaTentFunction
	.endm

	@ Buffer the opponent trainers name to STR_VAR_1
	.macro emiliatent_getopponentname
	setvar VAR_0x8004, EMILIA_TENT_FUNC_GET_OPPONENT_NAME
	special CallEmiliaTentFunction
	.endm


@ Slateport Tent

	@ Initialize the Slateport Battle Tent challenge
	.macro slateporttent_init
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_INIT
	special CallSlateportTentFunction
	.endm

	@ Get the current prize item id
	.macro slateporttent_getprize
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_GET_PRIZE
	special CallSlateportTentFunction
	.endm

	@ Unused. Set the prize item to be given
	.macro slateporttent_setprize unusedArg:req, itemId:req
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_SET_PRIZE
	setvar VAR_0x8005, \unusedArg
	setvar VAR_0x8006, \itemId
	special CallSlateportTentFunction
	.endm

	@ Save the game and set the challenge status
	.macro slateporttent_save challengeStatus:req
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_SAVE
	setvar VAR_0x8005, \challengeStatus
	special CallSlateportTentFunction
	.endm

	@ Set the prize item as randomly selected from a list. Randomness unnecessary, as the list is only 1 item
	.macro slateporttent_setrandomprize
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_SET_RANDOM_PRIZE
	special CallSlateportTentFunction
	.endm

	@ Give the current prize item. FALSE if no room for prize
	.macro slateporttent_giveprize
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_GIVE_PRIZE
	special CallSlateportTentFunction
	.endm

	@ Slateport Tent's version of factory_rentmons
	.macro slateporttent_rentmons
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_SELECT_RENT_MONS
	special CallSlateportTentFunction
	.endm

	@ Slateport Tent's version of factory_swapmons
	.macro slateporttent_swapmons
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_SWAP_RENT_MONS
	special CallSlateportTentFunction
	.endm

	@ Slateport Tent's version of factory_generateopponentmons
	.macro slateporttent_generateopponentmons
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_GENERATE_OPPONENT_MONS
	special CallSlateportTentFunction
	.endm

	@ Slateport Tent's version of factory_generaterentalmons
	.macro slateporttent_generaterentalmons
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_GENERATE_RENTAL_MONS
	special CallSlateportTentFunction
	.endm

