#include "weapon.h"

//constructors
weapon::weapon()
{
	setItemName("defwep");
	setMaxWeaponDamage(10);
	setMinWeaponDamage(1);
}

weapon::weapon(std::string itemname, int itvalue, int maxDmg, int minDmg)
{
	setItemName(itemname);
	setValue(500);
	setMaxWeaponDamage(maxDmg);
	setMinWeaponDamage(minDmg);
}

//destructor
weapon::~weapon() {}

//accessors
int weapon::getMaxWeaponDamage() { return maxWeaponDamage; }
int weapon::getMinWeaponDamage() { return minWeaponDamage; }

void weapon::setMaxWeaponDamage(int maxDmg) { maxWeaponDamage = maxDmg; }
void weapon::setMinWeaponDamage(int minDmg) { minWeaponDamage = minDmg; }
