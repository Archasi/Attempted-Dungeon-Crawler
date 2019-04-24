#pragma once
#ifndef ITEMLIST_H
#define ITEMLIST_H
#endif

#include <iostream>
#include "weapon.h"

class itemlist
{
public:
	enum itemnames {};
	void setItem(item item, int id);
private:
	item itemlist[500];
};