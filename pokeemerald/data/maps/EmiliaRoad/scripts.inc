.set LOCALID_CHALLENGE_BIKER, 21
.set LOCALID_RIVAL, 28
.set LOCALID_RIVAL_ON_BIKE, 29
.set LOCALID_BIRCH, 36

EmiliaRoad_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, EmiliaRoad_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, EmiliaRoad_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EmiliaRoad_OnFrame
	.byte 0

EmiliaRoad_OnResume:
	special UpdateCyclingRoadState
	end

EmiliaRoad_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	call Common_EventScript_SetupRivalOnBikeGfxId
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, EmiliaRoad_EventScript_SaveCyclingMusic
	end

EmiliaRoad_EventScript_SaveCyclingMusic::
	savebgm MUS_CYCLING
	return

EmiliaRoad_OnFrame:
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, EmiliaRoad_EventScript_BeginCylcingRoadChallenge
	.2byte 0

EmiliaRoad_EventScript_BeginCylcingRoadChallenge::
	special Special_BeginCyclingRoadChallenge
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
	return

EmiliaRoad_EventScript_AquaGrunt1::
	lock
	faceplayer
	msgbox EmiliaRoad_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

EmiliaRoad_EventScript_AquaGrunt2::
	lock
	faceplayer
	msgbox EmiliaRoad_Text_KickUpARuckus, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

EmiliaRoad_EventScript_AquaGrunt3::
	lock
	faceplayer
	msgbox EmiliaRoad_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

EmiliaRoad_EventScript_AquaGrunt4::
	lock
	faceplayer
	msgbox EmiliaRoad_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

EmiliaRoad_EventScript_Boy1::
	msgbox EmiliaRoad_Text_RideBikeAtFullSpeed, MSGBOX_NPC
	end

EmiliaRoad_EventScript_CyclingGirl1::
	msgbox EmiliaRoad_Text_HairStreamsBehindMe, MSGBOX_NPC
	end

EmiliaRoad_EventScript_CyclingGuy1::
	msgbox EmiliaRoad_Text_YouGotBikeFromRydel, MSGBOX_NPC
	end

EmiliaRoad_EventScript_OldMan::
	msgbox EmiliaRoad_Text_TwoRoads, MSGBOX_NPC
	end

EmiliaRoad_EventScript_OldWoman::
	msgbox EmiliaRoad_Text_WalkOnTheLowRoad, MSGBOX_NPC
	end

EmiliaRoad_EventScript_CyclingGuy2::
	msgbox EmiliaRoad_Text_BikeTechniques, MSGBOX_NPC
	end

EmiliaRoad_EventScript_Boy2::
	msgbox EmiliaRoad_Text_WhichShouldIChoose, MSGBOX_NPC
	end

EmiliaRoad_EventScript_SlateportCitySign::
	msgbox EmiliaRoad_Text_SlateportCitySign, MSGBOX_SIGN
	end

EmiliaRoad_EventScript_CyclingRoadSign::
	msgbox EmiliaRoad_Text_CyclingRoadSign, MSGBOX_SIGN
	end

EmiliaRoad_EventScript_VandalizedSign::
	msgbox EmiliaRoad_Text_AquaWasHere, MSGBOX_SIGN
	end

EmiliaRoad_EventScript_Route103Sign::
	msgbox EmiliaRoad_Text_Route103Sign, MSGBOX_SIGN
	end

EmiliaRoad_EventScript_SeasideParkingSign::
	msgbox EmiliaRoad_Text_SeasideParkingSign, MSGBOX_SIGN
	end

EmiliaRoad_EventScript_MauvilleCitySign::
	msgbox EmiliaRoad_Text_MauvilleCitySign, MSGBOX_SIGN
	end

EmiliaRoad_EventScript_TrainerTipsPrlzSleep::
	msgbox EmiliaRoad_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
	end

EmiliaRoad_EventScript_TrainerTipsRegisterItems::
	msgbox EmiliaRoad_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
	end

EmiliaRoad_EventScript_TrickHouseSign::
	msgbox EmiliaRoad_Text_TrickHouseSign, MSGBOX_SIGN
	end

EmiliaRoad_EventScript_CyclingRoadResultsSign::
	lockall
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
	goto_if_eq VAR_RESULT, FALSE, EmiliaRoad_EventScript_NoRecordSet
	msgbox EmiliaRoad_Text_BestRecord, MSGBOX_DEFAULT
	releaseall
	end

