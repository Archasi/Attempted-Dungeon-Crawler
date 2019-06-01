#include <iostream>

#include "tile.h"

tile::tile(){
    description = "Basic tile";
}

tile::tile(std::string description, item itemsOnFloor[], item itemsInChest[], int entrance){
    
    this->description = description;
	setItems(itemsOnFloor, itemsInChest);
}

std::string tile::getDescription(){ return description; }
int tile::getEntrance() { return entrance; }
item tile::getItemOnFloor(int id){ return onFloor[id]; }
item tile::getItemInChest(int id) { return inChest[id]; }

void tile::setItems(item itemsOnFloor[], item itemsInChest[]){
    for(short i=0;i<=cap;i++){
        if (itemsOnFloor[i].getItemName() != "NULL"){
            onFloor[i] = itemsOnFloor[i];
        }
		if (itemsInChest[i].getItemName() != "NULL"){
			inChest[i] = itemsInChest[i];
		}
    }
}

void tile::setItem(item item, int id, bool isInChest){
	if(isInChest == true){
		inChest[id] = item;
	}
	else{
		onFloor[id] = item;
	}
}

void tile::setEntrance(int direction)
{
	this->entrance = direction;
}