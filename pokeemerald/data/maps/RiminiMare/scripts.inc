.set LOCALID_TWIN, 2

RiminiMare_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RiminiMare_OnTransition
	.byte 0

RiminiMare_OnTransition:
	setflag FLAG_VISITED_RIMINI_MARE
	setvar VAR_CONTEST_HALL_STATE, 0
	end

RiminiMare_EventScript_Twin::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, RiminiMare_EventScript_TwinTunnelOpen
	msgbox RiminiMare_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RiminiMare_EventScript_TwinTunnelOpen::
	msgbox RiminiMare_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RiminiMare_EventScript_Man::
	msgbox RiminiMare_Text_AirCleanHere, MSGBOX_NPC
	end

RiminiMare_EventScript_Camper::
	msgbox RiminiMare_Text_MakeBattleTentDebut, MSGBOX_NPC
	end

RiminiMare_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, RiminiMare_EventScript_BoyTunnelOpen
	msgbox RiminiMare_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
	release
	end

RiminiMare_EventScript_BoyTunnelOpen::
	msgbox RiminiMare_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
	release
	end

RiminiMare_EventScript_TownSign::
	msgbox RiminiMare_Text_TownSign, MSGBOX_SIGN
	end

RiminiMare_EventScript_WandasHouseSign::
	msgbox RiminiMare_Text_WandasHouse, MSGBOX_SIGN
	end

RiminiMare_EventScript_BattleTentSign::
	msgbox RiminiMare_Text_BattleTentSign, MSGBOX_SIGN
	end

RiminiMare_EventScript_RusturfTunnelSign::
	msgbox RiminiMare_Text_RusturfTunnelSign, MSGBOX_SIGN
	end

RiminiMare_Text_ManTryingToDigTunnel:
	.string "My papa told me.\p"
	.string "He says this tunnel is full of\n"
	.string "timid POKéMON.\p"
	.string "They get all scared of loud noise and\n"
	.string "make a big uproar.\p"
	.string "So they had to stop the big tunnel\n"
	.string "project.\p"
	.string "But there's one man. He's trying to dig\n"
	.string "the tunnel by himself!$"

RiminiMare_Text_ManDugTunnelForLove:
	.string "There was a man who dug a tunnel for\n"
	.string "a lady he loved.\p"
	.string "I don't really get it, but hey!$"

RiminiMare_Text_AirCleanHere:
	.string "The way the winds blow, volcanic ash\n"
	.string "is never blown in this direction.\p"
	.string "The air is clean and delicious here.\n"
	.string "Living here should do wonders for even\l"
	.string "frail and sickly people.$"

RiminiMare_Text_MakeBattleTentDebut:
	.string "My POKéMON and I, we've been riding\n"
	.string "a hot winning streak.\p"
	.string "So I decided to make my BATTLE TENT\n"
	.string "debut in this town.$"

RiminiMare_Text_GuyTryingToBustThroughCave:
	.string "Did you see the cave next to the\n"
	.string "POKéMON MART?\p"
	.string "There's a guy in there who's trying to\n"
	.string "bust up boulders so he can bust out\l"
	.string "through to the other side.\p"
	.string "It'd be great if we could go through…\n"
	.string "It'll make it easy to visit RUSTBORO.$"

RiminiMare_Text_EasyToGetToRustboroNow:
	.string "That cave next to the POKéMON MART\n"
	.string "is now a tunnel to the other side.\p"
	.string "It's great--it's easy to go shop for\n"
	.string "new DEVON products in RUSTBORO now.$"

RiminiMare_Text_TownSign:
	.string "RIMINIMARE TOWN\p"
	.string "“The windswept highlands with the\n"
	.string "sweet fragrance of grass.”$"

RiminiMare_Text_WandasHouse:
	.string "WANDA'S HOUSE$"

RiminiMare_Text_BattleTentSign:
	.string "BATTLE TENT RIMINIMARE SITE\n"
	.string "“Feast Your Eyes on Battles!”$"

RiminiMare_Text_RusturfTunnelSign:
	.string "RUSTURF TUNNEL\n"
	.string "“Linking RUSTBORO and RIMINIMARE\p"
	.string "“The tunnel project has been\n"
	.string "canceled.”$"

