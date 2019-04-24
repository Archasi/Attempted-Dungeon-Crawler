#pragma once
#ifndef ITEM_H
#define ITEM_H

#include <string>

class item
{
public:
	//constructors
	item();
	item(std::string itemname);

	//destructor
	~item();

	//accessors
	std::string getItemName();
	void setItemName(std::string itemname);
private:
	std::string itemName;
};

#endif
