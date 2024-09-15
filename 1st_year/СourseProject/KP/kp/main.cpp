#include <iostream>
#include <fstream>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include "gotoxy.h"
#include "verification_test.h"
#include "screen_saver.h"

using namespace std;

HWND hwn = GetConsoleWindow();
HDC hdc = GetDC(hwn);
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

typedef struct history
{
    string date, event;
}HISTORY;

// об авторе
void about_the_author()
{
    system("cls");
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED |BACKGROUND_BLUE|FOREGROUND_INTENSITY);
    gotoxy(10, 5);
    cout << "Курсовую работу выполнил:";
    gotoxy(10, 8);
    cout << "студент 1 курса группы ИВТ-232";
    gotoxy(10, 11);
    cout << "Костиков Леонид Константинович";
    gotoxy(10, 16);
    cout << "Нажмите 'y', чтобы вернуться в главное меню." << endl;
}

void fundamentals_of_algebra_of_logic(string theme, string path)
{
    system("cls");
    system("color 9F");
    cout << "\t\n\t\t\t\t\t\t   " << theme << endl;
    ifstream file;
    file.open(path);
    int i, j, array_size;
    int counter = 0;
    string line;
    while(getline(file, line))// подсчет количества строк в файле "date.txt"
        counter++;
    file.close();
    file.open(path);
    //cout << counter << endl; // вывод количества строк на экран терминала
    array_size = counter;
    string *theory = new string[array_size];
    for (i = 0; i < array_size; i++)
    {
        getline(file, theory[i]);
    }

    for (i = 0/*, j = 5*/; i < array_size; i++)
    {
        cout << theory[i] << endl;
    }

    delete [] theory;
    file.close();
}

void background_information_menu(int axioms_logic_position)
{
    system("cls");
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "\t\n\n\n\t\t\t\t\t\t    СПРАВОЧНАЯ ИНФОРМАЦИЯ" << endl;

    if (axioms_logic_position == 0)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE);
    gotoxy(50, 6);
    cout << "1. Базовые понятия и определения" << endl;

    if (axioms_logic_position == 1)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE);
    gotoxy(50, 8);
    cout << "2. Законы алгебры логики" << endl;

    if (axioms_logic_position == 2)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE);
    gotoxy(50, 10);
    cout << "3. Примеры логических задач" << endl;

    if (axioms_logic_position == 3)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE);
    gotoxy(50, 12);
    cout << "4. Логические элементы" << endl;

    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE);
}

void main_background_information_menu()
{
    int axioms_logic_key, axioms_logic_pos;
    cout << "\t\n\n\n\t\t\t\t\t\t    СПРАВОЧНАЯ ИНФОРМАЦИЯ" << endl;
    system("color 1F");
    background_information_menu(axioms_logic_pos);

    axioms_logic_pos = 0;

    do
    {
        axioms_logic_key = getch();
        switch(axioms_logic_key)
        {
            case 72:
            {
                axioms_logic_pos--;
                if (axioms_logic_pos < 0)
                {
                    axioms_logic_pos = 3;
                }
                background_information_menu(axioms_logic_pos);
                break;
            }
            case 80:
            {
                axioms_logic_pos++;
                if (axioms_logic_pos > 3)
                {
                    axioms_logic_pos = 0;
                }
                background_information_menu(axioms_logic_pos);
                break;
            }
            case 13:
            {
                switch(axioms_logic_pos)
                {
                    case 0:
                    {
                        fundamentals_of_algebra_of_logic("БАЗОВЫЕ ПОНЯТИЯ И ОПРЕДЕЛЕНИЯ", "axioms_of_the_algebra_of_logic\\Background_information\\Basic_concepts_and_definitions.txt");
                        break;
                    }
                    case 1:
                    {
                        fundamentals_of_algebra_of_logic("ЗАКОНЫ АЛГЕБРЫ ЛОГИКИ", "axioms_of_the_algebra_of_logic\\Background_information\\The_laws_of_algebra_logic.txt");
                        break;
                    }
                    case 2:
                    {
                        fundamentals_of_algebra_of_logic("ПРИМЕРЫ ЛОГИЧЕСКИХ ЗАДАЧ", "axioms_of_the_algebra_of_logic\\Background_information\\Examples_of_logical_tasks.txt");
                        break;
                    }
                    case 3:
                    {
                        fundamentals_of_algebra_of_logic("ЛОГИЧЕСКИЕ ЭЛЕМЕНТЫ", "axioms_of_the_algebra_of_logic\\Background_information\\Logical_elements.txt");
                        break;
                    }

                }

                break;
            }

        };
    }while(axioms_logic_key != 121);
}

