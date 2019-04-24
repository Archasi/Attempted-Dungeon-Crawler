#include <iostream>
#include <Windows.h>
#include "scenes.h"

void showCredits()
{
		system("cls");
		std::cout << "==================[Credits]====================\n";
		Sleep(animationTime);
		std::cout << "==             [Linux Version]               ==\n";
		Sleep(animationTime);
		std::cout << "==============]---------------[================\n";
		Sleep(animationTime);
		std::cout << "==             =Kacper Dalach=               ==\n";
		Sleep(animationTime);
		std::cout << "===============================================\n";
		Sleep(animationTime);
		std::cout << "==            [Windows Version]              ==\n";
		Sleep(animationTime);
		std::cout << "=============]-----------------[===============\n";
		Sleep(animationTime);
		std::cout << "==             =Jakub Szyczmyk=              ==\n";
		Sleep(animationTime);
		std::cout << "==            =Kacper Kowalczuk=             ==\n";
		Sleep(animationTime);
		std::cout << "==      =Kacper Bialecki (fight system)=     ==\n";
		Sleep(animationTime);
		std::cout << "===============================================\n";
		Sleep(animationTime);
		std::cout << "Press enter to continue...\n";
		clearCin();
}