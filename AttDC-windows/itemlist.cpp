#include "itemlist.h"

static enum itemnames {
	yellowDoorKey = 0,
	redDoorKey = 1,
	blueDoorKey = 2,
	greenDoorKey = 3,
	purpleDoorKey = 4,
	blackDoorKey = 5,
	whiteDoorKey = 6,
	redAmulet = 7,
	finalKeyPiece = 8,
	finalKey = 9,
	sharpenedStick = 100,
	stoneDagger = 101,
	metalDagger = 102,
	messner = 103,
	fireAxe = 104,
	chainmail = 200,
	plateArmour = 201,
	debugArmour = 202,
	apple = 300,
	cake = 301,
	cookie = 302,
	grapes = 303,
	coal = 304,
	coins = 400,
	platinumCoins = 401,
	redSoul = 402,
	annodominium = 403,
	ciulenZerstorer = 499
};
void setItem(item item, int id)
{
	item.setItemName(itemnames.402);
}