void axioms_of_the_algebra_of_logic_menu(int axioms_logic_position)
{
    system("cls");
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "\t\n\n\n\t\t\t\t\t\t    АКСИОМЫ АЛГЕБРЫ ЛОГИКИ" << endl;

    if (axioms_logic_position == 0)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE);
    gotoxy(50, 6);
    cout << "1. Справочная информация" << endl;

    if (axioms_logic_position == 1)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE);
    gotoxy(50, 8);
    cout << "2. Проверочный тест" << endl;

    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE);
}

void main_axioms_of_the_algebra_of_logic_menu()
{
    int axioms_logic_key, axioms_logic_pos;
    cout << "\t\n\n\n\t\t\t\t\t\t    АКСИОМЫ АЛГЕБРЫ ЛОГИКИ" << endl;
    system("color 1F");
    axioms_of_the_algebra_of_logic_menu(axioms_logic_pos);

    axioms_logic_pos = 0;

    do
    {
        axioms_logic_key = getch();
        switch(axioms_logic_key)
        {
            case 72:
            {
                axioms_logic_pos--;
                if (axioms_logic_pos < 0)
                {
                    axioms_logic_pos = 1;
                }
                axioms_of_the_algebra_of_logic_menu(axioms_logic_pos);
                break;
            }
            case 80:
            {
                axioms_logic_pos++;
                if (axioms_logic_pos > 1)
                {
                    axioms_logic_pos = 0;
                }
                axioms_of_the_algebra_of_logic_menu(axioms_logic_pos);
                break;
            }
            case 13:
            {
                switch(axioms_logic_pos)
                {
                    case 0:
                    {
                        main_background_information_menu();
                        break;
                    }
                    case 1:
                    {
                        main_verification_test();
                        break;
                    }

                }

                break;
            }

        };
    }while(axioms_logic_key != 121);
}

void add_a_historical_event(int history_event)
{
    system("cls");
    system("color 9F");
    cout << "\t\n\t\t\t\t\t\t   ДОБАВИТЬ ИСТОРИЧЕСКОЕ СОБЫТИЕ" << endl;

    ofstream file_date;
    ofstream file_event;

    if(history_event == 0)
    {
        file_date.open("directory_of_historical_dates\\Russia_at_the_beginning_of_the_20th_century\\date.txt", ios::app);
        file_event.open("directory_of_historical_dates\\Russia_at_the_beginning_of_the_20th_century\\event.txt", ios::app);
    }
    else if(history_event == 1)
    {
        file_date.open("directory_of_historical_dates\\Revolutions_in_Russia_Civil_war_Building_a_new_society\\date.txt", ios::app);
        file_event.open("directory_of_historical_dates\\Revolutions_in_Russia_Civil_war_Building_a_new_society\\event.txt", ios::app);
    }
    else if(history_event == 2)
    {
        file_date.open("directory_of_historical_dates\\World_War_II_and_the_Patriotic_Wars\\date.txt", ios::app);
        file_event.open("directory_of_historical_dates\\World_War_II_and_the_Patriotic_Wars\\event.txt", ios::app);
    }
    else if(history_event == 3)
    {
        file_date.open("directory_of_historical_dates\\The_USSR_in_the_second_half_of_the_20th_century\\date.txt", ios::app);
        file_event.open("directory_of_historical_dates\\The_USSR_in_the_second_half_of_the_20th_century\\event.txt", ios::app);
    }
    else if(history_event == 4)
    {
        file_date.open("directory_of_historical_dates\\The_collapse_of_the_USSR_Education_of_the_CIS_Our_days\\date.txt", ios::app);
        file_event.open("directory_of_historical_dates\\The_collapse_of_the_USSR_Education_of_the_CIS_Our_days\\event.txt", ios::app);
    }

    string record_date, record_event;
    cout << "\n\tВведите дату исторического события: ";
    getline(cin, record_date);
    file_date << "\n" << record_date;

    cout << "\n\n\tВведите само историческое событие: ";
    getline(cin, record_event);
    file_event << "\n" << record_event;

    cout << "\n\t" << "Историческое событие добавлено!" << endl;

    file_date.close();
    file_event.close();
}