EmiliaRoad_EventScript_NoRecordSet::
	msgbox EmiliaRoad_Text_ThereIsNoRecord, MSGBOX_DEFAULT
	releaseall
	end

EmiliaRoad_EventScript_ChallengeGuy::
	lock
	faceplayer
	specialvar VAR_RESULT, GetPlayerAvatarBike
	goto_if_eq VAR_RESULT, 1, EmiliaRoad_EventScript_PlayerRidingAcroBike
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, EmiliaRoad_EventScript_PlayerNotRidingBike
	msgbox EmiliaRoad_Text_AlwaysAimHigher, MSGBOX_DEFAULT
	release
	end

EmiliaRoad_EventScript_PlayerNotRidingBike::
	msgbox EmiliaRoad_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
	release
	end

EmiliaRoad_EventScript_PlayerRidingAcroBike::
	msgbox EmiliaRoad_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
	release
	end

EmiliaRoad_EventScript_Edward::
	trainerbattle_single TRAINER_EDWARD, EmiliaRoad_Text_EdwardIntro, EmiliaRoad_Text_EdwardDefeated
	msgbox EmiliaRoad_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_Jaclyn::
	trainerbattle_single TRAINER_JACLYN, EmiliaRoad_Text_JaclynIntro, EmiliaRoad_Text_JaclynDefeated
	msgbox EmiliaRoad_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_Edwin::
	trainerbattle_single TRAINER_EDWIN_1, EmiliaRoad_Text_EdwinIntro, EmiliaRoad_Text_EdwinDefeated, EmiliaRoad_EventScript_EdwinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, EmiliaRoad_EventScript_EdwinRematch
	msgbox EmiliaRoad_Text_EdwinPostBattle, MSGBOX_DEFAULT
	release
	end

EmiliaRoad_EventScript_EdwinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox EmiliaRoad_Text_EdwinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_EDWIN_1
	release
	end

EmiliaRoad_EventScript_EdwinRematch::
	trainerbattle_rematch TRAINER_EDWIN_1, EmiliaRoad_Text_EdwinRematchIntro, EmiliaRoad_Text_EdwinRematchDefeated
	msgbox EmiliaRoad_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_Dale::
	trainerbattle_single TRAINER_DALE, EmiliaRoad_Text_DaleIntro, EmiliaRoad_Text_DaleDefeated
	msgbox EmiliaRoad_Text_DalePostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_Jacob::
	trainerbattle_single TRAINER_JACOB, EmiliaRoad_Text_JacobIntro, EmiliaRoad_Text_JacobDefeated
	msgbox EmiliaRoad_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_Anthony::
	trainerbattle_single TRAINER_ANTHONY, EmiliaRoad_Text_AnthonyIntro, EmiliaRoad_Text_AnthonyDefeated
	msgbox EmiliaRoad_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_Benjamin::
	trainerbattle_single TRAINER_BENJAMIN_1, EmiliaRoad_Text_BenjaminIntro, EmiliaRoad_Text_BenjaminDefeated, EmiliaRoad_EventScript_BenjaminRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, EmiliaRoad_EventScript_BenjaminRematch
	msgbox EmiliaRoad_Text_BenjaminPostBattle, MSGBOX_DEFAULT
	release
	end

EmiliaRoad_EventScript_BenjaminRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox EmiliaRoad_Text_BenjaminRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_BENJAMIN_1
	release
	end

EmiliaRoad_EventScript_BenjaminRematch::
	trainerbattle_rematch TRAINER_BENJAMIN_1, EmiliaRoad_Text_BenjaminRematchIntro, EmiliaRoad_Text_BenjaminRematchDefeated
	msgbox EmiliaRoad_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_Jasmine::
	trainerbattle_single TRAINER_JASMINE, EmiliaRoad_Text_JasmineIntro, EmiliaRoad_Text_JasmineDefeated
	msgbox EmiliaRoad_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_Abigail::
	trainerbattle_single TRAINER_ABIGAIL_1, EmiliaRoad_Text_AbigailIntro, EmiliaRoad_Text_AbigailDefeated, EmiliaRoad_EventScript_AbigailRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, EmiliaRoad_EventScript_AbigailRematch
	msgbox EmiliaRoad_Text_AbigailPostBattle, MSGBOX_DEFAULT
	release
	end

