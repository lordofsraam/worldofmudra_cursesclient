#include <ncurses.h>
#include <unistd.h>
#include <cstdlib>
#include <string>
#include "window.h"

NWindow::NWindow(int width, int height, int x, int y)
{
    this->win = newwin(height, width, y, x);
}

NWindow::~NWindow()
{

}

void NWindow::Draw()
{
    wrefresh(this->win);
}

std::pair<int, int> NWindow::GetXY()
{
    int x, y;
    getmaxyx(this->win, y, x);
    return std::make_pair(x, y);
}

void NWindow::SetXY(int x, int y)
{
    
}

void NWindow::SetAttributes(int attrib)
{
}

WINDOW *NWindow::GetWindow()
{
    return this->win;
}

void NWindow::AddString(int x, int y, std::string str)
{
    mvwaddstr(this->win, y, x, str.c_str());
}

void NWindow::Border(char vertical, char horizontal)
{
    box(this->win, vertical, horizontal);
}