void search_by_historical_dates(int history_event)
{
    system("cls");
    system("color 9F");
    cout << "\t\n\t\t\t\t\t\t   ПОИСК ПО ИСТОРИЧЕСКИМ ДАТАМ" << endl;
    ifstream file_date;
    ifstream file_event;
    if(history_event == 0)
    {
        file_date.open("directory_of_historical_dates\\Russia_at_the_beginning_of_the_20th_century\\date.txt");
        file_event.open("directory_of_historical_dates\\Russia_at_the_beginning_of_the_20th_century\\event.txt");
    }
    else if(history_event == 1)
    {
        file_date.open("directory_of_historical_dates\\Revolutions_in_Russia_Civil_war_Building_a_new_society\\date.txt");
        file_event.open("directory_of_historical_dates\\Revolutions_in_Russia_Civil_war_Building_a_new_society\\event.txt");
    }
    else if(history_event == 2)
    {
        file_date.open("directory_of_historical_dates\\World_War_II_and_the_Patriotic_Wars\\date.txt");
        file_event.open("directory_of_historical_dates\\World_War_II_and_the_Patriotic_Wars\\event.txt");
    }
    else if(history_event == 3)
    {
        file_date.open("directory_of_historical_dates\\The_USSR_in_the_second_half_of_the_20th_century\\date.txt");
        file_event.open("directory_of_historical_dates\\The_USSR_in_the_second_half_of_the_20th_century\\event.txt");
    }
    else if(history_event == 4)
    {
        file_date.open("directory_of_historical_dates\\The_collapse_of_the_USSR_Education_of_the_CIS_Our_days\\date.txt");
        file_event.open("directory_of_historical_dates\\The_collapse_of_the_USSR_Education_of_the_CIS_Our_days\\event.txt");
    }

    int i, j, array_size;
    int counter = 0;
    string line;
    while(getline(file_date, line))// подсчет количества строк в файле "date.txt"
        counter++;

    file_date.close();

    if(history_event == 0)
        file_date.open("directory_of_historical_dates\\Russia_at_the_beginning_of_the_20th_century\\date.txt");
    else if(history_event == 1)
        file_date.open("directory_of_historical_dates\\Revolutions_in_Russia_Civil_war_Building_a_new_society\\date.txt");
    else if(history_event == 2)
        file_date.open("directory_of_historical_dates\\World_War_II_and_the_Patriotic_Wars\\date.txt");
    else if(history_event == 3)
        file_date.open("directory_of_historical_dates\\The_USSR_in_the_second_half_of_the_20th_century\\date.txt");
    else if(history_event == 4)
        file_date.open("directory_of_historical_dates\\The_collapse_of_the_USSR_Education_of_the_CIS_Our_days\\date.txt");

    //cout << counter << endl;
    array_size = counter;
    HISTORY *his = new HISTORY[array_size];
    string *date = new string[array_size];
    string *event = new string[array_size];
    for (i = 0; i < array_size; i++)
    {
        getline(file_date, date[i]);
        getline(file_event, event[i]);
    }
    for(i = 0; i < array_size; i++)
    {
        his[i] = {date[i], event[i]};
    }

    string required_date;
    int required_date_counter = 0;
    cout << "\n\tВведите дату: ";
    getline(cin, required_date);

    system("cls");
    cout << "\t\n\t\t\t\t\t\t   ПОИСК ПО ИСТОРИЧЕСКИМ ДАТАМ" << endl;

    for(i = 0; i < array_size; i++)
    {
        if(required_date == date[i])
        {
            required_date_counter++;
        }
    }

    // Вывод информации в виде таблицы
    for(i = 0; i < 151; i++)
        cout << "-";

    cout << "\n|\t\tДАТА" << "\t\t\t\t\t\t\t\t\tСОБЫТИЕ" << endl;
    for(i = 0; i < 151; i++)
        cout << "-";
    gotoxy(35, 3);
    cout << "|" << endl;
    gotoxy(150, 3);
    cout << "|" << endl;

    /////////////////////////////////////////

    for(i = 5; i <(required_date_counter * 2) + 5; i++)
    {
        gotoxy(0, i);
        cout << "|" << endl;
    }
    for(i = 5; i < (required_date_counter * 2) + 5; i++)
    {
        gotoxy(35, i);
        cout << "|" << endl;
    }

    for (i = 0, j = 5; i < array_size; i++)
    {
        if(required_date == his[i].date)
        {
            gotoxy(1, j);
            cout << his[i].date << endl;
            gotoxy(37, j);
            cout << his[i].event << endl;
            j += 2;
        }
    }

    //////////////////////////////////////////

    for(i = 5; i < (required_date_counter * 2) + 5; i++)
    {
        gotoxy(150, i);
        cout << "|" << endl;
    }

    for(i = 0; i < 151; i++)
        cout << "-";

    delete [] his;
    delete [] date;
    delete [] event;

    file_date.close();
    file_event.close();
}