EmiliaRoad_EventScript_AbigailRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox EmiliaRoad_Text_AbigailRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ABIGAIL_1
	release
	end

EmiliaRoad_EventScript_AbigailRematch::
	trainerbattle_rematch TRAINER_ABIGAIL_1, EmiliaRoad_Text_AbigailRematchIntro, EmiliaRoad_Text_AbigailRematchDefeated
	msgbox EmiliaRoad_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_Isabel::
	trainerbattle_single TRAINER_ISABEL_1, EmiliaRoad_Text_IsabelIntro, EmiliaRoad_Text_IsabelDefeated, EmiliaRoad_EventScript_IsabelRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, EmiliaRoad_EventScript_IsabelRematch
	msgbox EmiliaRoad_Text_IsabelPostBattle, MSGBOX_DEFAULT
	release
	end

EmiliaRoad_EventScript_IsabelRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox EmiliaRoad_Text_IsabelRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ISABEL_1
	release
	end

EmiliaRoad_EventScript_IsabelRematch::
	trainerbattle_rematch TRAINER_ISABEL_1, EmiliaRoad_Text_IsabelRematchIntro, EmiliaRoad_Text_IsabelRematchDefeated
	msgbox EmiliaRoad_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_Timmy::
	trainerbattle_single TRAINER_TIMMY, EmiliaRoad_Text_TimmyIntro, EmiliaRoad_Text_TimmyDefeated
	msgbox EmiliaRoad_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_Unused::
	end

EmiliaRoad_EventScript_Kaleb::
	trainerbattle_single TRAINER_KALEB, EmiliaRoad_Text_KalebIntro, EmiliaRoad_Text_KalebDefeated
	msgbox EmiliaRoad_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_Joseph::
	trainerbattle_single TRAINER_JOSEPH, EmiliaRoad_Text_JosephIntro, EmiliaRoad_Text_JosephDefeated
	msgbox EmiliaRoad_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_Alyssa::
	trainerbattle_single TRAINER_ALYSSA, EmiliaRoad_Text_AlyssaIntro, EmiliaRoad_Text_AlyssaDefeated
	msgbox EmiliaRoad_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
	end

EmiliaRoad_EventScript_CyclingChallengeEnd::
	lockall
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	call EmiliaRoad_EventScript_CyclingChallengeResults
	releaseall
	end

EmiliaRoad_EventScript_CyclingChallengeResults::
	special FinishCyclingRoadChallenge
	msgbox EmiliaRoad_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
	switch VAR_RESULT
	case 10, EmiliaRoad_EventScript_ChallengeReactionBest
	case 9, EmiliaRoad_EventScript_ChallengeReactionGood
	case 8, EmiliaRoad_EventScript_ChallengeReactionGood
	case 7, EmiliaRoad_EventScript_ChallengeReactionGood
	case 6, EmiliaRoad_EventScript_ChallengeReactionOk
	case 5, EmiliaRoad_EventScript_ChallengeReactionOk
	case 4, EmiliaRoad_EventScript_ChallengeReactionOk
	case 3, EmiliaRoad_EventScript_ChallengeReactionBad
	case 2, EmiliaRoad_EventScript_ChallengeReactionBad
	case 1, EmiliaRoad_EventScript_ChallengeReactionBad
	case 0, EmiliaRoad_EventScript_ChallengeReactionWorst
	end

EmiliaRoad_EventScript_ChallengeReactionBest::
	msgbox EmiliaRoad_Text_ChallengeReactionBest, MSGBOX_DEFAULT
	goto EmiliaRoad_EventScript_EndChallenge
	end

EmiliaRoad_EventScript_ChallengeReactionGood::
	msgbox EmiliaRoad_Text_ChallengeReactionGood, MSGBOX_DEFAULT
	goto EmiliaRoad_EventScript_EndChallenge
	end

EmiliaRoad_EventScript_ChallengeReactionOk::
	msgbox EmiliaRoad_Text_ChallengeReactionOk, MSGBOX_DEFAULT
	goto EmiliaRoad_EventScript_EndChallenge
	end

