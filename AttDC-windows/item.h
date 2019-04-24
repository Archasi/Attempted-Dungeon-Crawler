#pragma once
#ifndef ITEM_H
#define ITEM_H

#include <string>

class item
{
public:
	//constructors
	item();
	item(std::string itemname, int value);

	//destructor
	~item();

	//accessors
	std::string getItemName();
	void setItemName(std::string itemname);
	int getValue();
	void setValue(int value);
private:
	std::string itemName;
	int value;
};

#endif
