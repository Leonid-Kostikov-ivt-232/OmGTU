#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include "uravnenie.h"
#include "integral.h"
#include "screen_saver.h"

using namespace std;

HWND hwn = GetConsoleWindow();
HDC hdc = GetDC(hwn);
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
HPEN pen1 = CreatePen(PS_DOT, 3, RGB(255, 255, 255));
HPEN pen2 = CreatePen(PS_DOT, 3, RGB(255, 255, 0));
HPEN pen3 = CreatePen(PS_DOT, 3, RGB(255, 0, 0));
HPEN pen4 = CreatePen(PS_DOT, 3, RGB(0, 255, 0));
HPEN pen5 = CreatePen(PS_DOT, 2, RGB(100, 10, 10));
HBRUSH brush1 = CreateSolidBrush (RGB(255,0,0));
WNDCLASS w;
RECT rect;
WORD x11, x22, x33, x44, x_1, x_2, x_3, x_4, xx;
WORD y11, y22, y33, y44, y_1, y_2, y_3, y_4, yy;
WORD zero;
WORD function1, function2;
WORD return_to_the_main_menu;
TCHAR str[100];

/*// ���������� ������ ����
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(h, coord);
}*/

// �� ������
void about_the_author()
{
    system("cls");
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED |BACKGROUND_BLUE|FOREGROUND_INTENSITY);
    gotoxy(10, 5);
    cout << "��������-���������� ������ ��������:";
    gotoxy(10, 8);
    cout << "������� 1 ����� ������ ���-232";
    gotoxy(10, 11);
    cout << "�������� ������ ��������������";
    gotoxy(10, 16);
    cout << "������� 'y', ����� ��������� � ������� ����." << endl;
}

int integral_v_16()
{
    system("cls");
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED |BACKGROUND_BLUE|FOREGROUND_INTENSITY);
    float a, b, n, h1, metod, integral;
    cout << "\t\n\n\t\t\t\t\t��������: I(sqrt(x) * sin(x1))dx" << endl;
    gotoxy(10, 5);
    cout << "������� �������� a (������ ��������� [a, b]): ";
    gotoxy(10, 8);
    cout << "������� �������� b (����� ��������� [a, b]): ";
    gotoxy(10, 11);
    cout << "������� �������� n (���������� ������ (n > 50)): ";
    gotoxy(10, 14);
    cout << "�������� ����� ������� ����������� ��������� (1 - ����� ����������� ���������������, 2 - ����� ��������):  ";
    gotoxy(10, 17);
    cout << "�����: ";
    gotoxy(56, 5);
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    cin >> a;
    gotoxy(56, 8);
    cin >> b;
    gotoxy(59, 11);
    cin >> n;
    gotoxy(116, 14);
    cin >> metod;
    h1 = length(a, b, n);
    if (metod == 1)
        integral = the_method_of_central_rectangles(a, b, n, h1);
    else if (metod == 2)
        integral = the_trapezoid_method(a, b, n, h1);

    /*h1 = length(a, b, n);
    integral_1 = the_trapezoid_method(a, b, n, h1);
    integral_2 = the_method_of_central_rectangles(a, b, n, h1);

    cout << "integral_1: " << integral_1 << endl;
    cout << "integral_2: " << integral_1 << endl;*/
    gotoxy(17, 17);
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    cout << integral;
    gotoxy(10, 22);
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "������� 'y', ����� ��������� � ������� ����." << endl;
    return 0;
}

// ���������. ������� 14
int urav()
{
    system("cls");
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED |BACKGROUND_BLUE|FOREGROUND_INTENSITY);
    cout << "\t\n\n\t\t\t\t   ���������: 5 * pow(x, 2) - 2 * x * log(x) - 7" << endl;
    float a, b, c, metod;
    gotoxy(10, 5);
    cout << "������� �������� a (������ ��������� [a, b]): ";
    gotoxy(10, 8);
    cout << "������� �������� b (����� ��������� [a, b]): ";
    gotoxy(10, 11);
    cout << "�������� ����� ������� ��������� (1 - ����� ��������, 2 - ����� ����):  ";
    gotoxy(10, 14);
    cout << "�����: ";
    gotoxy(56, 5);
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    cin >> a;
    gotoxy(56, 8);
    cin >> b;
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    gotoxy(81, 11);
    cin >> metod;

    if (metod == 1)
        c = metod_besektsii(a, b);
    else if (metod == 2)
        c = metod_hord(a, b);

    gotoxy(17, 14);
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    cout << c << endl;
    gotoxy(10, 17);
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "������� 'y', ����� ��������� � ������� ����." << endl;
    return 0;
}

