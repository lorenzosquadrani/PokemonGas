RiminiMare_FriendshipRatersHouse_MapScripts::
	.byte 0

RiminiMare_FriendshipRatersHouse_EventScript_FriendshipRater::
	lock
	faceplayer
	msgbox RiminiMare_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	switch VAR_RESULT
	case FRIENDSHIP_NONE, RiminiMare_FriendshipRatersHouse_EventScript_DetestsYou
	case FRIENDSHIP_1_TO_49, RiminiMare_FriendshipRatersHouse_EventScript_VeryWary
	case FRIENDSHIP_50_TO_99, RiminiMare_FriendshipRatersHouse_EventScript_NotUsedToYou
	case FRIENDSHIP_100_TO_149, RiminiMare_FriendshipRatersHouse_EventScript_GettingUsedToYou
	case FRIENDSHIP_150_TO_199, RiminiMare_FriendshipRatersHouse_EventScript_LikesYouQuiteALot
	case FRIENDSHIP_200_TO_254, RiminiMare_FriendshipRatersHouse_EventScript_VeryHappy
	case FRIENDSHIP_MAX, RiminiMare_FriendshipRatersHouse_EventScript_AdoresYou
	release
	end

RiminiMare_FriendshipRatersHouse_EventScript_DetestsYou::
	msgbox RiminiMare_FriendshipRatersHouse_Text_DetestsYou, MSGBOX_DEFAULT
	release
	end

RiminiMare_FriendshipRatersHouse_EventScript_VeryWary::
	msgbox RiminiMare_FriendshipRatersHouse_Text_VeryWary, MSGBOX_DEFAULT
	release
	end

RiminiMare_FriendshipRatersHouse_EventScript_NotUsedToYou::
	msgbox RiminiMare_FriendshipRatersHouse_Text_NotUsedToYou, MSGBOX_DEFAULT
	release
	end

RiminiMare_FriendshipRatersHouse_EventScript_GettingUsedToYou::
	msgbox RiminiMare_FriendshipRatersHouse_Text_GettingUsedToYou, MSGBOX_DEFAULT
	release
	end

RiminiMare_FriendshipRatersHouse_EventScript_LikesYouQuiteALot::
	msgbox RiminiMare_FriendshipRatersHouse_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
	release
	end

RiminiMare_FriendshipRatersHouse_EventScript_VeryHappy::
	msgbox RiminiMare_FriendshipRatersHouse_Text_VeryHappy, MSGBOX_DEFAULT
	release
	end

RiminiMare_FriendshipRatersHouse_EventScript_AdoresYou::
	msgbox RiminiMare_FriendshipRatersHouse_Text_AdoresYou, MSGBOX_DEFAULT
	release
	end

RiminiMare_FriendshipRatersHouse_EventScript_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox RiminiMare_FriendshipRatersHouse_Text_Pikachu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RiminiMare_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou:
	.string "Let me see your POKéMON.\n"
	.string "I'll check to see how much it likes you.\p"
	.string "Oh.\n"
	.string "Your POKéMON…$"

RiminiMare_FriendshipRatersHouse_Text_AdoresYou:
	.string "It adores you.\n"
	.string "It can't possibly love you any more.\l"
	.string "I even feel happy seeing it.$"

RiminiMare_FriendshipRatersHouse_Text_VeryHappy:
	.string "It seems to be very happy.\n"
	.string "It obviously likes you a whole lot.$"

RiminiMare_FriendshipRatersHouse_Text_LikesYouQuiteALot:
	.string "It likes you quite a lot.\n"
	.string "It seems to want to be babied a little.$"

RiminiMare_FriendshipRatersHouse_Text_GettingUsedToYou:
	.string "It's getting used to you.\n"
	.string "It seems to believe in you.$"

RiminiMare_FriendshipRatersHouse_Text_NotUsedToYou:
	.string "It's not very used to you yet.\n"
	.string "It neither loves nor hates you.$"

RiminiMare_FriendshipRatersHouse_Text_VeryWary:
	.string "It's very wary.\n"
	.string "It has scary viciousness in its eyes.\l"
	.string "It doesn't like you much at all.$"

RiminiMare_FriendshipRatersHouse_Text_DetestsYou:
	.string "This is a little hard for me to say…\p"
	.string "Your POKéMON simply detests you.\n"
	.string "Doesn't that make you uncomfortable?$"

RiminiMare_FriendshipRatersHouse_Text_Pikachu:
	.string "PIKACHU: Pika pika!$"

