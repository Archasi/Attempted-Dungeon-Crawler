#include "item.h"

//constructors
item::item()
{
	setItemName("NULL");
}

item::item(std::string itemname, int itvalue)
{
	setItemName(itemname);
	setValue(itvalue);
}

//destructor
item::~item() {}

//accessors
std::string item::getItemName() { return itemName; }
int item::getValue() { return value; }

void item::setItemName(std::string itemname) { itemName = itemname; }
void item::setValue(int itvalue) { value = itvalue; }
