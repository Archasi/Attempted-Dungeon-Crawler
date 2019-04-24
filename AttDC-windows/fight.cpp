#include <iostream>
#include "scenes.h"

void startFight(int minWeaponDamage, int maxWeaponDamage, int enemyHealth, std::string enemyName, int playerHealth, int minEnemyDamage, int maxEnemyDamage)
{
	int damage_dealt = 0;
	int damage_taken = 0;
	int ran = 777;
	std::cout << "Initiating fight with enemy: " << enemyName << "!" << std::endl;
	while (enemyHealth > 0)
	{
		srand(time(NULL) * ran);
		damage_dealt = (std::rand() % (maxWeaponDamage-minWeaponDamage) + minWeaponDamage);
		std::cout << "Damage dealt: " << damage_dealt << "HP"<< std::endl;
		enemyHealth -= damage_dealt;
		std::cout << "Enemy health remaining: " << enemyHealth << "HP" << std::endl;
		damage_taken = (std::rand() % (maxEnemyDamage - minEnemyDamage) + minEnemyDamage);
		std::wcout << "Damage taken: " << damage_taken << "HP" << std::endl;
		playerHealth -= damage_taken;
		std::cout << "\nHP left: " << playerHealth << std::endl;
		Sleep(600);
		ran = (std::rand() % 1000000) + 777;

	}
	Sleep(1788);
	system("cls");
}