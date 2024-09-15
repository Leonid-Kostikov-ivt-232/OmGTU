#include <windows.h>
#include "gotoxy.h"

extern HANDLE h;

// координаты пункта меню
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(h, coord);
}