void The_collapse_of_the_USSR_Education_of_the_CIS_Our_days()
{
    system("cls");
    system("color 9F");
    cout << "\t\n\t\t\t\t\t\t   РАСПАД СССР. ОБРАЗОВАНИЕ СНГ. НАШИ ДНИ" << endl;
    ifstream file_date;
    file_date.open("directory_of_historical_dates\\The_collapse_of_the_USSR_Education_of_the_CIS_Our_days\\date.txt");
    ifstream file_event("directory_of_historical_dates\\The_collapse_of_the_USSR_Education_of_the_CIS_Our_days\\event.txt");
    int i, j, array_size;
    int counter = 0;
    string line;
    while(getline(file_date, line))// подсчет количества строк в файле "date.txt"
        counter++;
    file_date.close();
    file_date.open("directory_of_historical_dates\\The_collapse_of_the_USSR_Education_of_the_CIS_Our_days\\date.txt");
    //cout << counter << endl;
    array_size = counter;
    HISTORY *his = new HISTORY[array_size];
    string *date = new string[array_size];
    string *event = new string[array_size];
    for (i = 0; i < array_size; i++)
    {
        getline(file_date, date[i]);
        getline(file_event, event[i]);
    }
    for(i = 0; i < array_size; i++)
    {
        his[i] = {date[i], event[i]};
    }
    for(i = 0; i < 151; i++)
        cout << "-";

    cout << "\n|\t\tДАТА" << "\t\t\t\t\t\t\t\t\tСОБЫТИЕ" << endl;
    for(i = 0; i < 151; i++)
        cout << "-";
    gotoxy(35, 3);
    cout << "|" << endl;
    gotoxy(150, 3);
    cout << "|" << endl;

    for(i = 5; i <(array_size * 2) + 5; i++)
    {
        gotoxy(0, i);
        cout << "|" << endl;
    }
    for(i = 5; i < (array_size * 2) + 5; i++)
    {
        gotoxy(35, i);
        cout << "|" << endl;
    }

    for (i = 0, j = 5; i < array_size; i++)
    {
        gotoxy(1, j);
        cout << his[i].date << endl;
        gotoxy(37, j);
        cout << his[i].event << endl;
        j += 2;
    }

    for(i = 5; i < (array_size * 2) + 5; i++)
    {
        gotoxy(150, i);
        cout << "|" << endl;
    }

    for(i = 0; i < 151; i++)
        cout << "-";

    delete [] his;
    delete [] date;
    delete [] event;

    file_date.close();
    file_event.close();
}

