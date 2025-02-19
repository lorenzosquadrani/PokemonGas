.set LOCALID_CHALLENGE_BIKER, 21

EmiliaRoad_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, EmiliaRoad_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, EmiliaRoad_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EmiliaRoad_OnFrame
	.byte 0

EmiliaRoad_OnResume:
	special UpdateCyclingRoadState
	end

EmiliaRoad_OnTransition:
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
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, EmiliaRoad_EventScript_PlayerNotRidingBike
	release
	end

EmiliaRoad_EventScript_PlayerNotRidingBike::
	msgbox EmiliaRoad_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
	release
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
	giveitem ITEM_RARE_CANDY, 10
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

EmiliaRoad_Text_BestRecord:
	.string "Il record ad oggi è…\p"
	.string "Num di collisioni: {STR_VAR_1}\p"
	.string "Tempo: {STR_VAR_2}$"

EmiliaRoad_Text_ThereIsNoRecord:
	.string "Il record ad oggi è…\p"
	.string "Boh.$"

EmiliaRoad_Text_CyclingChallengeResultSummary:
	.string "Numero di collisioni:\n"
	.string "… … {STR_VAR_1}!\p"
	.string "Tempo totale:\n"
	.string "… … {STR_VAR_2}!$"

EmiliaRoad_Text_ChallengeReactionBest:
	.string "OH YES BOY!\n"
	.string "Questo si chiama skatare.\p"
	.string "Ecco il tuo premio.$"

EmiliaRoad_Text_ChallengeReactionGood:
	.string "Non male, ma non mi convinci.$"

EmiliaRoad_Text_ChallengeReactionOk:
	.string "Puoi fare di meglio.$"

EmiliaRoad_Text_ChallengeReactionBad:
	.string "Che schifo.$"

EmiliaRoad_Text_ChallengeReactionWorst:
	.string "…Sono scioccato…\p"
	.string "Forse dovresti restituire\n"
	.string "quel penny board.$"

EmiliaRoad_EventScript_PistaSkateSign::
	msgbox EmiliaRoad_EventScript_PistaSkateSign_Text_0, MSGBOX_SIGN
	end


EmiliaRoad_EventScript_EmiliaRoadSign::
	msgbox EmiliaRoad_EventScript_EmiliaRoadSign_Text_0, MSGBOX_SIGN
	end


EmiliaRoad_EventScript_WeirdCaveSign::
	msgbox EmiliaRoad_EventScript_WeirdCaveSign_Text_0, MSGBOX_SIGN
	end


EmiliaRoad_EventScript_PistaSkateSign_Text_0:
	.string "Pista da Skate Rimini-Bologna$"

EmiliaRoad_EventScript_EmiliaRoadSign_Text_0:
	.string "VIA EMILIA$"

EmiliaRoad_EventScript_WeirdCaveSign_Text_0:
	.string "Una strana grotta.$"

EmiliaRoad_Text_RatedForNumberOfCollisions::
	.string "Ehi, amico! Benvenuto nella nuova pista\n"
	.string "da skate.\p"
	.string "Se skati da Bologna a Rimini, verrai\n"
	.string "valutato per il numero di collisioni e il\l"
	.string "tempo totale.\p"
	.string "C'è un bel premio per il migliore!$"