// ������������ � ����������� ��������
float max_min(float M[20], float *min_n) {
    int i, k;
    float n = 18;
    float max_n = M[0];
    *min_n = M[0];

    for (i = 0; i < n; i++) {
        if (M[i] > max_n) {
            max_n = M[i];
        }
    }

     for (i = 0; i < n; i++) {
        if (M[i] < *min_n) {
            *min_n = M[i];
        }
    }

    return max_n;
}

void table()
{
    system("cls");
    float a, b, x[20], n, f1[20], f2[20], dx, f1min, f1max, f2min, f2max;
    int i, key;
    a = 1;
    b = 4;
    n = 18;
	x[0] = a;
	dx = fabs(b - a) / (n - 1);
	SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
	printf(" --------------------------------------- \n");
    printf("|   i   |    x    |    f1    |    f2    |\n");
    printf("|---------------------------------------|\n");

    for (i = 0; i < n; ++i)
    {
        f1[i] = exp(-x[i]) * log10(sqrt(x[i] + 1));
        f2[i] = x[i] + sin(x[i]);
        x[i+1] = x[i] + dx;
    }

    f1max = max_min(f1, &f1min);
    f2max = max_min(f2, &f2min);

    for (i = 0; i < n; ++i)
    {
        if (i < 10)
        {
            SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
            printf("|   %d   |", i);
            printf(" %1.5f |",  x[i]);
            if(f1[i] == f1min)
            {
                SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
            }
            if(f1[i] == f1max)
            {
                SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY);
            }
            printf("  %1.5f ", f1[i]);
            SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
            printf("|");
            if(f2[i] == f2min)
            {
                SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
            }
            printf("  %1.5f ", f2[i]);
            SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
            printf("|\n");
        }
        if (i > 10)
        {
            SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
            printf("|   %d  |", i);
            printf(" %1.5f |",  x[i]);
            if(f1[i] == f1min)
            {
                SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
            }
            if(f1[i] == f1max)
            {
                SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY);
            }
            printf("  %1.5f ", f1[i]);
            SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
            printf("|");
            if(f2[i] == f2min)
            {
                SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
            }
            if(f2[i] == f2max)
            {
                SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY);
            }
            printf("  %1.5f ", f2[i]);
            SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
            printf("|\n");
        }
		//x[i+1] = x[i] + dx;
    }

    printf("|---------------------------------------|\n");
    SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    printf("|  min  |         |  %1.5f |  %1.5f |\n", f1min, f2min);
    SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
    printf("|---------------------------------------|\n");
    SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    printf("|  max  |         |  %1.5f |  %1.5f |\n", f1max, f2max);
    SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
    printf(" --------------------------------------- \n");

    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED |BACKGROUND_BLUE|FOREGROUND_INTENSITY);
    cout << "\n������� 'y', ����� ��������� � ������� ����." << endl;

}