EmiliaRoad_EventScript_ChallengeReactionBad::
	msgbox EmiliaRoad_Text_ChallengeReactionBad, MSGBOX_DEFAULT
	goto EmiliaRoad_EventScript_EndChallenge
	end

EmiliaRoad_EventScript_ChallengeReactionWorst::
	msgbox EmiliaRoad_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
	goto EmiliaRoad_EventScript_EndChallenge
	end

EmiliaRoad_EventScript_EndChallenge::
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
	savebgm MUS_DUMMY
	fadedefaultbgm
	return

EmiliaRoad_EventScript_RivalTrigger1::
	setvar VAR_0x8008, 1
	goto EmiliaRoad_EventScript_RivalScene
	end

EmiliaRoad_EventScript_RivalTrigger2::
	setvar VAR_0x8008, 2
	goto EmiliaRoad_EventScript_RivalScene
	end

EmiliaRoad_EventScript_RivalTrigger3::
	setvar VAR_0x8008, 3
	goto EmiliaRoad_EventScript_RivalScene
	end

EmiliaRoad_EventScript_RivalScene::
	lockall
	checkplayergender
	call_if_eq VAR_RESULT, MALE, EmiliaRoad_EventScript_PlayMayMusic
	call_if_eq VAR_RESULT, FEMALE, EmiliaRoad_EventScript_PlayBrendanMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	delay 30
	call_if_eq VAR_0x8008, 1, EmiliaRoad_EventScript_RivalApproachPlayer1
	call_if_eq VAR_0x8008, 2, EmiliaRoad_EventScript_RivalApproachPlayer2
	call_if_eq VAR_0x8008, 3, EmiliaRoad_EventScript_RivalApproachPlayer3
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, EmiliaRoad_EventScript_MayBattle
	goto_if_eq VAR_RESULT, FEMALE, EmiliaRoad_EventScript_BrendanBattle
	releaseall
	end

EmiliaRoad_EventScript_PlayMayMusic::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return

EmiliaRoad_EventScript_PlayBrendanMusic::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return

EmiliaRoad_EventScript_MayBattle::
	msgbox EmiliaRoad_Text_MayLetsBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, EmiliaRoad_EventScript_MayBattleTreecko
	case 1, EmiliaRoad_EventScript_MayBattleTorchic
	case 2, EmiliaRoad_EventScript_MayBattleMudkip
	end

EmiliaRoad_EventScript_MayBattleTreecko::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, EmiliaRoad_Text_MayDefeated
	goto EmiliaRoad_EventScript_MayDefeated
	end

EmiliaRoad_EventScript_MayBattleTorchic::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, EmiliaRoad_Text_MayDefeated
	goto EmiliaRoad_EventScript_MayDefeated
	end

EmiliaRoad_EventScript_MayBattleMudkip::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, EmiliaRoad_Text_MayDefeated
	goto EmiliaRoad_EventScript_MayDefeated
	end

EmiliaRoad_EventScript_MayDefeated::
	msgbox EmiliaRoad_Text_MayTakeThis, MSGBOX_DEFAULT
	call EmiliaRoad_EventScript_GiveItemfinder
	msgbox EmiliaRoad_Text_MayExplainItemfinder, MSGBOX_DEFAULT
	goto EmiliaRoad_EventScript_RivalExit
	end

EmiliaRoad_EventScript_BrendanBattle::
	msgbox EmiliaRoad_Text_BrendanLetsBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, EmiliaRoad_EventScript_BrendanBattleTreecko
	case 1, EmiliaRoad_EventScript_BrendanBattleTorchic
	case 2, EmiliaRoad_EventScript_BrendanBattleMudkip
	end

EmiliaRoad_EventScript_BrendanBattleTreecko::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, EmiliaRoad_Text_BrendanDefeated
	goto EmiliaRoad_EventScript_BrendanDefeated
	end

EmiliaRoad_EventScript_BrendanBattleTorchic::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, EmiliaRoad_Text_BrendanDefeated
	goto EmiliaRoad_EventScript_BrendanDefeated
	end

EmiliaRoad_EventScript_BrendanBattleMudkip::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, EmiliaRoad_Text_BrendanDefeated
	goto EmiliaRoad_EventScript_BrendanDefeated
	end

