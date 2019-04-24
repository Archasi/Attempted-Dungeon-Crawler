#pragma once

#define animationTime 47 //animation wait time in ms
#define optionTime 600 //option exeption wait time in ms
#define ignoreCharAmount 2147483647 //amount of characters to ignore (also highest possible value of signed integer32 [0x7FFFFFFF])

#include <string>

void showMenu(); //menu.cpp
void showIntro(); //intro.cpp
void showCredits(); //credits.cpp
void startFight(int minWeaponDamage, int maxWeaponDamage, int enemyHealth, std::string enemyName, int playerHealth, int minEnemyDamage, int maxEnemyDamage); //fight.cpp

void clearCin(); //progControl.cpp