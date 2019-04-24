#include <iostream>
#include <ncurses.h>
#include "scenes.h"
#include "item.h"
#include "tile.h"
#include <string>

int main()
{
	//initscr();
	//atexit(exit);
	//noecho();
	//cbreak();							//buffering off
	//keypad(stdscr, TRUE);
	//curs_set(0);
	//showMenu();
	//WINDOW * win = newwin(26,128,1,1);
	clear();
	tile *a = new tile();
	item *c = new item();
	item x[1] = {*c};
	tile *b = new tile("foo", {});

	std::cout << b->getDescription();
	//tile b("foo", x);

	return 0;
}