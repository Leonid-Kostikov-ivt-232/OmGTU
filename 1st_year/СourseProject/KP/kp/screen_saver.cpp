#include <iostream>
#include <windows.h>
#include <conio.h>
#include "screen_saver.h"

using namespace std;

HWND hwn1 = GetConsoleWindow();
HDC hdc1 = GetDC(hwn1);
HANDLE h2 = GetStdHandle(STD_OUTPUT_HANDLE);
RECT rect1;
HPEN pen11 = CreatePen(PS_SOLID, 3, RGB(218, 164, 32)); // корпус корабля
HPEN pen22 = CreatePen(PS_SOLID, 1, RGB(0,0,0));
HPEN pen33 = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
HPEN pen44 = CreatePen(PS_SOLID, 2, RGB(255, 0, 0)); // флаг
HPEN pen55 = CreatePen(PS_DASH, 10, RGB(255, 255, 0)); // солнце
HBRUSH brush11 = CreateSolidBrush (RGB(0,60,230)); // волны
HBRUSH brush2 = CreateSolidBrush (RGB(255,255,0)); // солнце
HBRUSH brush3 = CreateSolidBrush (RGB(218, 164, 32));
HBRUSH brush4 = CreateSolidBrush (RGB(255, 0, 0)); // флаг
WORD The_ships_flag;
TCHAR ships_flag[7];

void sea_waves(int x, int y, int k/*, int l*/)
{
    int i, j;
    for(i = 0; i < 250; i++)
        {
            x += k;
            //y +=l;
            for (j = 0; j < 50; j++)
            {
                SetPixel(hdc1, x + j, y, RGB(255, 255, 255));
            }
        }
}

void ra(int x0, int y0)
{
    SelectObject(hdc1, pen55);
    SelectObject(hdc1, brush2);
    Ellipse(hdc1, x0, y0, x0 + 300, y0 + 300);
}

void korabl(int b)
{
    SelectObject(hdc1, pen11);
    SelectObject(hdc1, brush3);

    //корпус корабля
    MoveToEx(hdc1, 50 + b, 400, NULL);
    LineTo(hdc1, 500 + b, 400);

    //корпус корабля
    MoveToEx(hdc1, 70 + b, 420, NULL);
    LineTo(hdc1, 480 + b, 420);

    //мачта корабля
    MoveToEx(hdc1, 280 + b, 180, NULL);
    LineTo(hdc1, 280 + b, 380);

    //корпус корабля
    Rectangle(hdc1, 100 + b, 380, 450 + b, 450);
    MoveToEx(hdc1, 100 + b, 450, NULL);
    LineTo(hdc1, 450 + b, 450);
    LineTo(hdc1, 520 + b, 380);
    LineTo(hdc1, 30 + b, 380);
    LineTo(hdc1, 100 + b, 450);

    //парус
    SelectObject(hdc1, pen33);
    MoveToEx(hdc1, 280 + b, 220, NULL);
    LineTo(hdc1, 280 + b, 350);
    LineTo(hdc1, 450 + b, 350);
    LineTo(hdc1, 280 + b, 220);
    SetTextColor(hdc1, RGB(0, 0, 255)); // делает сам текст в цвет RGB(255,255,255)
    The_ships_flag = wsprintf(ships_flag, TEXT("%s"), "IVT-232");
    TextOut(hdc1, 300 + b, 300, ships_flag, The_ships_flag);

    //флаг
    SelectObject(hdc1, pen44);
    SelectObject(hdc1, brush4);
    Rectangle(hdc1, 282 + b, 185, 230 + b, 215);
}

void screen_saver()
{
    int i, j, x, y, key;
    while(key != 121)
    {
        x = 10;
        y = 450;
        system("color 97");
        GetClientRect(hwn1, &rect1);
        const int c = rect1.right,
        d = rect1.bottom;
        //ra(510, 50);
        SelectObject(hdc1, pen22);
        SelectObject(hdc1, brush11);
        Rectangle(hdc1, 0, d, c, 400);
        sea_waves(30, 460, 200);
        sea_waves(-100, 526, 200);
        sea_waves(30, 600, 200);
        sea_waves(-100, 666, 200);
        //korabl(0);
        j = 380;
        for(i = 0; i < 1400; i+=50)
        {
            j -= 50;
            if (j < 50)
                j = 50;
            system("cls");
            system("color 97");
            const int c = rect1.right,
            d = rect1.bottom;
            ra(510, j);
            SelectObject(hdc1, pen22);
            SelectObject(hdc1, brush11);
            Rectangle(hdc1, 0, d, c, 400);
            sea_waves(30, 460, 200);
            sea_waves(-100, 526, 200);
            sea_waves(30, 600, 200);
            sea_waves(-100, 666, 200);
            korabl(i);
            Sleep(500);
        }
        Sleep(500); // Задержка для анимации
        key = getch();
    }
}
