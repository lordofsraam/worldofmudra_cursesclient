#include <ncurses.h>
#include "NScreen.h"

NScreen::NScreen()
{
	screen = initscr();
}

NScreen::~NScreen()
{
	endwin();
}