EmiliaRoad_EventScript_BrendanDefeated::
	msgbox EmiliaRoad_Text_BrendanTakeThis, MSGBOX_DEFAULT
	call EmiliaRoad_EventScript_GiveItemfinder
	msgbox EmiliaRoad_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
	goto EmiliaRoad_EventScript_RivalExit
	end

EmiliaRoad_EventScript_GiveItemfinder::
	giveitem ITEM_ITEMFINDER
	return

EmiliaRoad_EventScript_RivalExit::
	closemessage
	call_if_eq VAR_0x8008, 1, EmiliaRoad_EventScript_MoveRival1
	call_if_eq VAR_0x8008, 2, EmiliaRoad_EventScript_MoveRival2
	call_if_eq VAR_0x8008, 3, EmiliaRoad_EventScript_MoveRival3
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
	removeobject LOCALID_RIVAL
	addobject LOCALID_RIVAL_ON_BIKE
	delay 45
	call_if_eq VAR_0x8008, 1, EmiliaRoad_EventScript_RivalExit1
	call_if_eq VAR_0x8008, 2, EmiliaRoad_EventScript_RivalExit2
	call_if_eq VAR_0x8008, 3, EmiliaRoad_EventScript_RivalExit3
	removeobject LOCALID_RIVAL_ON_BIKE
	setvar VAR_EMILIA_ROAD_STATE, 1
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

EmiliaRoad_EventScript_RivalApproachPlayer1::
	applymovement LOCALID_RIVAL, EmiliaRoad_Movement_RivalApproachPlayer1
	waitmovement 0
	return

EmiliaRoad_EventScript_RivalApproachPlayer2::
	applymovement LOCALID_RIVAL, EmiliaRoad_Movement_RivalApproachPlayer2
	waitmovement 0
	return

EmiliaRoad_EventScript_RivalApproachPlayer3::
	applymovement LOCALID_RIVAL, EmiliaRoad_Movement_RivalApproachPlayer3
	waitmovement 0
	return

EmiliaRoad_EventScript_RivalExit1::
	applymovement LOCALID_RIVAL_ON_BIKE, EmiliaRoad_Movement_RivalExit1
	waitmovement 0
	return

EmiliaRoad_EventScript_RivalExit2::
	applymovement LOCALID_RIVAL_ON_BIKE, EmiliaRoad_Movement_RivalExit2
	waitmovement 0
	return

EmiliaRoad_EventScript_RivalExit3::
	applymovement LOCALID_RIVAL_ON_BIKE, EmiliaRoad_Movement_RivalExit3
	waitmovement 0
	return

EmiliaRoad_EventScript_MoveRival1::
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
	return

EmiliaRoad_EventScript_MoveRival2::
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
	return

EmiliaRoad_EventScript_MoveRival3::
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
	return

EmiliaRoad_Movement_RivalApproachPlayer1:
	walk_down
	walk_left
	walk_in_place_faster_down
	step_end

EmiliaRoad_Movement_RivalApproachPlayer2:
	walk_down
	step_end

EmiliaRoad_Movement_RivalApproachPlayer3:
	walk_down
	walk_right
	walk_in_place_faster_down
	step_end

EmiliaRoad_Movement_RivalExit1:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

EmiliaRoad_Movement_RivalExit2:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_down
	step_end

EmiliaRoad_Movement_RivalExit3:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

EmiliaRoad_EventScript_BirchScene1::
	lockall
	setvar VAR_0x8008, 1
	goto EmiliaRoad_EventScript_BirchScene

EmiliaRoad_EventScript_BirchScene2::
	lockall
	setvar VAR_0x8008, 2
	goto EmiliaRoad_EventScript_BirchScene

EmiliaRoad_EventScript_BirchScene3::
	lockall
	setvar VAR_0x8008, 3
	goto EmiliaRoad_EventScript_BirchScene

EmiliaRoad_EventScript_BirchScene4::
	lockall
	setvar VAR_0x8008, 4
	goto EmiliaRoad_EventScript_BirchScene

