#include <ncurses.h>
#include "NScreen.h"

NScreen::NScreen()
{
  printf("NScreen constructor called.\n");
  screen = initscr();
  printf("Screen initiallized.\n");
}

NScreen::~NScreen()
{
  endwin();
  printf("Screen ended.\n");
}
