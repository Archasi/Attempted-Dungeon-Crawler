#include <string> //getline and string kind of shit
#include <iostream> //every fooken thing
#include <cstdlib> //exit
#include <Windows.h> //sleep
#include <conio.h> //press any key to continue
#include "scenes.h" //main 

void showMenu() {
	std::string sChoice;
	int choice = 0;
	while (1)
	{
		std::cin.clear();
		system("cls");
		std::cout << "===============[Attempted Dungeon Crawler v. a0.01]================\n";
		Sleep(animationTime);
		std::cout << "==                     [by MPDGamesCompany]                      ==\n";										//this fockin bukkake help
		Sleep(animationTime);
		std::cout << "==============================[Menu]===============================\n";
		Sleep(animationTime);
		std::cout << "==] 1.New Game                                                  [==\n";
		Sleep(animationTime);
		std::cout << "==] 2.Continue                                                  [==\n";
		Sleep(animationTime);
		std::cout << "==] 3.Credits                                                   [==\n";
		Sleep(animationTime);
		std::cout << "==] 4.Screen Calibration                                        [==\n";  
		Sleep(animationTime);
		std::cout << "==] 5.Kys                                                       [==\n";
		std::cout << "===================================================================\n";
		getline(std::cin, sChoice);
		choice = std::stoi(sChoice);
		switch (choice)
		{
		case 1:
			showIntro();
			break;
		case 2:
			//classcall here
			system("cls");
			std::cout << "WIP\n";
			Sleep(optionTime);
			std::cout << "Press any key to continue...\n";
			_getch();
			break;
		case 3:
			showCredits();
			break;
		case 4:
			system("cls");
			std::cout << "=============================================================================================================\n";
			Sleep(animationTime);
			std::cout << "Resize your window so that the above text is displayed in one line.\n";
			Sleep(animationTime);
			std::cout << "If you don't see anything on the top of the window, enlarge it just a little bit.\n";
			Sleep(animationTime);
			std::cout << "Press enter to continue...\n";
			clearCin();
			break;
		case 5:
			system("cls");
			std::cout << "Exiting game...";
			Sleep(optionTime);
			exit(EXIT_SUCCESS);
		default:
			system("cls");
			std::cout << "There's no such option.\n";
			Sleep(optionTime);
			std::cout << "Press enter to continue...\n";
			clearCin();
			break;
		}
	}
	std::cout << "--------------FATAL ERROR - GAME FAILED TO INITIALIZE. EXITING IN 10 SECONDS.---------------";
	std::cout << "-----REPORT THE CIRCUMSTANCES THAT GOT HERE TO THE ISSUES TAB IN OUR GITHUB REPOSITORY.-----";
	Sleep(10000);
	exit(EXIT_FAILURE);
}