EmiliaRoad_EventScript_BirchScene::
	addobject LOCALID_BIRCH
	applymovement LOCALID_BIRCH, EmiliaRoad_Movement_BirchEntrance
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
	waitmovement 0
	call_if_eq VAR_0x8008, 1, EmiliaRoad_EventScript_BirchApproachPlayer1
	call_if_eq VAR_0x8008, 2, EmiliaRoad_EventScript_BirchApproachPlayer2
	call_if_eq VAR_0x8008, 3, EmiliaRoad_EventScript_BirchApproachPlayer3
	call_if_eq VAR_0x8008, 4, EmiliaRoad_EventScript_BirchApproachPlayer4
	msgbox EmiliaRoad_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
	closemessage
	delay 20
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 10
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 20
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	msgbox EmiliaRoad_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox EmiliaRoad_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
	msgbox EmiliaRoad_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 1, EmiliaRoad_EventScript_BirchExit1
	call_if_eq VAR_0x8008, 2, EmiliaRoad_EventScript_BirchExit2
	call_if_eq VAR_0x8008, 3, EmiliaRoad_EventScript_BirchExit3
	call_if_eq VAR_0x8008, 4, EmiliaRoad_EventScript_BirchExit4
	removeobject LOCALID_BIRCH
	setvar VAR_REGISTER_BIRCH_STATE, 2
	releaseall
	end

EmiliaRoad_EventScript_BirchApproachPlayer1::
	applymovement LOCALID_BIRCH, EmiliaRoad_Movement_BirchApproachPlayer1
	waitmovement 0
	return

EmiliaRoad_EventScript_BirchApproachPlayer2::
	applymovement LOCALID_BIRCH, EmiliaRoad_Movement_BirchApproachPlayer2
	waitmovement 0
	return

EmiliaRoad_EventScript_BirchApproachPlayer3::
	applymovement LOCALID_BIRCH, EmiliaRoad_Movement_BirchApproachPlayer3
	waitmovement 0
	return

EmiliaRoad_EventScript_BirchApproachPlayer4::
	applymovement LOCALID_BIRCH, EmiliaRoad_Movement_BirchApproachPlayer4
	waitmovement 0
	return

EmiliaRoad_EventScript_BirchExit1::
	applymovement LOCALID_BIRCH, EmiliaRoad_Movement_BirchExit1
	waitmovement 0
	return

EmiliaRoad_EventScript_BirchExit2::
	applymovement LOCALID_BIRCH, EmiliaRoad_Movement_BirchExit2
	waitmovement 0
	return

EmiliaRoad_EventScript_BirchExit3::
	applymovement LOCALID_BIRCH, EmiliaRoad_Movement_BirchExit3
	waitmovement 0
	return

EmiliaRoad_EventScript_BirchExit4::
	applymovement LOCALID_BIRCH, EmiliaRoad_Movement_BirchExit4
	waitmovement 0
	return

EmiliaRoad_Movement_BirchEntrance:
	walk_down
	walk_down
	walk_down
	step_end

EmiliaRoad_Movement_BirchApproachPlayer1:
	walk_down
	walk_left
	walk_left
	walk_down
	step_end

EmiliaRoad_Movement_BirchApproachPlayer2:
	walk_down
	walk_left
	walk_down
	step_end

EmiliaRoad_Movement_BirchApproachPlayer3:
	walk_down
	walk_down
	step_end

EmiliaRoad_Movement_BirchApproachPlayer4:
	walk_down
	walk_right
	walk_down
	step_end

EmiliaRoad_Movement_BirchExit1:
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

EmiliaRoad_Movement_BirchExit2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

EmiliaRoad_Movement_BirchExit3:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

EmiliaRoad_Movement_BirchExit4:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

EmiliaRoad_Text_WeCantTalkAboutAquaActivities:
	.string "TEAM AQUA's activities…\n"
	.string "We can't talk about them yet.$"

EmiliaRoad_Text_KickUpARuckus:
	.string "I want to get going to SLATEPORT and\n"
	.string "kick up a ruckus!$"

EmiliaRoad_Text_MyFirstJobInAqua:
	.string "This is my first job after joining\n"
	.string "TEAM AQUA. It's a little scary.$"

EmiliaRoad_Text_AquaActionsBringSmiles:
	.string "TEAM AQUA's actions should bring\n"
	.string "smiles to people's faces!$"

EmiliaRoad_Text_MayLetsBattle:
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
	.string "While I was searching for other\n"
	.string "POKéMON, my POKéMON grew stronger.\p"
	.string "So…\n"
	.string "How about a little battle?$"

