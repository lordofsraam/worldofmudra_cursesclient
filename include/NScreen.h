#include <unistd.h>
#include <ncurses.h>
#include <utility>
#include "window.h"

class NScreen : public NWindow
{

public:

  NScreen();
  ~NScreen();
  
  void Raw();
  void KeyPad(bool b);
  void Echo(bool b);
  void Refresh();

protected:

private:

};
