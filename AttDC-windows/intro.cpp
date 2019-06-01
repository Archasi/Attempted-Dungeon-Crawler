#include "scenes.h"

void showIntro()
{
	system("cls");
	std::cout << "==============================================================================================================\n";
	Sleep(animationTime);
	std::cout << "==]Welcome to Attempted Dungeon Crawler!                                                                    ==\n";
	Sleep(animationTime);
	std::cout << "==]Your objective is to collect items to exit a cave.                                                       ==\n";
	Sleep(animationTime);
	std::cout << "==]The world is randomly generated, making every playthrough unique.                                        ==\n";
	Sleep(animationTime);
	std::cout << "==]To escape, you need to defeat enemies blocking your path.                                                ==\n";
	Sleep(animationTime);
	std::cout << "==]The surroundings are conveyed through text descriptions.                                                 ==\n";
	Sleep(animationTime);
	std::cout << "==]You start with only a map, which shows the areas you have already been in.                               ==\n";
	Sleep(animationTime);
	std::cout << "==]Collected items show up in your inventory; some of them are for battles, some interact with the map.     ==\n";
	Sleep(animationTime);
	std::cout << "==]It's your job to figure out what goes where based on the descriptions.                                   ==\n";
	Sleep(animationTime);
	std::cout << "==]You can save your game at any time by going to the menu and choosing 'save'.                             ==\n";
	Sleep(animationTime);
	std::cout << "==]H A V E   F U N !                                                                                        ==\n";
	Sleep(animationTime);
	std::cout << "==============================================================================================================\n";
	Sleep(animationTime);
	std::cout << "Press any key to continue...\n";
	_getch();
	startGame();
}