FieryPath_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FieryPath_OnTransition
	.byte 0

FieryPath_OnTransition:
	call_if_unset FLAG_LANDMARK_FIERY_PATH, FieryPath_EventScript_MoveScottToEmilia
	setflag FLAG_LANDMARK_FIERY_PATH
	end

FieryPath_EventScript_MoveScottToEmilia::
	setflag FLAG_HIDE_RIMINI_MARE_SCOTT
	clearflag FLAG_HIDE_EMILIA_ROAD_BATTLE_TENT_SCOTT
	return

