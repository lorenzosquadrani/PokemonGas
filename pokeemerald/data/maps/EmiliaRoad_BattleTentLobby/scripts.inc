.set LOCALID_ATTENDANT, 1

EmiliaRoad_BattleTentLobby_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EmiliaRoad_BattleTentLobby_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EmiliaRoad_BattleTentLobby_OnWarp
	.byte 0

EmiliaRoad_BattleTentLobby_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EmiliaRoad_BattleTentLobby_EventScript_TurnPlayerNorth
	.2byte 0

EmiliaRoad_BattleTentLobby_EventScript_TurnPlayerNorth::
	setvar VAR_TEMP_1, 1
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EmiliaRoad_BattleTentLobby_OnFrame:
	map_script_2 VAR_TEMP_0, 0, EmiliaRoad_BattleTentLobby_EventScript_GetChallengeStatus
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_SAVING, EmiliaRoad_BattleTentLobby_EventScript_QuitWithoutSaving
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_PAUSED, EmiliaRoad_BattleTentLobby_EventScript_ResumeChallenge
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_WON, EmiliaRoad_BattleTentLobby_EventScript_WonChallenge
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_LOST, EmiliaRoad_BattleTentLobby_EventScript_LostChallenge
	.2byte 0

EmiliaRoad_BattleTentLobby_EventScript_GetChallengeStatus::
	frontier_getstatus
	end

EmiliaRoad_BattleTentLobby_EventScript_QuitWithoutSaving::
	lockall
	msgbox EmiliaRoad_BattleTentLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
	closemessage
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_0, 255
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
	releaseall
	end

EmiliaRoad_BattleTentLobby_EventScript_WonChallenge::
	lockall
	msgbox EmiliaRoad_BattleTentLobby_Text_BeatThreeTrainers, MSGBOX_DEFAULT
	message EmiliaRoad_BattleTentLobby_Text_WaitWhileSaveGame
	waitmessage
	emiliatent_setrandomprize
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
	emiliatent_save 0
	playse SE_SAVE
	waitse

EmiliaRoad_BattleTentLobby_EventScript_GivePrize::
	msgbox EmiliaRoad_BattleTentLobby_Text_PresentYouWithPrize, MSGBOX_DEFAULT
	emiliatent_giveprize
	switch VAR_RESULT
	case FALSE, EmiliaRoad_BattleTentLobby_EventScript_NoRoomForPrize
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	message EmiliaRoad_BattleTentLobby_Text_ReceivedPrize
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	msgbox EmiliaRoad_BattleTentLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 255
	releaseall
	end

EmiliaRoad_BattleTentLobby_EventScript_NoRoomForPrize::
	msgbox EmiliaRoad_BattleTentLobby_Text_BagFullReturnForPrize, MSGBOX_DEFAULT
	waitmessage
	closemessage
	setvar VAR_TEMP_0, 255
	releaseall
	end

EmiliaRoad_BattleTentLobby_EventScript_PrizeWaiting::
	lockall
	msgbox EmiliaRoad_BattleTentLobby_Text_BeatThreeTrainers, MSGBOX_DEFAULT
	goto EmiliaRoad_BattleTentLobby_EventScript_GivePrize
	end

EmiliaRoad_BattleTentLobby_EventScript_LostChallenge::
	lockall
	message EmiliaRoad_BattleTentLobby_Text_ThankYouWaitWhileSaving
	waitmessage
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
	emiliatent_save 0
	playse SE_SAVE
	waitse
	msgbox EmiliaRoad_BattleTentLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 255
	releaseall
	end

EmiliaRoad_BattleTentLobby_EventScript_ResumeChallenge::
	lockall
	message EmiliaRoad_BattleTentLobby_Text_LookingForwardToArrival
	waitmessage
	emiliatent_save CHALLENGE_STATUS_SAVING
	playse SE_SAVE
	waitse
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	setvar VAR_TEMP_0, 255
	goto EmiliaRoad_BattleTentLobby_EventScript_EnterChallenge

EmiliaRoad_BattleTentLobby_EventScript_Attendant::
	lock
	faceplayer
	emiliatent_getprize
	goto_if_ne VAR_RESULT, ITEM_NONE, EmiliaRoad_BattleTentLobby_EventScript_PrizeWaiting
	special SavePlayerParty
	msgbox EmiliaRoad_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
EmiliaRoad_BattleTentLobby_EventScript_AskEnterChallenge::
	message EmiliaRoad_BattleTentLobby_Text_TakeChallenge
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, EmiliaRoad_BattleTentLobby_EventScript_TryEnterChallenge
	case 1, EmiliaRoad_BattleTentLobby_EventScript_ExplainChallenge
	case 2, EmiliaRoad_BattleTentLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, EmiliaRoad_BattleTentLobby_EventScript_CancelChallenge

