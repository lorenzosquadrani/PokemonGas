.set LOCALID_RIVAL_ON_BIKE, 7
.set LOCALID_RIVAL, 8

SantaGiustina_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SantaGiustina_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SantaGiustina_OnFrame
	.byte 0

SantaGiustina_OnTransition:
	setflag FLAG_VISITED_SANTA_GIUSTINA
	call_if_set FLAG_WHITEOUT_TO_SANTA, SantaGiustina_EventScript_ClearSantaWhiteOut
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, SantaGiustina_EventScript_ShowMtChimneyTrainers
	call Common_EventScript_SetupRivalGfxId
	call Common_EventScript_SetupRivalOnBikeGfxId
	call_if_eq VAR_SANTA_GIUSTINA_STATE, 1, SantaGiustina_EventScript_CheckSetRivalPos
	call_if_eq VAR_SANTA_GIUSTINA_STATE, 1, SantaGiustina_EventScript_HideMapNamePopup
	end

SantaGiustina_EventScript_ClearSantaWhiteOut::
	clearflag FLAG_WHITEOUT_TO_SANTA
	return

SantaGiustina_EventScript_CheckSetRivalPos::
	getplayerxy VAR_TEMP_PAR_4, VAR_TEMP_PAR_5
	goto_if_eq VAR_TEMP_PAR_4, 9, SantaGiustina_EventScript_SetRivalPos
	return

SantaGiustina_EventScript_SetRivalPos::
	setobjectxyperm LOCALID_RIVAL, 11, 9
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
	clearflag FLAG_HIDE_SANTA_GIUSTINA_RIVAL
	return

SantaGiustina_EventScript_ShowMtChimneyTrainers::
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
	return

SantaGiustina_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

SantaGiustina_OnFrame:
	map_script_2 VAR_SANTA_GIUSTINA_STATE, 1, SantaGiustina_EventScript_RivalGiveGoGoggles
	.2byte 0

SantaGiustina_EventScript_RivalGiveGoGoggles::
	lockall
	getplayerxy VAR_0x8008, VAR_0x8009
	call_if_eq VAR_0x8008, 9, SantaGiustina_EventScript_RivalNoticePlayer
	call_if_ne VAR_0x8008, 9, SantaGiustina_EventScript_RivalExitHerbShop
	delay 20
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SantaGiustina_EventScript_PlayMayMusic
	call_if_eq VAR_RESULT, FEMALE, SantaGiustina_EventScript_PlayBrendanMusic
	call_if_eq VAR_0x8008, 9, SantaGiustina_EventScript_RivalApproachPlayer1
	call_if_ne VAR_0x8008, 9, SantaGiustina_EventScript_RivalApproachPlayer2
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SantaGiustina_EventScript_MayGiveGoGoggles
	goto_if_eq VAR_RESULT, FEMALE, SantaGiustina_EventScript_BrendanGiveGoGoggles
	end

SantaGiustina_EventScript_MayGiveGoGoggles::
	msgbox SantaGiustina_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_GO_GOGGLES
	setflag FLAG_RECEIVED_GO_GOGGLES
	msgbox SantaGiustina_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
	goto SantaGiustina_EventScript_RivalExit
	end

SantaGiustina_EventScript_BrendanGiveGoGoggles::
	msgbox SantaGiustina_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_GO_GOGGLES
	setflag FLAG_RECEIVED_GO_GOGGLES
	msgbox SantaGiustina_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
	goto SantaGiustina_EventScript_RivalExit
	end

SantaGiustina_EventScript_RivalExit::
	closemessage
	removeobject LOCALID_RIVAL
	addobject LOCALID_RIVAL_ON_BIKE
	delay 30
	call_if_eq VAR_0x8008, 9, SantaGiustina_EventScript_RivalExit1
	call_if_ne VAR_0x8008, 9, SantaGiustina_EventScript_RivalExit2
	removeobject LOCALID_RIVAL_ON_BIKE
	setvar VAR_SANTA_GIUSTINA_STATE, 2
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

SantaGiustina_EventScript_PlayMayMusic::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return

SantaGiustina_EventScript_PlayBrendanMusic::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return

SantaGiustina_EventScript_RivalNoticePlayer::
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	return

SantaGiustina_EventScript_RivalExitHerbShop::
	opendoor 12, 15
	waitdooranim
	addobject LOCALID_RIVAL
	applymovement LOCALID_RIVAL, SantaGiustina_Movement_RivalExitHerbShop
	waitmovement 0
	closedoor 12, 15
	waitdooranim
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

SantaGiustina_EventScript_RivalApproachPlayer1::
	applymovement LOCALID_RIVAL, SantaGiustina_Movement_RivalApproachPlayer1
	waitmovement 0
	return

