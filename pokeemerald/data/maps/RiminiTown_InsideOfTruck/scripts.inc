RiminiTown_InsideOfTruck_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, RiminiTown_InsideOfTruck_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, RiminiTown_InsideOfTruck_OnResume
	.byte 0

RiminiTown_InsideOfTruck_OnLoad:
	setmetatile 4, 1, METATILE_RiminiTown_InsideOfTruck_ExitLight_Top, FALSE
	setmetatile 4, 2, METATILE_RiminiTown_InsideOfTruck_ExitLight_Mid, FALSE
	setmetatile 4, 3, METATILE_RiminiTown_InsideOfTruck_ExitLight_Bottom, FALSE
	end

RiminiTown_InsideOfTruck_OnResume:
	setstepcallback STEP_CB_TRUCK
	end

RiminiTown_InsideOfTruck_EventScript_SetIntroFlags::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setrespawn HEAL_LOCATION_RIMINI_TOWN_CASA_GAS_2F
	setvar VAR_RIMINI_INTRO_STATE, 1
	setflag FLAG_HIDE_RIMINI_TOWN_CASA_STE_MOM
	setflag FLAG_HIDE_RIMINI_TOWN_CASA_STE_TRUCK
	setflag FLAG_HIDE_RIMINI_TOWN_CASA_GAS_RIVAL_MOM
	setflag FLAG_HIDE_RIMINI_TOWN_CASA_GAS_RIVAL_SIBLING
	setflag FLAG_HIDE_RIMINI_TOWN_CASA_GAS_2F_POKE_BALL
	setvar VAR_RIMINI_HOUSES_STATE_BRENDAN, 1
	setdynamicwarp MAP_RIMINI_TOWN, 9, 23
	releaseall
	end