EmiliaRoad_BattleTentLobby_EventScript_TryEnterChallenge::
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	setvar VAR_RESULT, 2
	frontier_checkineligible
	goto_if_eq VAR_TEMP_PAR_4, TRUE, EmiliaRoad_BattleTentLobby_EventScript_NotEnoughValidMons
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
	msgbox EmiliaRoad_BattleTentLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	setvar VAR_TEMP_PAR_4, 2
	setvar VAR_TEMP_PAR_5, FRONTIER_PARTY_SIZE
	special ChoosePartyForBattleFrontier
	waitstate
	goto_if_eq VAR_RESULT, 0, EmiliaRoad_BattleTentLobby_EventScript_LoadPartyCancelChallenge
	msgbox EmiliaRoad_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, EmiliaRoad_BattleTentLobby_EventScript_LoadPartyCancelChallenge
	case YES, EmiliaRoad_BattleTentLobby_EventScript_SaveBeforeChallenge
	case MULTI_B_PRESSED, EmiliaRoad_BattleTentLobby_EventScript_LoadPartyCancelChallenge

EmiliaRoad_BattleTentLobby_EventScript_SaveBeforeChallenge::
	setvar VAR_TEMP_0, 0
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	emiliatent_init
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_0, 255
	goto_if_eq VAR_RESULT, 0, EmiliaRoad_BattleTentLobby_EventScript_CancelChallengeSaveFailed
EmiliaRoad_BattleTentLobby_EventScript_EnterChallenge::
	special SavePlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	msgbox EmiliaRoad_BattleTentLobby_Text_GuideYouToBattleTent, MSGBOX_DEFAULT
	closemessage
	call EmiliaRoad_BattleTentLobby_EventScript_WalkToDoor
	warp MAP_EMILIA_ROAD_BATTLE_TENT_CORRIDOR, 2, 7
	setvar VAR_TEMP_0, 0
	waitstate
	end

EmiliaRoad_BattleTentLobby_EventScript_ExplainChallenge::
	msgbox EmiliaRoad_BattleTentLobby_Text_ExplainEmiliaTent, MSGBOX_DEFAULT
	goto EmiliaRoad_BattleTentLobby_EventScript_AskEnterChallenge

EmiliaRoad_BattleTentLobby_EventScript_NotEnoughValidMons::
	switch VAR_RESULT
	case FRONTIER_LVL_50, EmiliaRoad_BattleTentLobby_EventScript_NotEnoughValidMonsLv50
	case FRONTIER_LVL_OPEN, EmiliaRoad_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen
EmiliaRoad_BattleTentLobby_EventScript_NotEnoughValidMonsLv50::
	msgbox EmiliaRoad_BattleTentLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
	goto EmiliaRoad_BattleTentLobby_EventScript_EndCancelChallenge

EmiliaRoad_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen::
	msgbox EmiliaRoad_BattleTentLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
	goto EmiliaRoad_BattleTentLobby_EventScript_EndCancelChallenge

EmiliaRoad_BattleTentLobby_EventScript_CancelChallengeSaveFailed::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	goto EmiliaRoad_BattleTentLobby_EventScript_CancelChallenge

EmiliaRoad_BattleTentLobby_EventScript_LoadPartyCancelChallenge::
	special LoadPlayerParty
EmiliaRoad_BattleTentLobby_EventScript_CancelChallenge::
	msgbox EmiliaRoad_BattleTentLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
EmiliaRoad_BattleTentLobby_EventScript_EndCancelChallenge::
	release
	end

EmiliaRoad_BattleTentLobby_EventScript_WalkToDoor::
	applymovement LOCALID_ATTENDANT, EmiliaRoad_BattleTentLobby_Movement_AttendantWalkToDoor
	applymovement OBJ_EVENT_ID_PLAYER, EmiliaRoad_BattleTentLobby_Movement_PlayerWalkToDoor
	waitmovement 0
	opendoor 6, 1
	waitdooranim
	applymovement LOCALID_ATTENDANT, EmiliaRoad_BattleTentLobby_Movement_AttendantEnterDoor
	applymovement OBJ_EVENT_ID_PLAYER, EmiliaRoad_BattleTentLobby_Movement_PlayerEnterDoor
	waitmovement 0
	closedoor 6, 1
	waitdooranim
	return

EmiliaRoad_BattleTentLobby_Movement_AttendantWalkToDoor:
	walk_up
	walk_up
	walk_up
	step_end

EmiliaRoad_BattleTentLobby_Movement_AttendantEnterDoor:
	walk_up
	set_invisible
	step_end

EmiliaRoad_BattleTentLobby_Movement_PlayerWalkToDoor:
	walk_up
	walk_up
	walk_up
	step_end

EmiliaRoad_BattleTentLobby_Movement_PlayerEnterDoor:
	walk_up
	walk_up
	set_invisible
	step_end

EmiliaRoad_BattleTentLobby_EventScript_Hiker::
	msgbox EmiliaRoad_BattleTentLobby_Text_CameToCampOut, MSGBOX_NPC
	end

EmiliaRoad_BattleTentLobby_EventScript_LittleBoy::
	msgbox EmiliaRoad_BattleTentLobby_Text_MakeThinkImJustKid, MSGBOX_NPC
	end