SantaGiustina_EventScript_RivalApproachPlayer2::
	applymovement LOCALID_RIVAL, SantaGiustina_Movement_RivalApproachPlayer2
	waitmovement 0
	return

SantaGiustina_EventScript_RivalExit1::
	applymovement OBJ_EVENT_ID_PLAYER, SantaGiustina_Movement_PlayerWatchRivalExit
	applymovement LOCALID_RIVAL_ON_BIKE, SantaGiustina_Movement_RivalExit1
	waitmovement 0
	return

SantaGiustina_EventScript_RivalExit2::
	applymovement LOCALID_RIVAL_ON_BIKE, SantaGiustina_Movement_RivalExit2
	waitmovement 0
	return

SantaGiustina_Movement_RivalExit2:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

SantaGiustina_Movement_PlayerWatchRivalExit:
	delay_16
	delay_8
	walk_in_place_faster_right
	step_end

SantaGiustina_Movement_RivalExit1:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SantaGiustina_Movement_RivalApproachPlayer2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SantaGiustina_Movement_RivalApproachPlayer1:
	walk_left
	walk_left
	walk_up
	step_end

SantaGiustina_Movement_RivalExitHerbShop:
	walk_down
	step_end

SantaGiustina_EventScript_HotSpringsTrigger::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_SOUTH, SantaGiustina_EventScript_EnteredHotSprings
	end

SantaGiustina_EventScript_EnteredHotSprings::
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
	end

SantaGiustina_EventScript_ExpertM::
	msgbox SantaGiustina_Text_HotSpringsNeverRunDry, MSGBOX_NPC
	end

SantaGiustina_EventScript_OldMan::
	msgbox SantaGiustina_Text_PokemonNippedBackside, MSGBOX_SIGN
	end

SantaGiustina_EventScript_Twin::
	msgbox SantaGiustina_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
	end

SantaGiustina_EventScript_HotSpringsOldWoman1::
	msgbox SantaGiustina_Text_IfPokemonInHotSprings, MSGBOX_NPC
	end

SantaGiustina_EventScript_HotSpringsOldWoman2::
	msgbox SantaGiustina_Text_HotSpringsClaims, MSGBOX_NPC
	end

SantaGiustina_EventScript_ExpertF::
	msgbox SantaGiustina_Text_OhYouLikeHotSprings, MSGBOX_NPC
	end

SantaGiustina_EventScript_EggWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SANTA_EGG, SantaGiustina_EventScript_ReceivedEgg
	msgbox SantaGiustina_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SantaGiustina_EventScript_DeclineEgg
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, SantaGiustina_EventScript_NoRoomForEgg
	msgbox SantaGiustina_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_SANTA_EGG
	playfanfare MUS_OBTAIN_ITEM
	message SantaGiustina_Text_ReceivedTheEgg
	waitfanfare
	giveegg SPECIES_WYNAUT
	release
	end

SantaGiustina_EventScript_ReceivedEgg::
	msgbox SantaGiustina_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
	release
	end

SantaGiustina_EventScript_NoRoomForEgg::
	msgbox SantaGiustina_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
	release
	end

SantaGiustina_EventScript_DeclineEgg::
	msgbox SantaGiustina_Text_AsYouWishThen, MSGBOX_DEFAULT
	release
	end

SantaGiustina_EventScript_TownSign::
	msgbox SantaGiustina_Text_TownSign, MSGBOX_SIGN
	end

SantaGiustina_EventScript_GymSign::
	msgbox SantaGiustina_Text_GymSign, MSGBOX_SIGN
	end

SantaGiustina_EventScript_HerbShopSign::
	msgbox SantaGiustina_Text_HerbShopSign, MSGBOX_SIGN
	end

SantaGiustina_Text_MayNiceBadgesTakeThis:
	.string "MAY: {PLAYER}{KUN}! Long time no see!\p"
	.string "Oh? While I visited the hot springs,\n"
	.string "you got the SANTA GYM BADGE.\p"
	.string "You must have collected\n"
	.string "good POKéMON…\l"
	.string "No, I believe you raised some.\p"
	.string "I guess it would be okay for you to\n"
	.string "have this.$"

SantaGiustina_Text_MayExplainGoGogglesChallengeDad:
	.string "MAY: With those GO-GOGGLES, you'll\n"
	.string "have no trouble getting through the\l"
	.string "desert near ROUTE 111.\p"
	.string "But, wow, {PLAYER}{KUN}…\n"
	.string "Challenging GYMS…\p"
	.string "You're trying hard because you don't\n"
	.string "want to lose to me, I bet!\p"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
	.string "your dad in PETALBURG GYM.\p"
	.string "See you again!$"