void The_USSR_in_the_second_half_of_the_20th_century()
{
    system("cls");
    system("color 9F");
    cout << "\t\n\t\t\t\t\t\t    СССР ВО ВТОРОЙ ПОЛОВИНЕ 20-ГО ВЕКА" << endl;
    ifstream file_date;
    file_date.open("directory_of_historical_dates\\The_USSR_in_the_second_half_of_the_20th_century\\date.txt");
    ifstream file_event("directory_of_historical_dates\\The_USSR_in_the_second_half_of_the_20th_century\\event.txt");
    int i, j, array_size;
    int counter = 0;
    string line;
    while(getline(file_date, line))// подсчет количества строк в файле "date.txt"
        counter++;
    file_date.close();
    file_date.open("directory_of_historical_dates\\The_USSR_in_the_second_half_of_the_20th_century\\date.txt");
    //cout << counter << endl;
    array_size = counter;
    HISTORY *his = new HISTORY[array_size];
    string *date = new string[array_size];
    string *event = new string[array_size];
    for (i = 0; i < array_size; i++)
    {
        getline(file_date, date[i]);
        getline(file_event, event[i]);
    }
    for(i = 0; i < array_size; i++)
    {
        his[i] = {date[i], event[i]};
    }
    for(i = 0; i < 151; i++)
        cout << "-";

    cout << "\n|\t\tДАТА" << "\t\t\t\t\t\t\t\t\tСОБЫТИЕ" << endl;
    for(i = 0; i < 151; i++)
        cout << "-";
    gotoxy(35, 3);
    cout << "|" << endl;
    gotoxy(150, 3);
    cout << "|" << endl;

    for(i = 5; i <(array_size * 2) + 5; i++)
    {
        gotoxy(0, i);
        cout << "|" << endl;
    }
    for(i = 5; i < (array_size * 2) + 5; i++)
    {
        gotoxy(35, i);
        cout << "|" << endl;
    }

    for (i = 0, j = 5; i < array_size; i++)
    {
        gotoxy(1, j);
        cout << his[i].date << endl;
        gotoxy(37, j);
        cout << his[i].event << endl;
        j += 2;
    }

    for(i = 5; i < (array_size * 2) + 5; i++)
    {
        gotoxy(150, i);
        cout << "|" << endl;
    }

    for(i = 0; i < 151; i++)
        cout << "-";

    delete [] his;
    delete [] date;
    delete [] event;

    file_date.close();
    file_event.close();
}

void World_War_II_and_the_Patriotic_Wars()
{
    system("cls");
    system("color 9F");
    cout << "\t\n\t\t\t\t\t\t    ВТОРАЯ МИРОВАЯ И ОТЕЧЕСТВЕННАЯ ВОЙНЫ" << endl;
    ifstream file_date;
    file_date.open("directory_of_historical_dates\\World_War_II_and_the_Patriotic_Wars\\date.txt");
    ifstream file_event("directory_of_historical_dates\\World_War_II_and_the_Patriotic_Wars\\event.txt");
    int i, j, array_size;
    int counter = 0;
    string line;
    while(getline(file_date, line))// подсчет количества строк в файле "date.txt"
        counter++;
    file_date.close();
    file_date.open("directory_of_historical_dates\\World_War_II_and_the_Patriotic_Wars\\date.txt");
    //cout << counter << endl;
    array_size = counter;
    HISTORY *his = new HISTORY[array_size];
    string *date = new string[array_size];
    string *event = new string[array_size];
    for (i = 0; i < array_size; i++)
    {
        getline(file_date, date[i]);
        getline(file_event, event[i]);
    }
    for(i = 0; i < array_size; i++)
    {
        his[i] = {date[i], event[i]};
    }
    for(i = 0; i < 151; i++)
        cout << "-";

    cout << "\n|\t\tДАТА" << "\t\t\t\t\t\t\t\t\tСОБЫТИЕ" << endl;
    for(i = 0; i < 151; i++)
        cout << "-";
    gotoxy(35, 3);
    cout << "|" << endl;
    gotoxy(150, 3);
    cout << "|" << endl;

    for(i = 5; i <(array_size * 2) + 5; i++)
    {
        gotoxy(0, i);
        cout << "|" << endl;
    }
    for(i = 5; i < (array_size * 2) + 5; i++)
    {
        gotoxy(35, i);
        cout << "|" << endl;
    }

    for (i = 0, j = 5; i < array_size; i++)
    {
        gotoxy(1, j);
        cout << his[i].date << endl;
        gotoxy(37, j);
        cout << his[i].event << endl;
        j += 2;
    }

    for(i = 5; i < (array_size * 2) + 5; i++)
    {
        gotoxy(150, i);
        cout << "|" << endl;
    }

    for(i = 0; i < 151; i++)
        cout << "-";

    delete [] his;
    delete [] date;
    delete [] event;

    file_date.close();
    file_event.close();
}

