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
    main_screen.Raw(); // So we dont have to hit enter before keys get sent to the program.
    main_screen.KeyPad(true); // So we can catch keys like F1-12 
    main_screen.Echo(false); // So we don't have to see every keystroke appear on the screen.
    
    while (1)
    {
      main_screen.AddString(10, 10, "OHai!");
      main_screen.Refresh();
    }

    return EXIT_SUCCESS;
}
