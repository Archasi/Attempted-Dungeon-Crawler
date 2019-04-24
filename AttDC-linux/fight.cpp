#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <ncurses.h>
#include "scenes.h"

void startFight(int minWeaponDamage, int maxWeaponDamage, int enemyHealth)
{
	int damage_dealt = 0;
	int ran = 777;
	while (enemyHealth > 0)
	{
		srand(time(NULL) * ran);
		damage_dealt = (std::rand() % (maxWeaponDamage-minWeaponDamage) + minWeaponDamage);
		printw("Damage dealt: %d\n", damage_dealt);
		enemyHealth -= damage_dealt;
		printw("Enemy health remaining: %d\n", enemyHealth);
		usleep(250000);
		ran = (std::rand() % 1000000) + 777;

	}
	usleep(1788000);
	clear();
}