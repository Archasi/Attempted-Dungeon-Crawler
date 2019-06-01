#pragma once

#define animationTime 47 //animation wait time in ms
#define optionTime 600 //option exeption wait time in ms
#define fightTime 950 //wait time between attacks in ms
#define endTime 3450 // wait time at the end of some scenes in ms

#include <conio.h> //press any key to continue
#include <string> //getline and string kind of shit
#include <iostream> //every fooken thing
#include <cstdlib> //exit
#include <Windows.h> //sleep
#include <cstdlib> //rand
#include <ctime> //also rand

void showMenu(); //menu.cpp
void showIntro(); //intro.cpp
void showCredits(); //credits.cpp
void startGame();
void startFight(int minWeaponDamage, int maxWeaponDamage, int enemyHealth, std::string enemyName, int playerHealth, int minEnemyDamage, int maxEnemyDamage); //fight.cpp