EmiliaRoad_Text_MayDefeated:
	.string "Yikes!\n"
	.string "You're better than I expected!$"

EmiliaRoad_Text_MayTakeThis:
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
	.string "training, too, haven't you?\p"
	.string "I think you deserve a reward!\n"
	.string "This is from me!$"

EmiliaRoad_Text_MayExplainItemfinder:
	.string "MAY: That's an ITEMFINDER.\p"
	.string "Try it out. If there is an item that's\n"
	.string "not visible, it emits a sound.\p"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
	.string "I know it's a little silly coming from\n"
	.string "me, but I think you should train a lot\l"
	.string "harder for the next time.$"

EmiliaRoad_Text_BrendanLetsBattle:
	.string "BRENDAN: Hey, {PLAYER}.\n"
	.string "So this is where you were.\l"
	.string "How's it going?\p"
	.string "Have you been raising your POKéMON?\n"
	.string "I'll check for you.$"

EmiliaRoad_Text_BrendanDefeated:
	.string "Hmm…\n"
	.string "You're pretty good.$"

EmiliaRoad_Text_BrendanTakeThis:
	.string "BRENDAN: {PLAYER}, you've trained\n"
	.string "without me noticing…\p"
	.string "Good enough!\n"
	.string "Here, take this.$"

EmiliaRoad_Text_BrendanExplainItemfinder:
	.string "BRENDAN: That's an ITEMFINDER.\p"
	.string "Use it to root around for items that\n"
	.string "aren't visible.\p"
	.string "If it senses something, it emits\n"
	.string "a sound.\p"
	.string "Anyway, I'm off to look for new\n"
	.string "POKéMON.$"

EmiliaRoad_Text_RideBikeAtFullSpeed:
	.string "Wouldn't it be great to ride a BIKE\n"
	.string "at full speed on CYCLING ROAD?$"

EmiliaRoad_Text_HairStreamsBehindMe:
	.string "How do you like the way my raven-\n"
	.string "colored hair streams behind me?\p"
	.string "I grew my hair out just for that.$"

EmiliaRoad_Text_YouGotBikeFromRydel:
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
	.string "Oh, it's glaringly obvious.\n"
	.string "It says right on your bike…\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
	.string "That name's everywhere.\p"
	.string "You should ride it around all over\n"
	.string "the place--it's good advertising!$"

EmiliaRoad_Text_TwoRoads:
	.string "The two roads, one above, one below…\p"
	.string "A road each for people and POKéMON.\n"
	.string "Perhaps that is right and fair.$"

EmiliaRoad_Text_WalkOnTheLowRoad:
	.string "I don't have a BIKE, so I'll take\n"
	.string "a leisurely walk on the low road.$"

EmiliaRoad_Text_BikeTechniques:
	.string "Learning techniques will make BIKE\n"
	.string "riding even more fun.\p"
	.string "There are some places that you can\n"
	.string "reach only by using a BIKE technique.$"

EmiliaRoad_Text_WhichShouldIChoose:
	.string "Which should I choose?\p"
	.string "Make a beeline for MAUVILLE on\n"
	.string "CYCLING ROAD, or take the low road\l"
	.string "and look for POKéMON?$"

EmiliaRoad_Text_CyclingChallengeResultSummary:
	.string "Number of collisions:\n"
	.string "… … {STR_VAR_1}!\p"
	.string "Total time:\n"
	.string "… … {STR_VAR_2}!$"

EmiliaRoad_Text_ChallengeReactionBest:
	.string "Bravo! Splendid showing!\p"
	.string "Your love of cycling comes from deep\n"
	.string "within your heart.\l"
	.string "You've shaken me to my very soul!$"

EmiliaRoad_Text_ChallengeReactionGood:
	.string "Your technique is remarkable.\p"
	.string "I suggest you speed up a bit while\n"
	.string "still avoiding collisions.$"

EmiliaRoad_Text_ChallengeReactionOk:
	.string "I would consider you a work in\n"
	.string "progress.\p"
	.string "Still, I hope you don't forget the\n"
	.string "sheer pleasure of cycling.$"

EmiliaRoad_Text_ChallengeReactionBad:
	.string "My word… Your cycling skills border\n"
	.string "on terrifying.\p"
	.string "Most certainly, you need much more\n"
	.string "practice riding.$"

