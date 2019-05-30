#pragma once
#ifndef TILE_H
#define TILE_H

#include <iostream>
#include <algorithm>
#include "item.h"

#define cap 10

class tile{
    protected: 
        std::string description;
        
        //enemy enemies[];
        item onFloor[cap]; //TODO - Dynamic Array instead of fixed size array
    public:
        //constructors
        tile();
        tile(std::string description, item* floor);

        //destructor
        ~tile();

        //accesers
        std::string getDescription();
        tile * getEntrance();
        item * getOnFloor();

        //setters
        bool setItem(item item);
};

#endif