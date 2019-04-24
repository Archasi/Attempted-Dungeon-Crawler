#include <string> 				// getline and string kind of shit
#include <iostream> 			// everyfoking thing
#include <iomanip>			 	// tbh idk
#include <cstdlib>				// exit
#include <unistd.h>				// usleep
#include <ncurses.h>
#include "scenes.h" 			// JA PIERDOLE

void selection(short a);

void showMenu() {
	int choice;
	int chuj = 1;
	char choice2;
	short cursor = 1;

	start_color();
	init_pair(1 ,0,7);
	init_pair(2,7,0);
	init_pair(3,7,0);
	init_pair(4,7,0);

	clear();
	while (1)
	{
		printw("##==================================[Attempted Dungeon Crawler v. a0.01]===================================##\n");
		printw("                                             [Linux edition]                        \n");
		printw("                                          [by MPDGamesCompany]                      \n");										
		printw("##===============================================[Menu]====================================================##\n\n"); 
		printw("                                              "); attron(COLOR_PAIR(1)); printw("[1.New Game]\n\n"); attroff(COLOR_PAIR(1)); 
		printw("                                              "); attron(COLOR_PAIR(2)); printw("[2.Continue]\n\n"); attroff(COLOR_PAIR(2));
		printw("                                              "); attron(COLOR_PAIR(3)); printw("[3.Credits ]\n\n"); attroff(COLOR_PAIR(3));
		printw("                                              "); attron(COLOR_PAIR(4)); printw("[4.Kys     ]\n");   attroff(COLOR_PAIR(4));  
		printw("##=========================================================================================================##\n");
		refresh();
		switch (getch()){
			case KEY_DOWN :
				if(cursor<4){
					init_pair(cursor,7,0);
					cursor++;
					init_pair(cursor,0,7);
				}
				break;
			case KEY_UP :
				if(cursor>1){
					init_pair(cursor,7,0);
					cursor--;
					init_pair(cursor,0,7);
				}
				break;
			case '\n' :
				selection(cursor);
				break;
		}
		clear();
	}
	printw("-----FATAL ERROR - GAME FAILED TO INITIALIZE. EXITING IN 3 SECONDS.-----");
	usleep(3000000);
	exit(EXIT_FAILURE);
}
void selection(short a){
	switch (a){
		case 1:
			showIntro();
		break;
		case 2:
			//also odzielny plik
			printw("WIP");
			refresh();
			usleep(1000000);
	
		break;
		case 3:
			clear();
			printw("##===============================================[Credits]=================================================##\n\n");
			printw("[=] Jakub Szyczmyk (pomocy)                   \n\n");
			printw("[=] Kacper Dalach(also pomocy)                \n\n");
			printw("[=] Kacper Kowalczuk(OH PLEASE GOD HELP ME)   \n\n");
			printw("##=========================================================================================================##\n");
			getch();
		break;
		case 4:
			clear();
			printw("||]so go fuccc urself\n");
			refresh();
			usleep(1000000);
			exit(EXIT_SUCCESS);
			break;
	}
}