EmiliaRoad_Text_ChallengeReactionWorst:
	.string "…I am aghast…\p"
	.string "You're perhaps not cut out for this\n"
	.string "unfortunate cycling business.\p"
	.string "You ought to give serious thought to\n"
	.string "returning that BIKE to RYDEL.$"

EmiliaRoad_Text_RatedForNumberOfCollisions:
	.string "This is CYCLING ROAD.\p"
	.string "If you were to ride from MAUVILLE to\n"
	.string "SLATEPORT on a MACH BIKE, you would\l"
	.string "be rated for the number of collisions\l"
	.string "and your total time.$"

EmiliaRoad_Text_AlwaysAimHigher:
	.string "Regardless of the results, I count on\n"
	.string "seeing more challenges from you.\l"
	.string "Always aim higher!$"

EmiliaRoad_Text_AcroBikesDoNotQualify:
	.string "On this CYCLING ROAD, those riding\n"
	.string "MACH BIKES are rated for their number\l"
	.string "of collisions and their total times.\p"
	.string "ACRO BIKES do not qualify for rating.\n"
	.string "They are easy to turn, so it's not fair.$"

EmiliaRoad_Text_SlateportCitySign:
	.string "ROUTE 110\n"
	.string "{DOWN_ARROW} SLATEPORT CITY$"

EmiliaRoad_Text_CyclingRoadSign:
	.string "SEASIDE CYCLING ROAD$"

EmiliaRoad_Text_AquaWasHere:
	.string "“TEAM AQUA was here!”\p"
	.string "Someone painted that onto this sign,\n"
	.string "but then someone else painted over it.\p"
	.string "“TEAM MAGMA rules!” is what it\n"
	.string "says now.$"

EmiliaRoad_Text_Route103Sign:
	.string "ROUTE 110\n"
	.string "{LEFT_ARROW} ROUTE 103$"

EmiliaRoad_Text_SeasideParkingSign:
	.string "SEASIDE PARKING$"

EmiliaRoad_Text_MauvilleCitySign:
	.string "ROUTE 110\n"
	.string "{UP_ARROW} MAUVILLE CITY$"

EmiliaRoad_Text_TrainerTipsPrlzSleep:
	.string "TRAINER TIPS\p"
	.string "The foe can be made helpless by\n"
	.string "paralyzing it or causing it to sleep.\p"
	.string "It is an important technique for\n"
	.string "POKéMON battles.$"

EmiliaRoad_Text_TrainerTipsRegisterItems:
	.string "TRAINER TIPS\p"
	.string "The items in the BAG can be reorganized\n"
	.string "by pressing SELECT.$"

EmiliaRoad_Text_TrickHouseSign:
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
	.string "to reach the wondrous TRICK HOUSE.”$"

EmiliaRoad_Text_BestRecord:
	.string "THE BEST RECORD TO DATE…\p"
	.string "No. of collisions: {STR_VAR_1}\p"
	.string "Elapsed time: {STR_VAR_2}$"

EmiliaRoad_Text_ThereIsNoRecord:
	.string "THE BEST RECORD TO DATE…\p"
	.string "No one seems to have taken the\n"
	.string "challenge. There is no record…$"

EmiliaRoad_Text_ImagineSeeingYouHere:
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
	.string "Imagine seeing you here!\p"
	.string "And where might my {RIVAL} be?$"

EmiliaRoad_Text_HeardYouInstallMatchCall:
	.string "Oh, I see!\n"
	.string "You two are running separately.\l"
	.string "Well, that's fine.\p"
	.string "Oh, yes, I heard that your POKéNAV\n"
	.string "had the MATCH CALL system installed.\p"
	.string "Well, then, I should register you in\n"
	.string "my POKéNAV as well.\p"
	.string "That way, even when we're apart,\n"
	.string "I can rate your POKéDEX anytime.\p"
	.string "… … … … … …$"

EmiliaRoad_Text_RegisteredBirchInPokenav:
	.string "Registered PROF. BIRCH\n"
	.string "in the POKéNAV.$"

EmiliaRoad_Text_KeepAnEyeOutForRival:
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
	.string "Please keep an eye out for my {RIVAL}.\n"
	.string "… … … … … …\p"
	.string "Well, I had better get going.\n"
	.string "See you again, {PLAYER}{KUN}!$"

