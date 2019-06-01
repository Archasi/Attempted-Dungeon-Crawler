#pragma once
#ifndef TILE_H
#define TILE_H

#include <iostream>
#include <algorithm>
#include "item.h"

#define cap 5

class tile {
protected:
	std::string description;
	//enemy enemies[];
	item onFloor[cap]; //TODO - Dynamic Array instead of fixed size array
	item inChest[cap];
	bool exits[4]; //0 - north, 1 - west, 2 - south, 3 - east; true - exists, false - does not exist
	int entrance = 4; //0 - north, 1 - west, 2 - south, 3 - east, 4 - beggining (fall into cave maybe?)
public:
	//constructors
	tile();
	tile(std::string description, item itemsOnFloor[], item itemsInChest[], int entrance);

	//destructor
	~tile();

	//accesers
	std::string getDescription();
	int getEntrance();
	item getItemOnFloor(int id);
	item getItemInChest(int id);

	//setters
	void setItems(item itemsOnFloor[], item itemsInChest[]);
	void setItem(item item, int id, bool isInChest); // true - in chest, false - on floor
	void setEntrance(int direction);
};
#endif