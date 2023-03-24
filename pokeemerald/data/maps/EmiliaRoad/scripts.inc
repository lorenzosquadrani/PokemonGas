EmiliaRoad_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EmiliaRoad_OnTransition
	.byte 0

EmiliaRoad_OnTransition:
	setflag FLAG_VISITED_EMILIA_ROAD
	setvar VAR_CONTEST_HALL_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	end

EmiliaRoad_EventScript_ExpertM::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, EmiliaRoad_EventScript_ExpertMNormal
	msgbox EmiliaRoad_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
	release
	end

EmiliaRoad_EventScript_ExpertMNormal::
	msgbox EmiliaRoad_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
	release
	end

EmiliaRoad_EventScript_Girl::
	msgbox EmiliaRoad_Text_MyPreciousAzurill, MSGBOX_NPC
	end

EmiliaRoad_EventScript_Gentleman::
	msgbox EmiliaRoad_Text_HaveYouChallengedFlannery, MSGBOX_NPC
	end

EmiliaRoad_EventScript_Azurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox EmiliaRoad_Text_Azurill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

EmiliaRoad_EventScript_BattleTentSign::
	msgbox EmiliaRoad_Text_BattleTentSign, MSGBOX_SIGN
	end

EmiliaRoad_EventScript_TownSign::
	msgbox EmiliaRoad_Text_TownSign, MSGBOX_SIGN
	end

EmiliaRoad_EventScript_MoveTutorSign::
	msgbox EmiliaRoad_Text_MoveTutorSign, MSGBOX_SIGN
	end

EmiliaRoad_Text_ShadyCharactersCozmosHome:
	.string "Something's happening,\n"
	.string "and I don't like it!\p"
	.string "I've seen shady characters wandering\n"
	.string "in and out of PROF. COZMO's home…$"

EmiliaRoad_Text_RegionKnownForMeteors:
	.string "This region's been known for meteors\n"
	.string "since the olden days.\p"
	.string "They say METEOR FALLS was gouged out\n"
	.string "by a falling meteorite long ago.$"

EmiliaRoad_Text_MyPreciousAzurill:
	.string "See! Take a look!\n"
	.string "This is my precious AZURILL!\p"
	.string "It's slick and smooth and plushy, too!$"

EmiliaRoad_Text_Azurill:
	.string "AZURILL: Rooreelooo.$"

EmiliaRoad_Text_HaveYouChallengedFlannery:
	.string "Have you already challenged FLANNERY,\n"
	.string "the LEADER of SANTA GYM?\p"
	.string "The girl's grandfather was famous.\n"
	.string "He was one of the ELITE FOUR in the\l"
	.string "POKéMON LEAGUE at one point.\p"
	.string "It wouldn't surprise me to see FLANNERY\n"
	.string "become a great TRAINER in her own\l"
	.string "right.$"

EmiliaRoad_Text_BattleTentSign:
	.string "BATTLE TENT EMILIA SITE\n"
	.string "“May the Greatest Teams Gather!”$"

EmiliaRoad_Text_TownSign:
	.string "EMILIA TOWN\n"
	.string "“A farm community with small gardens.”$"

EmiliaRoad_Text_MoveTutorSign:
	.string "MOVE TUTOR'S HOUSE\n"
	.string "“New moves taught to POKéMON.”$"

