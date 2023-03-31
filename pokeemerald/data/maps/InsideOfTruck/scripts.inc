InsideOfTruck_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
	.byte 0

InsideOfTruck_OnLoad:
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	end

InsideOfTruck_OnResume:
	setstepcallback STEP_CB_TRUCK
	end

InsideOfTruck_EventScript_SetIntroFlags::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
	end

InsideOfTruck_EventScript_SetIntroFlagsMale::
	setrespawn HEAL_LOCATION_RIMINI_TOWN_BRENDANS_HOUSE_2F
	setvar VAR_RIMINI_INTRO_STATE, 1
	setflag FLAG_HIDE_RIMINI_TOWN_MAYS_HOUSE_MOM
	setflag FLAG_HIDE_RIMINI_TOWN_MAYS_HOUSE_TRUCK
	setflag FLAG_HIDE_RIMINI_TOWN_BRENDANS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_RIMINI_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_RIMINI_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	setvar VAR_RIMINI_HOUSES_STATE_BRENDAN, 1
	setdynamicwarp MAP_RIMINI_TOWN, 10, 23
	releaseall
	end
