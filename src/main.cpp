#include <cstdio>
#include <iostream>
#include <unistd.h>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <string>
#include <ncurses.h>
#include <NScreen.h>


int main(int argc, char **argv)
{
    std::vector<std::string> args(argv, argv+argc);

    NScreen main_screen;
    //main_screen.Raw();
    //main_screen.KeyPad(true);
    //main_screen.Echo(false);
    
    while (1)
    {
      main_screen.AddString(10, 10, "OHai!");
      main_screen.Refresh();
    }

    return EXIT_SUCCESS;
}
