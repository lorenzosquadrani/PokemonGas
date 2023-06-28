DIFA_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DIFA_OnTransition
	.byte 0

DIFA_OnTransition:
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

DIFA_EventScript_VictoryRoadSign::
	msgbox DIFA_Text_EnteringVictoryRoad, MSGBOX_SIGN
	end

DIFA_EventScript_CitySign::
	msgbox DIFA_Text_CitySign, MSGBOX_SIGN
	end

DIFA_EventScript_PokemonLeagueSign::
	msgbox DIFA_Text_EnteringPokemonLeague, MSGBOX_SIGN
	end

DIFA_EventScript_SetVisitedDIFA::
	setflag FLAG_VISITED_DIFA
	setvar VAR_TEMP_1, 1
	end

DIFA_Text_EnteringVictoryRoad:
	.string "ENTERING VICTORY ROAD$"

DIFA_Text_EnteringPokemonLeague:
	.string "ENTERING POKéMON LEAGUE\n"
	.string "CENTER GATE$"

DIFA_Text_CitySign:
	.string "EVER GRANDE CITY\p"
	.string "“The paradise of flowers, the sea,\n"
	.string "and POKéMON.”$"

