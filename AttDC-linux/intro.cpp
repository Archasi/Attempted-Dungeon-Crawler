#include <iostream>
#include <unistd.h>
#include <ncurses.h>
#include "scenes.h"

void showIntro()
{
	
	clear();
	printw("##=========================================================================================================##\n");
	printw("||]Welcome to Attempted Dungeon Crawler!                                                                   ||\n");
	printw("||]Your objective is to collect items to exit a cave.                                                      ||\n");
	printw("||]The world is randomly generated, making every playthrough unique.                                       ||\n");
	printw("||]To escape, you need to defeat enemies blocking your path.                                               ||\n");
	printw("||]The surroundings are conveyed through text descriptions.                                                ||\n");
	printw("||]You start with only a map, which shows the areas you have already been in.                              ||\n");
	printw("||]Collected items show up in your inventory; some of them are for battles, some interact with the map.    ||\n");
	printw("||]It's your job to figure out what goes where based on the descriptions.                                  ||\n");
	printw("||]You can save your game at any time by going to the menu and choosing 'save'.                            ||\n");
	printw("||]H A V E   F U N !                                                                                       ||\n");
	printw("##=========================================================================================================##\n||]");
	printw("Press enter to continue");
	refresh(); 
	getch();
}