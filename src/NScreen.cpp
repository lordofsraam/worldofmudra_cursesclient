#include <ncurses.h>
#include "NScreen.h"

NScreen::NScreen() : NWindow(initscr())
{
}

NScreen::~NScreen()
{
  endwin();
}

void NScreen::SetRaw()
{
  raw();
}

void NScreen::KeyPad(bool b)
{
  keypad(this->win, b ? TRUE : FALSE);
}

void NScreen::SetEcho(bool b)
{
  if (b) echo(); else noecho();
}

void NScreen::Refresh()
{
  refresh();
}

int NScreen::GetKey()
{
  return getch();
}