SantaGiustina_Text_BrendanNiceBadgesTakeThis:
	.string "BRENDAN: {PLAYER}, hey, it's been a while.\n"
	.string "How's it going?\p"
	.string "Hmm…\n"
	.string "That's a decent collection of BADGES.\p"
	.string "All right, then.\n"
	.string "You may as well have this.$"

SantaGiustina_Text_BrendanExplainGoGogglesChallengeDad:
	.string "BRENDAN: Keep those with you if you're\n"
	.string "planning on going into that desert near\l"
	.string "ROUTE 111.\p"
	.string "There should be some POKéMON that\n"
	.string "are exclusively desert-dwellers.\l"
	.string "You might look around for those.\p"
	.string "As for me…\n"
	.string "I'm considering challenging NORMAN,\l"
	.string "the GYM LEADER of PETALBURG.\p"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
	.string "he really is tough.\p"
	.string "See you around!$"

SantaGiustina_Text_HaveEggWillYouTakeIt:
	.string "I have here an EGG.\p"
	.string "I'd hoped to hatch it by covering it in\n"
	.string "hot sand by the hot springs.\l"
	.string "But that doesn't seem to be enough…\p"
	.string "I've heard it would be best if it were\n"
	.string "kept together with POKéMON and\l"
	.string "carried about.\p"
	.string "You are a TRAINER, yes?\n"
	.string "And your POKéMON radiate vitality.\p"
	.string "So, what say you?\n"
	.string "Will you take this EGG to hatch?$"

SantaGiustina_Text_HopeYoullWalkPlentyWithEgg:
	.string "Good! I hope you'll walk plenty with\n"
	.string "this here EGG!$"

SantaGiustina_Text_ReceivedTheEgg:
	.string "{PLAYER} received the EGG.$"

SantaGiustina_Text_NoRoomForThisEgg:
	.string "Oh? You've too many POKéMON.\n"
	.string "There's no room for this EGG…$"

SantaGiustina_Text_AsYouWishThen:
	.string "As you wish, then…\p"
	.string "If you have a change of heart about\n"
	.string "hatching this EGG, I will be here.$"

SantaGiustina_Text_EverySoOftenEggFoundAtDayCare:
	.string "Every so often, an EGG will be found at\n"
	.string "the POKéMON DAY CARE.\p"
	.string "Or at least that's how the rumor goes.$"

SantaGiustina_Text_HotSpringsNeverRunDry:
	.string "We draw as much hot water as we need,\n"
	.string "and yet the hot springs never run dry.\p"
	.string "Isn't it magical?\p"
	.string "These hot springs appear near active\n"
	.string "volcanoes. Veins of water under the\l"
	.string "ground are heated by magma to well up\l"
	.string "as hot springs.$"

SantaGiustina_Text_PokemonNippedBackside:
	.string "Being buried in this hot sand is…\n"
	.string "Sigh…\p"
	.string "So warm and heavenly…\p"
	.string "Eh? Gyaah! Ouch!\p"
	.string "A POKéMON nipped my backside!$"

SantaGiustina_Text_OhYouLikeHotSprings:
	.string "Oh, you like hot springs, do you?\p"
	.string "That's surprising for one as young\n"
	.string "as you.$"

SantaGiustina_Text_BatheInHotSpringsEveryDay:
	.string "I bathe in the hot springs every day.\p"
	.string "I want to become a beautiful and strong\n"
	.string "GYM LEADER like FLANNERY.$"

SantaGiustina_Text_IfPokemonInHotSprings:
	.string "If people put POKéMON in hot springs,\n"
	.string "it might be seriously strange.\p"
	.string "Why, it might be an electric bath, or\n"
	.string "a bubble bath, or even a lava bath…$"

SantaGiustina_Text_HotSpringsClaims:
	.string "They're claiming that these hot springs\n"
	.string "are good for calming nervous tension,\l"
	.string "relieving aching muscles, solving\l"
	.string "romantic problems, and attracting\l"
	.string "money…$"

SantaGiustina_Text_TownSign:
	.string "SANTA TOWN\p"
	.string "“POKéMON CENTER HOT SPRINGS\n"
	.string "An excellent place for relaxing!”$"

SantaGiustina_Text_GymSign:
	.string "SANTA TOWN POKéMON GYM\n"
	.string "LEADER: FLANNERY\l"
	.string "“One with a fiery passion that burns!”$"

SantaGiustina_Text_HerbShopSign:
	.string "POKéMON HERB SHOP\n"
	.string "“Bitter taste--better cure!”$"

