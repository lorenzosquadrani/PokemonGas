RiminiTown_BikeShop_MapScripts::
	.byte 0


RiminiTown_BikeShop_EventScript_Rydel::
	lock
	faceplayer
	checkitem ITEM_BUONO_SKATE
	compare VAR_RESULT, 0
	goto_if_ne RiminiTown_BikeShop_EventScript_Rydel_2
	msgbox RiminiTown_BikeShop_EventScript_Rydel_Text_1
	closemessage
RiminiTown_BikeShop_EventScript_Rydel_1:
	release
	return

RiminiTown_BikeShop_EventScript_Rydel_2:
	msgbox RiminiTown_BikeShop_EventScript_Rydel_Text_0
	giveitem ITEM_MACH_BIKE
	closemessage
	removeitem ITEM_BUONO_SKATE
	goto RiminiTown_BikeShop_EventScript_Rydel_1


RiminiTown_BikeShop_EventScript_Rydel_Text_0:
	.string "Eheh, vedo che hai un buono. Allora\n"
	.string "ringrazia tua mamma da parte mia e\l"
	.string "tieni questo piccolo gioellino.$"

RiminiTown_BikeShop_EventScript_Rydel_Text_1:
	.string "Ciao! Non hai abbastanza soldi per uno\n"
	.string "skate, mi dispiace.$"
