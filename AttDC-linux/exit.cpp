#include <ncurses.h>
#include <cstdlib>
#include "scenes.h"

void exit(){
    clear();
    endwin();
    printw("Exit Succes\n");
    exit(EXIT_SUCCESS);
}