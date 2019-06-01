#include "scenes.h"
#include "weapon.h"
#include "tile.h"

void startGame()
{
	system("cls");
	std::cout << "Game Started!" << std::endl;
	Sleep(1500);
	system("cls");

	item itemsOnFloor[cap];
	itemsOnFloor[0] = item("Coin", 1);
	itemsOnFloor[1] = item("Sword", 1000);

	item itemsInChest[cap];
	itemsInChest[0] = item("Sack of Coins", 2000);

	tile startTile = tile("Start tile", itemsOnFloor, itemsInChest, 4);

	int chestCounter = 0;
	std::string temp = "";

	switch (startTile.getEntrance()){
	case 0:
		std::cout << "You have entered from the northern side." << std::endl;
		Sleep(animationTime);
		break;
	case 1:
		std::cout << "You have entered from the western side." << std::endl;
		Sleep(animationTime);
		break;
	case 2:
		std::cout << "You have entered from the southern side." << std::endl;
		Sleep(animationTime);
		break;
	case 3:
		std::cout << "You have entered from the eastern side." << std::endl;
		Sleep(animationTime);
		break;
	case 4:
		std::cout << "You have fallen into an unknown cave." << std::endl;
		Sleep(animationTime);
		break;
	default:
		std::cout << "You have entered from the unavailible side. Fix the code or stop changing it. The max integer in the tile constructor is 4." << std::endl;
		Sleep(animationTime);
		break;
	}
	std::cout << "On the floor you see: " << std::endl;
	Sleep(animationTime);
	for (int i = 0; i < cap; i++) {
		temp = itemsOnFloor[i].getItemName();
		if (temp != "NULL")
		{
			std::cout << "-a " << temp << std::endl;
			Sleep(animationTime);
		}
		temp = itemsInChest[i].getItemName();
		if (temp != "NULL")
		{
			chestCounter++;
		}
	}

	if (chestCounter > 0)
	{
		std::cout << "You see an open chest, and in it there is: " << std::endl;
		Sleep(animationTime);
		for (int i = 0; i < cap; i++) {
			temp = itemsInChest[i].getItemName();
			if (temp != "NULL")
			{
				std::cout << "-a " << temp << std::endl;
				Sleep(animationTime);
			}
		}
	}
	_getch();
}