// �������
void graph()
{
    float a, b, x[20], n, f1[20], f2[20], dx;
    int i, key;
    a = 1;
    b = 4;
    n = 18;
	x[0] = a;
	dx = fabs(b - a) / (n - 1);
    bool first = true;
    system("cls");
    GetClientRect(hwn, &rect);
    const int c = rect.right / 2, d = rect.bottom/ 2, k = 100;
    SelectObject(hdc, pen2);
    MoveToEx(hdc, 0, d, NULL); LineTo(hdc, c * k, d); // ��� X
    MoveToEx(hdc, c, 0, NULL); LineTo(hdc, c, k * d); // ��� Y

    // ����� (����) ������� ���������
    SelectObject(hdc, pen5);
    MoveToEx(hdc, c, d, NULL);
    LineTo(hdc, c + 1, d);
    LineTo(hdc, c - 1, d);
    MoveToEx(hdc, c, d, NULL);
    LineTo(hdc, c, d + 1);
    LineTo(hdc, c, d - 1);

    for (i = 1; i <= 4; ++i)
    {
        //����� �� ��� �
        SelectObject(hdc, pen5);
        MoveToEx(hdc, c + k * i, d, NULL);
        LineTo(hdc, c + k * i, d + 5);
        LineTo(hdc, c + k * i, d - 5);

        MoveToEx(hdc, c - k * i, d, NULL);
        LineTo(hdc, c - k * i, d + 5);
        LineTo(hdc, c - k * i, d - 5);

        // ����� �� ��� Y
        MoveToEx(hdc, c, d + k * i, NULL);
        LineTo(hdc, c + 5, d + k * i);
        LineTo(hdc, c - 5, d + k * i);

        MoveToEx(hdc, c, d - k * i, NULL);
        LineTo(hdc, c + 5, d - k * i);
        LineTo(hdc, c - 5, d - k * i);

    }

    for (i = 0; i < n; ++i)
    {
        f1[i] = exp(-x[i]) * log10(sqrt(x[i] + 1));
        x[i+1] = x[i] + dx;

        if (first)
        {
            SelectObject(hdc, pen3);
            MoveToEx(hdc, c + k * x[i], d - k * f1[i], NULL);
            first = false;
        }
        else
        {
            LineTo(hdc, c + k * x[i], d - k * f1[i]);
        }
    }

    first = true;
    for (i = 0; i < n; ++i)
    {
        f2[i] = x[i] + sin(x[i]);
        x[i+1] = x[i] + dx;
        if (first)
        {
            SelectObject(hdc, pen4);
            MoveToEx(hdc, c + k * x[i], d - k * f2[i], NULL);
            first = false;
        }
        else
        {
            LineTo(hdc, c + k * x[i], d - k * f2[i]);
        }
    }

    // ������� 1
    SetBkColor(hdc, RGB(255, 0, 0));
    SetTextColor(hdc, RGB(255, 255, 255));
    function1 = wsprintf(str, TEXT("%s"), "F1");
    TextOut(hdc, c + k * 1, d - 28, str, function1);
    // ������� 2
    SetBkColor(hdc, RGB(0, 255, 0));
    SetTextColor(hdc, RGB(255, 255, 255));
    function2 = wsprintf(str, TEXT("%s"), "F2");
    TextOut(hdc, c + k * 1, d - 250, str, function2);
    // ����
    SetBkColor(hdc, RGB(0, 30, 255));
    SetTextColor(hdc, RGB(255, 255, 255));
    zero = wsprintf(str, TEXT("%s"), "0");
    TextOut(hdc, c + 10, d + 11, str, zero);
    // ��� X
    xx = wsprintf(str, TEXT("%s"), "X");
    TextOut(hdc, c + k*6.5, d+11, str, xx);
    x44 = wsprintf(str, TEXT("%s"), "-4");
    TextOut(hdc, c + k*(-4), d+11, str, x44);
    x33 = wsprintf(str, TEXT("%s"), "-3");
    TextOut(hdc, c + k*(-3), d+11, str, x33);
    x22 = wsprintf(str, TEXT("%s"), "-2");
    TextOut(hdc, c + k*(-2), d+11, str, x22);
    x11 = wsprintf(str, TEXT("%s"), "-1");
    TextOut(hdc, c + k*(-1), d+11, str, x11);
    x_1 = wsprintf(str, TEXT("%s"), "1");
    TextOut(hdc, c + k*1, d+11, str, x_1);
    x_2 = wsprintf(str, TEXT("%s"), "2");
    TextOut(hdc, c + k*2, d+11, str, x_2);
    x_3 = wsprintf(str, TEXT("%s"), "3");
    TextOut(hdc, c + k*3, d+11, str, x_3);
    x_4 = wsprintf(str, TEXT("%s"), "4");
    TextOut(hdc, c + k*4, d+11, str, x_4);
    // ��� Y
    yy = wsprintf(str, TEXT("%s"), "Y");
    TextOut(hdc, c +11, d + k * -3.4, str, yy);
    y_4 = wsprintf(str, TEXT("%s"), "4");
    TextOut(hdc, c + 11, d + k *(-4), str, y_4);
    y_3 = wsprintf(str, TEXT("%s"), "3");
    TextOut(hdc, c + 11, d + k *(-3), str, y_3);
    y_2 = wsprintf(str, TEXT("%s"), "2");
    TextOut(hdc, c + 11, d + k * (-2), str, y_2);
    y_1 = wsprintf(str, TEXT("%s"), "1");
    TextOut(hdc, c + 11, d + k * (-1), str, y_1);
    y11 = wsprintf(str, TEXT("%s"), "-1");
    TextOut(hdc, c + 11, d + k * 1, str, y11);
    y22 = wsprintf(str, TEXT("%s"), "-2");
    TextOut(hdc, c + 11, d + k * 2, str, y22);
    y33 = wsprintf(str, TEXT("%s"), "-3");
    TextOut(hdc, c + 11, d + k * 3, str, y33);
    y44 = wsprintf(str, TEXT("%s"), "-4");
    TextOut(hdc, c +11, d + k * 4, str, y44);

    SetBkColor(hdc, RGB(0, 40, 255)); // ������ ��� ��� ������ � ����
    SetTextColor(hdc, RGB(255, 255, 255)); // ������ ��� ����� � ����
    return_to_the_main_menu = wsprintf(str, TEXT("%s"), "������� 'y', ����� ��������� � ������� ����.");
    TextOut(hdc, c - k * 4, d - k * -1.5, str, return_to_the_main_menu);

}

