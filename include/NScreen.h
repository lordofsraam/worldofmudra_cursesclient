#include <unistd.h>
#include <ncurses.h>
#include <utility>

class NScreen
{

public:

  NScreen();
  ~NScreen();

protected:

private:

  WINDOW* screen;

};