void Revolutions_in_Russia_Civil_war_Building_a_new_society()
{
    system("cls");
    system("color 9F");
    cout << "\t\n\t\t\t\t\tРЕВОЛЮЦИИ В РОССИИ. ГРАЖДАНСКАЯ ВОЙНА. СТРОИТЕЛЬСТВО НОВОГО ОБЩЕСТВА" << endl;
    ifstream file_date;
    file_date.open("directory_of_historical_dates\\Revolutions_in_Russia_Civil_war_Building_a_new_society\\date.txt");
    ifstream file_event("directory_of_historical_dates\\Revolutions_in_Russia_Civil_war_Building_a_new_society\\event.txt");
    int i, j, array_size;
    int counter = 0;
    string line;
    while(getline(file_date, line))// подсчет количества строк в файле "date.txt"
        counter++;
    file_date.close();
    file_date.open("directory_of_historical_dates\\Revolutions_in_Russia_Civil_war_Building_a_new_society\\date.txt");
    //cout << counter << endl;
    array_size = counter;
    HISTORY *his = new HISTORY[array_size];
    string *date = new string[array_size];
    string *event = new string[array_size];
    for (i = 0; i < array_size; i++)
    {
        getline(file_date, date[i]);
        getline(file_event, event[i]);
    }
    for(i = 0; i < array_size; i++)
    {
        his[i] = {date[i], event[i]};
    }
    for(i = 0; i < 151; i++)
        cout << "-";

    cout << "\n|\t\tДАТА" << "\t\t\t\t\t\t\t\t\tСОБЫТИЕ" << endl;
    for(i = 0; i < 151; i++)
        cout << "-";
    gotoxy(35, 3);
    cout << "|" << endl;
    gotoxy(150, 3);
    cout << "|" << endl;

    for(i = 5; i <(array_size * 2) + 5; i++)
    {
        gotoxy(0, i);
        cout << "|" << endl;
    }
    for(i = 5; i < (array_size * 2) + 5; i++)
    {
        gotoxy(35, i);
        cout << "|" << endl;
    }

    for (i = 0, j = 5; i < array_size; i++)
    {
        gotoxy(1, j);
        cout << his[i].date << endl;
        gotoxy(37, j);
        cout << his[i].event << endl;
        j += 2;
    }

    for(i = 5; i < (array_size * 2) + 5; i++)
    {
        gotoxy(150, i);
        cout << "|" << endl;
    }

    for(i = 0; i < 151; i++)
        cout << "-";

    delete [] his;
    delete [] date;
    delete [] event;

    file_date.close();
    file_event.close();
}