// ����� �������� ���� �� �������
void main_menu(int position)
{
    system("cls");
    cout << "\t\n\n\n\t\t\t\t\t    ��������-����������� ������" << endl;

    if (position == 0)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED |BACKGROUND_BLUE|FOREGROUND_INTENSITY | COMMON_LVB_UNDERSCORE);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);
    gotoxy(50, 6);
    cout << "1. �������" << endl;

    if (position == 1)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE | FOREGROUND_INTENSITY | COMMON_LVB_UNDERSCORE);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);
    gotoxy(50, 8);
    cout << "2. �������" << endl;

    if (position == 2)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY | COMMON_LVB_UNDERSCORE);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);
    gotoxy(50, 10);
    cout << "3. ���������" << endl;

    if (position == 3)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE | FOREGROUND_INTENSITY | COMMON_LVB_UNDERSCORE);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);
    gotoxy(50, 12);
    cout << "4. ��������" << endl;

    if (position == 4)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE | FOREGROUND_INTENSITY | COMMON_LVB_UNDERSCORE);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);
    gotoxy(50, 14);
    cout << "5. ��������" << endl;

    if (position == 5)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE | FOREGROUND_INTENSITY | COMMON_LVB_UNDERSCORE);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);
    gotoxy(50, 16);
    cout << "6. �� ������" << endl;

    if (position == 6)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE | FOREGROUND_INTENSITY | COMMON_LVB_UNDERSCORE);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);
    gotoxy(50, 18);
    cout << "7. �����" << endl;

    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);

    //cout << "\t\n\n\t\t\t\t1. �������" << endl;
    //cout << "\t\n\t\t\t\t2. �������" << endl;
    //cout << "\t\n\t\t\t\t3. ���������" << endl;
    //cout << "\t\n\t\t\t\t4. ��������" << endl;
    //cout << "\t\n\t\t\t\t5. ��������" << endl;
    //cout << "\t\n\t\t\t\t6. �� ������" << endl;
    //cout << "\t\n\t\t\t\t7. �����" << endl;
}

int main()
{
    SetConsoleTitle("RGR Kostikov L. K. IVT-232"); //��������� �������

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "RUS");
    int key, pos;
    cout << "\t\n\n\n\t\t\t\t\t    ��������-����������� ������" << endl;
    system("color 1F");
    main_menu(pos);

    pos = 0;

    do
    {
        key = getch();
        switch(key)
        {
            case 72:
            {
                pos--;
                if (pos < 0)
                {
                    pos = 6;
                }
                main_menu(pos);
                break;
            }
            case 80:
            {
                pos++;
                if (pos > 6)
                {
                    pos = 0;
                }
                main_menu(pos);
                break;
            }
            case 121:
            {
                pos++;
                if (pos > 6)
                {
                    pos = 0;
                }
                main_menu(pos);
                break;
            }
            case 13:
            {
                switch(pos)
                {
                    case 0:
                    {
                        table();
                        break;
                    }
                    case 1:
                    {
                        graph();
                        break;
                    }
                    case 2:
                    {
                        urav();
                        break;
                    }
                    case 3:
                    {
                        integral_v_16();
                        break;
                    }
                    case 4:
                    {
                        screen_saver();
                        break;
                    }
                    case 5:
                    {
                        about_the_author();
                        break;
                    }
                    case 6:
                    {
                        exit(1);
                        break;
                    }
                }

                break;
            }

        };
    }while(key != 27);

    return 0;
}
