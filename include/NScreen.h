#include <unistd.h>
#include <ncurses.h>
#include <utility>
#include "window.h"

class NScreen : public NWindow
{

public:

  NScreen();
  ~NScreen();
  
  void SetRaw();
  
  void KeyPad(bool b);
  
  void SetEcho(bool b);
  
  void Refresh();
  
  int GetKey();

protected:

private:

};
