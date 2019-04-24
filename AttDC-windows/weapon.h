#pragma once
#ifndef WEAPON_H
#define WEAPON_H
#include "item.h"
class weapon :
	public item
{
public:
	//constructors
	weapon();
	weapon(std::string itemname, int itvalue, int maxDmg, int minDmg);

	//destructor
	~weapon();

	//accessors
	int getMaxWeaponDamage();
	int getMinWeaponDamage();

	void setMaxWeaponDamage(int maxDmg);
	void setMinWeaponDamage(int minDmg);
private:
	int maxWeaponDamage;
	int minWeaponDamage;
};

#endif

