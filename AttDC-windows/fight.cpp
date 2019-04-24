#include "scenes.h"

void startFight(int minWeaponDamage, int maxWeaponDamage, int enemyHealth, std::string enemyName, int playerHealth, int minEnemyDamage, int maxEnemyDamage)
{
	int damageDealt = 0;
	int damageTaken = 0;
	int randomizer = 777;
	std::string choiceS = "";
	int choice = 0;
	bool hasRan = false;
	std::cout << "Initiating fight with enemy: " << enemyName << "!\n" << std::endl;
	do
	{
		std::cout << "1. Fight or 2. Run?\n\n";
		choiceS = _getch();
		choice = std::stoi(choiceS);
		switch (choice)
		{
		case 1:
			srand(time(NULL) * randomizer);
			damageDealt = (std::rand() % (maxWeaponDamage - minWeaponDamage) + minWeaponDamage);
			std::cout << "Damage dealt: " << damageDealt << "HP" << std::endl;
			Sleep(animationTime);
			enemyHealth -= damageDealt;
			std::cout << "Enemy health remaining: " << enemyHealth << "HP" << std::endl;
			Sleep(animationTime);
			if (enemyHealth <= 0)
			{
				std::cout << "HP left: " << playerHealth << std::endl;
				break;
			}
			damageTaken = (std::rand() % (maxEnemyDamage - minEnemyDamage) + minEnemyDamage);
			std::cout << "Damage taken: " << damageTaken << "HP" << std::endl;
			Sleep(animationTime);
			playerHealth -= damageTaken;
			std::cout << "HP left: " << playerHealth << std::endl;
			Sleep(animationTime);
			Sleep(fightTime);
			randomizer = (std::rand() % 1000000) + 777;
			std::cout << std::endl;
			break;
		case 2:
			hasRan = true;
			break;
		default:
			std::cout << "No such option exists!\n\n";
			break;
		}
		
	} while (enemyHealth > 0 && playerHealth > 0 && hasRan == false);
	if (enemyHealth <= 0)
	{
		std::cout << "You Won!\n";
		Sleep(endTime);
	}
	else if(playerHealth <= 0)
	{
		std::cout << "You Lost!\n";
		Sleep(endTime);
	}
	else
	{
		std::cout << "Ran away!\n\n";
		Sleep(optionTime);
	}
}