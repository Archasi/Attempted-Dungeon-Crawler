#include <string> 				// getline and string kind of shit
#include <iostream> 			// everyfoking thing
#include <iomanip>			 	// tbh idk
#include <cstdlib>				// exit
#include <unistd.h>				// usleep
#include <ncurses.h>
#include "scenes.h" 			// JA PIERDOLE

void showMenu() {
	char choice;
	int chuj = 1;
	char choice2;

	clear();
	while (1)
	{
		printw("##=============[Attempted Dungeon Crawler v. a0.01]==============##\n");
		printw("||                        [Linux edition]                        ||\n");
		printw("||                     [by MPDGamesCompany]                      ||\n");										
		printw("||============================[Menu]=============================||\n");
		printw("||] 1.New Game                                                  [||\n");
		printw("||] 2.Continue                                                  [||\n");
		printw("||] 3.Credits                                                   [||\n");
		printw("||] 4.Kys                                                       [||\n");  
		printw("##===============================================================##\n");
		refresh();
		choice = getch();
		switch (choice){
		case '1' :
			showIntro();
			break;
		case '2' :
			//also odzielny plik
			printw("WIP");
			refresh();
			usleep(1000000);
			break;
		case '3' :
			clear();
			printw("##================[Credits]==================##\n");
			printw("||}Jakub Szyczmyk (pomocy)                   ||\n");
			printw("||}Kacper Dalach(also pomocy)                ||\n");
			printw("||}Kacper Kowalczuk(OH PLEASE GOD HELP ME)   ||\n");
			printw("##===========================================##\n");
			getch();
			break;
		case '4' :	
			clear();
			printw("||]so go fuccc urself\n");
			refresh();
			usleep(1000000);
			exit(EXIT_SUCCESS);
			break;
		default :
			printw("||]there's no such an option twat");
			refresh();
			usleep(600000);
		}
		clear();
	}
	printw("-----FATAL ERROR - GAME FAILED TO INITIALIZE. EXITING IN 3 SECONDS.-----");
	usleep(3000000);
	exit(EXIT_FAILURE);
}