#include <unistd.h>
#include <ncurses.h>
#include <utility>
#include <string>

class NWindow
{
  
public:
  NWindow(WINDOW* existing_window);
  NWindow(int nlines, int ncols, int y, int x);
  ~NWindow();

  void Draw();
  void Border(char vertical = '.', char horizontal = '.');

  std::pair<int, int> GetXY();
  void SetXY(int x, int y);

  void SetAttributes(int attrib);

  void AddString(int x, int y, std::string str);
  
  void Print(std::string str);
  
  void MoveCursor(int x, int y);

  WINDOW *GetWindow();
  
protected:
  
  /* C-struct for the window handle */
  WINDOW* win;
  
private:
  
};