void Russia_at_the_beginning_of_the_20th_century()
{
    system("cls");
    system("color 9F");
    cout << "\t\n\t\t\t\t\t\t    РОССИЯ В ПЕРВОЙ ПОЛОВИНЕ 20-ГО ВЕКА" << endl;
    ifstream file_date;
    file_date.open("directory_of_historical_dates\\Russia_at_the_beginning_of_the_20th_century\\date.txt");
    ifstream file_event("directory_of_historical_dates\\Russia_at_the_beginning_of_the_20th_century\\event.txt");
    int i, j, array_size;
    int counter = 0;
    string line;
    while(getline(file_date, line))// подсчет количества строк в файле "date.txt"
        counter++;
    file_date.close();
    file_date.open("directory_of_historical_dates\\Russia_at_the_beginning_of_the_20th_century\\date.txt");
    //cout << counter << endl;
    array_size = counter;
    HISTORY *his = new HISTORY[array_size];
    string *date = new string[array_size];
    string *event = new string[array_size];
    for (i = 0; i < array_size; i++)
    {
        getline(file_date, date[i]);
        getline(file_event, event[i]);
    }
    for(i = 0; i < array_size; i++)
    {
        his[i] = {date[i], event[i]};
    }
    for(i = 0; i < 151; i++)
        cout << "-";

    cout << "\n|\t\tДАТА" << "\t\t\t\t\t\t\t\t\tСОБЫТИЕ" << endl;
    for(i = 0; i < 151; i++)
        cout << "-";
    gotoxy(35, 3);
    cout << "|" << endl;
    gotoxy(150, 3);
    cout << "|" << endl;

    for(i = 5; i <(array_size * 2) + 5; i++)
    {
        gotoxy(0, i);
        cout << "|" << endl;
    }
    for(i = 5; i < (array_size * 2) + 5; i++)
    {
        gotoxy(35, i);
        cout << "|" << endl;
    }

    for (i = 0, j = 5; i < array_size; i++)
    {
        gotoxy(1, j);
        cout << his[i].date << endl;
        gotoxy(37, j);
        cout << his[i].event << endl;
        j += 2;
    }

    for(i = 5; i < (array_size * 2) + 5; i++)
    {
        gotoxy(150, i);
        cout << "|" << endl;
    }

    for(i = 0; i < 151; i++)
        cout << "-";

    delete [] his;
    delete [] date;
    delete [] event;

    file_date.close();
    file_event.close();
}

void historical_events(int history_event)
{
    if(history_event == 0)
        Russia_at_the_beginning_of_the_20th_century();
    else if(history_event == 1)
        Revolutions_in_Russia_Civil_war_Building_a_new_society();
    else if(history_event == 2)
        World_War_II_and_the_Patriotic_Wars();
    else if(history_event == 3)
        The_USSR_in_the_second_half_of_the_20th_century();
    else if(history_event == 4)
        The_collapse_of_the_USSR_Education_of_the_CIS_Our_days();
}

