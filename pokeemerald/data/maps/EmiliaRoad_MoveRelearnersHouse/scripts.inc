.set LOCALID_MOVE_RELEARNER, 1

EmiliaRoad_MoveRelearnersHouse_MapScripts::
	.byte 0

EmiliaRoad_MoveRelearnersHouse_EventScript_MoveRelearner::
	lockall
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, EmiliaRoad_MoveRelearnersHouse_EventScript_AskTeachMove
	msgbox EmiliaRoad_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto EmiliaRoad_MoveRelearnersHouse_EventScript_AskTeachMove
	end

EmiliaRoad_MoveRelearnersHouse_EventScript_AskTeachMove::
	checkitem ITEM_HEART_SCALE
	goto_if_eq VAR_RESULT, FALSE, EmiliaRoad_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	msgbox EmiliaRoad_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, EmiliaRoad_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto EmiliaRoad_MoveRelearnersHouse_EventScript_ChooseMon
	end

EmiliaRoad_MoveRelearnersHouse_EventScript_ChooseMon::
	msgbox EmiliaRoad_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_TEMP_PAR_4, PARTY_NOTHING_CHOSEN, EmiliaRoad_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, EmiliaRoad_MoveRelearnersHouse_EventScript_CantTeachEgg
	goto_if_eq VAR_TEMP_PAR_5, 0, EmiliaRoad_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
	goto EmiliaRoad_MoveRelearnersHouse_EventScript_ChooseMove
	end

EmiliaRoad_MoveRelearnersHouse_EventScript_ChooseMove::
	msgbox EmiliaRoad_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_TEMP_PAR_4, 0, EmiliaRoad_MoveRelearnersHouse_EventScript_ChooseMon
	msgbox EmiliaRoad_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	goto EmiliaRoad_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	end

EmiliaRoad_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
	msgbox EmiliaRoad_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto EmiliaRoad_MoveRelearnersHouse_EventScript_ChooseMon
	end

EmiliaRoad_MoveRelearnersHouse_EventScript_CantTeachEgg::
	msgbox EmiliaRoad_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto EmiliaRoad_MoveRelearnersHouse_EventScript_ChooseMon
	end

EmiliaRoad_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
	msgbox EmiliaRoad_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
	releaseall
	end

EmiliaRoad_MoveRelearnersHouse_Text_ImTheMoveTutor:
	.string "I'm the MOVE TUTOR.\p"
	.string "I know all the moves that POKéMON\n"
	.string "learn--every one of them--and I can\l"
	.string "teach POKéMON those moves.\p"
	.string "I can teach a move to a POKéMON\n"
	.string "of yours if you'd like.\p"
	.string "I'll do it for a HEART SCALE.\n"
	.string "I'm collecting those now.$"

EmiliaRoad_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
	.string "Oh! That's it! That's an honest to\n"
	.string "goodness HEART SCALE!\p"
	.string "Let me guess, you want me to teach\n"
	.string "a move?$"

EmiliaRoad_MoveRelearnersHouse_Text_TutorWhichMon:
	.string "Which POKéMON needs tutoring?$"

EmiliaRoad_MoveRelearnersHouse_Text_TeachWhichMove:
	.string "Which move should I teach?$"

EmiliaRoad_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that POKéMON.$"

EmiliaRoad_MoveRelearnersHouse_Text_HandedOverHeartScale:
	.string "{PLAYER} handed over one HEART SCALE\n"
	.string "in exchange.$"

EmiliaRoad_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
	.string "If your POKéMON need to learn a move,\n"
	.string "come back with a HEART SCALE.$"

EmiliaRoad_MoveRelearnersHouse_Text_CantTeachEgg:
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an EGG.$"