EmiliaRoad_BattleTentLobby_EventScript_Lass::
	msgbox EmiliaRoad_BattleTentLobby_Text_EmiliaTentMyFavorite, MSGBOX_NPC
	end

EmiliaRoad_BattleTentLobby_EventScript_Scott::
	lock
	faceplayer
	goto_if_set FLAG_MET_SCOTT_IN_EMILIA, EmiliaRoad_BattleTentLobby_EventScript_ScottAlreadySpokenTo
	msgbox EmiliaRoad_BattleTentLobby_Text_ScottLookingForSomeone, MSGBOX_DEFAULT
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_IN_EMILIA
	release
	end

EmiliaRoad_BattleTentLobby_EventScript_ScottAlreadySpokenTo::
	msgbox EmiliaRoad_BattleTentLobby_Text_ScottMakeChallenge, MSGBOX_DEFAULT
	release
	end

EmiliaRoad_BattleTentLobby_EventScript_RulesBoard::
	lockall
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
	goto EmiliaRoad_BattleTentLobby_EventScript_ReadRulesBoard
	end

EmiliaRoad_BattleTentLobby_EventScript_ReadRulesBoard::
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
	waitmessage
	multichoice 17, 0, MULTI_EMILIA_TENT_RULES, FALSE
	switch VAR_RESULT
	case 0, EmiliaRoad_BattleTentLobby_EventScript_RulesLevel
	case 1, EmiliaRoad_BattleTentLobby_EventScript_RulesBattle
	case 2, EmiliaRoad_BattleTentLobby_EventScript_RulesMind
	case 3, EmiliaRoad_BattleTentLobby_EventScript_RulesSkill
	case 4, EmiliaRoad_BattleTentLobby_EventScript_RulesBody
	case 5, EmiliaRoad_BattleTentLobby_EventScript_ExitRules
	case MULTI_B_PRESSED, EmiliaRoad_BattleTentLobby_EventScript_ExitRules
	end

EmiliaRoad_BattleTentLobby_EventScript_RulesLevel::
	msgbox BattleTentLobby_Text_ExplainLevelRules, MSGBOX_DEFAULT
	goto EmiliaRoad_BattleTentLobby_EventScript_ReadRulesBoard
	end

EmiliaRoad_BattleTentLobby_EventScript_RulesBattle::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
	goto EmiliaRoad_BattleTentLobby_EventScript_ReadRulesBoard
	end

EmiliaRoad_BattleTentLobby_EventScript_RulesMind::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
	goto EmiliaRoad_BattleTentLobby_EventScript_ReadRulesBoard
	end

EmiliaRoad_BattleTentLobby_EventScript_RulesSkill::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
	goto EmiliaRoad_BattleTentLobby_EventScript_ReadRulesBoard
	end

EmiliaRoad_BattleTentLobby_EventScript_RulesBody::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
	goto EmiliaRoad_BattleTentLobby_EventScript_ReadRulesBoard
	end

EmiliaRoad_BattleTentLobby_EventScript_ExitRules::
	releaseall
	end

EmiliaRoad_BattleTentLobby_Text_MakeThinkImJustKid:
	.string "Fufufufufu.\p"
	.string "I'm going to make everyone think\n"
	.string "I'm just a kid and let them play down.\p"
	.string "Then, I'll shock them and grab\n"
	.string "the title!$"

EmiliaRoad_BattleTentLobby_Text_EmiliaTentMyFavorite:
	.string "You know how BATTLE TENTS offer\n"
	.string "different events in different towns?\p"
	.string "My favorite is definitely the BATTLE\n"
	.string "TENT in EMILIA TOWN.\p"
	.string "I think it's fantastic how TRAINERS\n"
	.string "try to win with all their faith in\l"
	.string "their POKéMON.$"

EmiliaRoad_BattleTentLobby_Text_CameToCampOut:
	.string "I heard something about some tent,\n"
	.string "so I came to camp out.\p"
	.string "I didn't know that tents these days\n"
	.string "are so luxurious!\p"
	.string "Since I'm here, I may as well try\n"
	.string "my hand at battling!$"

EmiliaRoad_BattleTentLobby_Text_ScottLookingForSomeone:
	.string "SCOTT: Hi, {PLAYER}{KUN}!\n"
	.string "So you came out to this BATTLE TENT!\p"
	.string "The people in these parts tend to be\n"
	.string "easygoing and laid-back.\p"
	.string "But, you see, what I'm looking for are\n"
	.string "people with…\p"
	.string "How should I say this?\p"
	.string "Someone bursting with the desire\n"
	.string "and the drive to win.\p"
	.string "If there were a TRAINER like that,\n"
	.string "I'd immediately…\p"
	.string "Whoops! Never mind!\n"
	.string "Keep working at it!$"

EmiliaRoad_BattleTentLobby_Text_ScottMakeChallenge:
	.string "SCOTT: Instead of wasting your\n"
	.string "time with the likes of me, why not\l"
	.string "make a challenge?$"