void directory_of_historical_dates_menu(int history_position)
{
    system("cls");
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_INTENSITY);
    cout << "\t\n\n\n\t\t\t\t\t\t    СПРАВОЧНИК ИСТОРИЧЕСКИХ ДАТ" << endl;

    if (history_position == 0)
    {
        SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    gotoxy(50, 6);
    cout << "1. Показать даты исторических событий" << endl;

    if (history_position == 1)
    {
        SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    gotoxy(50, 8);
    cout << "2. Поиск по датам исторических событий" << endl;

    if (history_position == 2)
    {
        SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    gotoxy(50, 10);
    cout << "3. Добавить историческое событие" << endl;

    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_INTENSITY);

}

void main_directory_of_historical_dates_menu(int history_event)
{
    int history_key, history_pos;
    cout << "\t\n\n\n\t\t\t\t\t\t    СПРАВОЧНИК ИСТОРИЧЕСКИХ ДАТ" << endl;
    system("color 9F");
    directory_of_historical_dates_menu(history_pos);

    history_pos = 0;

    do
    {
        history_key = getch();
        switch(history_key)
        {
            case 72:
            {
                history_pos--;
                if (history_pos < 0)
                {
                    history_pos = 2;
                }
                directory_of_historical_dates_menu(history_pos);
                break;
            }
            case 80:
            {
                history_pos++;
                if (history_pos > 2)
                {
                    history_pos = 0;
                }
                directory_of_historical_dates_menu(history_pos);
                break;
            }
            case 13:
            {
                switch(history_pos)
                {
                    case 0:
                    {
                        historical_events(history_event);
                        break;
                    }
                    case 1:
                    {
                        search_by_historical_dates(history_event);
                        break;
                    }
                    case 2:
                    {
                        add_a_historical_event(history_event);
                        break;
                    }

                }

                break;
            }

        };
    }while(history_key != 121);
}

// справочник исторических дат
void history_menu(int history_position)
{
    system("cls");
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_INTENSITY);
    cout << "\t\n\n\n\t\t\t\t\t\t    СПРАВОЧНИК ИСТОРИЧЕСКИХ ДАТ" << endl;

    if (history_position == 0)
    {
        SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    gotoxy(50, 6);
    cout << "1. Россия в первой половине 20-го века" << endl;

    if (history_position == 1)
    {
        SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    gotoxy(50, 8);
    cout << "2. Революции в России. Гражданская война. Строительство нового общества" << endl;

    if (history_position == 2)
    {
        SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    gotoxy(50, 10);
    cout << "3. Вторая мировая и Отечественная войны" << endl;

    if (history_position == 3)
    {
        SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    gotoxy(50, 12);
    cout << "4. СССР во второй половине 20-го века" << endl;

    if (history_position == 4)
    {
        SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_INTENSITY);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    gotoxy(50, 14);
    cout << "5. Распад СССР. Образование СНГ. Наши дни" << endl;

    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
}

void main_history_menu()
{
    int history_key, history_pos;
    cout << "\t\n\n\n\t\t\t\t\t\t    СПРАВОЧНИК ИСТОРИЧЕСКИХ ДАТ" << endl;
    system("color 9F");
    history_menu(history_pos);

    history_pos = 0;

    do
    {
        history_key = getch();
        switch(history_key)
        {
            case 72:
            {
                history_pos--;
                if (history_pos < 0)
                {
                    history_pos = 4;
                }
                history_menu(history_pos);
                break;
            }
            case 80:
            {
                history_pos++;
                if (history_pos > 4)
                {
                    history_pos = 0;
                }
                history_menu(history_pos);
                break;
            }
            case 13:
            {
                switch(history_pos)
                {
                    case 0:
                    {
                        main_directory_of_historical_dates_menu(history_pos);
                        break;
                    }
                    case 1:
                    {
                        main_directory_of_historical_dates_menu(history_pos);
                        break;
                    }
                    case 2:
                    {
                        main_directory_of_historical_dates_menu(history_pos);
                        break;
                    }
                    case 3:
                    {
                        main_directory_of_historical_dates_menu(history_pos);
                        break;
                    }
                    case 4:
                    {
                        main_directory_of_historical_dates_menu(history_pos);
                        break;
                    }

                }

                break;
            }

        };
    }while(history_key != 121);
}

// вывод главного меню на консоль
void main_menu(int position)
{
    system("cls");
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "\t\n\n\n\t\t\t\t\t\t    КУРСОВОЙ ПРОЕКТ" << endl;

    if (position == 0)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED |BACKGROUND_BLUE|FOREGROUND_INTENSITY | COMMON_LVB_UNDERSCORE);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);
    gotoxy(50, 6);
    cout << "1. Справочник исторических дат" << endl;

    if (position == 1)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE | FOREGROUND_INTENSITY | COMMON_LVB_UNDERSCORE);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);
    gotoxy(50, 8);
    cout << "2. Аксиомы алгебры логики" << endl;

    if (position == 2)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY | COMMON_LVB_UNDERSCORE);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);
    gotoxy(50, 10);
    cout << "3. Заставка" << endl;

    if (position == 3)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE | FOREGROUND_INTENSITY | COMMON_LVB_UNDERSCORE);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);
    gotoxy(50, 12);
    cout << "4. Об авторе" << endl;

    if (position == 4)
    {
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE | FOREGROUND_INTENSITY | COMMON_LVB_UNDERSCORE);
    }
    else SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);
    gotoxy(50, 14);
    cout << "5. Выход" << endl;

    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE);
}


int main()
{
    SetConsoleTitle("KP Kostikov L. K. IVT-232"); //заголовок консоли

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "RUS");
    int key, pos;
    cout << "\t\n\n\n\t\t\t\t\t\t    КУРСОВОЙ ПРОЕКТ" << endl;
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
                    pos = 4;
                }
                main_menu(pos);
                break;
            }
            case 80:
            {
                pos++;
                if (pos > 4)
                {
                    pos = 0;
                }
                main_menu(pos);
                break;
            }
            case 121:
            {
                pos++;
                if (pos > 4)
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
                        main_history_menu();
                        break;
                    }
                    case 1:
                    {
                        main_axioms_of_the_algebra_of_logic_menu();
                        break;
                    }
                    case 2:
                    {
                        screen_saver();
                        break;
                    }
                    case 3:
                    {
                        about_the_author();
                        break;
                    }
                    case 4:
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
