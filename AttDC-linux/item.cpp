#include "item.h"

//constructors
item::item()
{
	setItemName("def");
}

item::item(std::string itemname)
{
	setItemName(itemname);
}

//destructor
item::~item() {}

//accessors
std::string item::getItemName() { return itemName; }

void item::setItemName(std::string itemname) { itemName = itemname; }