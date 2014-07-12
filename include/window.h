#include <unistd.h>
#include <ncurses.h>
#include <utility>

class NWindow
{
    /* C-struct for the window handle */
    WINDOW *win;

    public:
        NWindow(int nlines, int ncols, int y, int x);
        ~NWindow();

        void Draw();
        void Border(char vertical = '.', char horizontal = '.');

        std::pair<int, int> GetXY();
        void SetXY(int x, int y);

        void SetAttributes(int attrib);

	void AddString(int x, int y, std::string str);

        WINDOW *GetWindow();
};
