#include <iostream>

#include "tile.h"

tile::tile(){
    description = "Basic tile";
    //onFloor[] = 
}

tile::tile(
    std::string dscrpt,
    item * floor){
    
    this->description = dscrpt;
    //for(int i=0;i<sizeof(floor);i++){this->onFloor[i] = floor[i];}
}

std::string tile::getDescription(){return description;}
item * tile::getOnFloor(){return onFloor;}

bool tile::appendItem(item itemAppended){
    for(short i=0;i<=cap;i++){
        if (onFloor[i].getItemName() == "NULL"){
            onFloor[i] = itemAppended;
            return true;
        }
    }
    return false;
}