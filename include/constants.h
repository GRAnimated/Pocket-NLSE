#ifndef NLSE_CONSTANTS_H
#define NLSE_CONSTANTS_H

//offsets
#define OFFSET_TOWN_TREESIZE  			0x049526
#define OFFSET_TOWN_GRASSTYPE  			0x04da01
#define OFFSET_TOWN_PLAYTIME  			0x5c730
#define OFFSET_TOWN_DAYSPLAYED  		0x5c7ba
#define OFFSET_TOWN_NATIVEFRUIT  		0x05c7b6
#define OFFSET_TOWN_ID1  				0x05c738
#define OFFSET_TOWN_ID2  				0x05c739
#define OFFSET_TOWN_NAME  				0x05c73a
#define OFFSET_TOWN_AVAILABLEPWPS	  	0x04d9c8

#define OFFSET_MUSEUM_ROOM1  			0x0659d8
#define OFFSET_MUSEUM_ROOM2  			0x066570
#define OFFSET_MUSEUM_ROOM3  			0x067108
#define OFFSET_MUSEUM_ROOM4  			0x067ca0

#define OFFSET_MAP_GRASS  				0x053e80
#define OFFSET_MAP_ACRES  				0x04da04
#define OFFSET_MAP_BUILDINGS  			0x049528
#define OFFSET_MAP_ITEMS  				0x04da58

#define OFFSET_ISLAND_ACRES  			0x06a408
#define OFFSET_ISLAND_BUILDINGS  		0x06b428
#define OFFSET_ISLAND_ITEMS  			0x06a428

#define OFFSET_PLAYERS  				0x20
#define OFFSET_PLAYER_HAIRSTYLE  		0x04
#define OFFSET_PLAYER_HAIRCOLOR  		0x05
#define OFFSET_PLAYER_FACE  			0x06
#define OFFSET_PLAYER_EYECOLOR  		0x07
#define OFFSET_PLAYER_TAN  				0x08
#define OFFSET_PLAYER_HAT  				0x0a
#define OFFSET_PLAYER_ACCESSORY  		0x0e
#define OFFSET_PLAYER_WETSUIT  			0x12
#define OFFSET_PLAYER_TOPWEAR  			0x16
#define OFFSET_PLAYER_BOTTOMWEAR  		0x1a
#define OFFSET_PLAYER_SOCKS  			0x1e
#define OFFSET_PLAYER_SHOES  			0x22
#define OFFSET_PLAYER_HELDITEM  		0x26
#define OFFSET_PLAYER_PATTERNS  		0x2c
#define OFFSET_PLAYER_GENDER  			0x55ba
#define OFFSET_PLAYER_ID1  				0x55a6
#define OFFSET_PLAYER_ID2  				0x55a7
#define OFFSET_PLAYER_NAME  			0x55a8
#define OFFSET_PLAYER_TPCREGION  		0x55d2
#define OFFSET_PLAYER_BIRTHDAYMONTH  	0x55d4
#define OFFSET_PLAYER_BIRTHDAYDAY	  	0x55d5
#define OFFSET_PLAYER_REGYEAR  			0x55d6
#define OFFSET_PLAYER_REGMONTH  		0x55d8
#define OFFSET_PLAYER_REGDAY  			0x55d9
#define OFFSET_PLAYER_BADGES  			0x569c
#define OFFSET_PLAYER_TPCPIC  			0x5724
#define OFFSET_PLAYER_BANK  			0x6b68
#define OFFSET_PLAYER_PLAYTIME  		0x6b90
#define OFFSET_PLAYER_MEDALS  			0x6b9c
#define OFFSET_PLAYER_POCKETS  			0x6bb0
#define OFFSET_PLAYER_ENCYCLOPEDIA  	0x6c00
#define OFFSET_PLAYER_WALLET  			0x6e38
#define OFFSET_PLAYER_ISLANDBOX  		0x6e40
#define OFFSET_PLAYER_DRESSERS  		0x8e18
#define OFFSET_PLAYER_HOUSESIZE  		0x057e64
#define OFFSET_PLAYER_HOUSESTYLE  		0x057e65
#define OFFSET_PLAYER_HOUSEDOORSHAPE  	0x057e66
#define OFFSET_PLAYER_HOUSEBRICK  		0x057e67
#define OFFSET_PLAYER_HOUSEROOF  		0x057e68
#define OFFSET_PLAYER_HOUSEDOOR  		0x057e69
#define OFFSET_PLAYER_HOUSEFENCE  		0x057e6a
#define OFFSET_PLAYER_HOUSEPAVEMENT  	0x057e6b
#define OFFSET_PLAYER_HOUSEMAILBOX  	0x057e6c

#define OFFSET_VILLAGERS  				0x027c90
#define OFFSET_VILLAGER_PERSONALITY  	0x02
#define OFFSET_VILLAGER_STOREDLETTER1  	0x182c
#define OFFSET_VILLAGER_STOREDLETTER2  	0x186e
#define OFFSET_VILLAGER_STOREDLETTER3  	0x19f0
#define OFFSET_VILLAGER_SHIRT  			0x244e
#define OFFSET_VILLAGER_SONG  			0x2452
#define OFFSET_VILLAGER_WALL  			0x2456
#define OFFSET_VILLAGER_FLOOR  			0x245a
#define OFFSET_VILLAGER_UMBRELLA  		0x245e
#define OFFSET_VILLAGER_FURNITURE  		0x2462
#define OFFSET_VILLAGER_CATCHPHRASE  	0x24a6
#define OFFSET_VILLAGER_STATUS  		0x24c4

#define OFFSET_PAST_VILLAGERS  			0x03f17e

#define OFFSET_SHOP_LOSTFOUND  			0x05c75e
#define OFFSET_SHOP_NOOK  				0x05c7ec
#define OFFSET_SHOP_ABLE1  				0x05c868
#define OFFSET_SHOP_ABLEPATTERNS  		0x05c8b4
#define OFFSET_SHOP_ABLE2  				0x060c34
#define OFFSET_SHOP_LEIF  				0x060c72
#define OFFSET_SHOP_REDD  				0x060cac
#define OFFSET_SHOP_KICKS  				0x060daa
#define OFFSET_SHOP_RETAIL  			0x060e30
#define OFFSET_SHOP_MUSEUM  			0x06523a
#define OFFSET_SHOP_LOLGYROIDS  		0x06530e
#define OFFSET_SHOP_ISLAND  			0x065334
#define OFFSET_SHOP_HOMES  				0x06524a
#define OFFSET_SHOP_GRACIE  			0x065274

//constants
#define SIZE_PATTERN            2160
#define SIZE_PLAYER             0x9f10
#define SIZE_VILLAGER           0x24f8
#define SIZE_PAST_VILLAGER      0x02
#define SIZE_ACRE               16*16
#define SIZE_MAP                (16*16)*5*4
#define SIZE_MAP_ISLAND         (16*16)*2*2
#define SIZE_FULL_MAP           7*6
#define SIZE_FULL_MAP_ISLAND    4*4

#endif
