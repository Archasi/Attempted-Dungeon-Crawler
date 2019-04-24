#include <iostream>
#include <ncurses.h>
#include "scenes.h"

int main()
{
	initscr();
	atexit(exit);
	noecho();
	cbreak();							//buffering off
	keypad(stdscr, TRUE);
	curs_set(0);
	//WINDOW * win = newwin(26,128,1,1);
	clear();
	printw( "=============================================================================================================\n"); 
	printw( "Resize your window so the above dongers is displayed in one line\n");
	printw( "Press any key to continue ");
	int choice;
	for(;;){
		choice = getch();
		switch (choice){
		case KEY_RESIZE :
			break;
		//case NULL :
			//break;
		default :
			//startFight(20,40,1000);
			showMenu();
			break;
		}
	}
	return 0;
}