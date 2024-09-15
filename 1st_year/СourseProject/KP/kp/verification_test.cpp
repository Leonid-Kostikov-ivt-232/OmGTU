#include <iostream>
#include <windows.h>
#include <string.h>
#include <locale>
#include "gotoxy.h"
#include "verification_test.h"

using namespace std;

extern HANDLE h;

int question_one(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ПРОВЕРОЧНЫЙ ТЕСТ" << endl;
    cout << endl;
	cout << "\t1. Что из перечисленного является объектом алгебры логики?" << endl;
	cout << endl;
	cout << "\ta.Информация\n\tb. Высказывание\n\tс. Система счисления\n\td. Логические операции" << endl;
	cout << endl;
	cout << "\tВаш ответ: ";
	cin >> *answer;
	if (*answer == "b")
        return 1;
    else
        return 0;
}

int question_two(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ПРОВЕРОЧНЫЙ ТЕСТ" << endl;
    cout << endl;
	cout << "\t2. Как в алгебре логики обозначаются высказывания?" << endl;
	cout << endl;
	cout << "\ta. Буквами\n\tb. Цифрами\n\tс. Буквами и цифрами\n" << endl;
	cout << endl;
	cout << "\tВаш ответ: ";
	cin >> *answer;
	if (*answer == "a")
        return 1;
    else
        return 0;
}

int question_three(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ПРОВЕРОЧНЫЙ ТЕСТ" << endl;
    cout << endl;
	cout << "\t   3. Выберите правильный вариант ответа.\n" << endl;
	cout << "\t   Как называется логическая операция ";
	cout << "ставящая в соответствие двум высказываниям новое высказывание," << endl;
	cout <<" являющееся истинным тогда и только тогда, когда оба исходных";
	cout << " высказывания истинны?" << endl;
	cout << endl;
	cout << "\ta. Конъюнкция\n\tb. Дизъюнкция\n\tс. Импликация\n\td. Эквиваленция" << endl;
	cout << endl;
	cout << "\tВаш ответ: ";
	cin >> *answer;
	if (*answer == "a")
        return 1;
    else
        return 0;
}

int question_four(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ПРОВЕРОЧНЫЙ ТЕСТ" << endl;
    cout << endl;
	cout << "\t   4. Выберите правильный вариант ответа.\n" << endl;
	cout << "\t   Как называется логическая операция ";
	cout << "которая двум высказываниям ставит в соответствие новое высказывание," << endl;
	cout <<" являющееся ложным тогда и только тогда, когда оба ";
	cout << "исходных высказывания ложны?" << endl;
	cout << endl;
	cout << "\ta. Конъюнкция\n\tb. Дизъюнкция\n\tс. Импликация\n\td. Эквиваленция" << endl;
	cout << endl;
	cout << "\tВаш ответ: ";
	cin >> *answer;
	if (*answer == "b")
        return 1;
    else
        return 0;
}

int question_five(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ПРОВЕРОЧНЫЙ ТЕСТ" << endl;
    cout << endl;
	cout << "\t   5. Выберите правильный вариант ответа.\n" << endl;
	cout << "\t   Как называется логическая операция ";
	cout << "ставящая в соответствие двум высказываниям новое, являющееся истинным " << endl;
	cout <<" когда оба исходных высказывания истины или оба ";
	cout << "исходных высказывания ложны?" << endl;
	cout << endl;
	cout << "\ta. Конъюнкция\n\tb. Дизъюнкция\n\tс. Импликация\n\td. Эквиваленция" << endl;
	cout << endl;
	cout << "\tВаш ответ: ";
	cin >> *answer;
	if (*answer == "d")
        return 1;
    else
        return 0;
}

int question_six(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ПРОВЕРОЧНЫЙ ТЕСТ" << endl;
    cout << endl;
	cout << "\t   6. Выберите правильный вариант ответа.\n" << endl;
	cout << "\t   Как называется логическая операция, которая ложна тогда и только тогда,";
	cout << " когда в начале (A) истино, а в конце (B) ложно. " << endl;
	cout << endl;
	cout << "\ta. Конъюнкция\n\tb. Дизъюнкция\n\tс. Импликация\n\td. Эквиваленция" << endl;
	cout << endl;
	cout << "\tВаш ответ: ";
	cin >> *answer;
	if (*answer == "c")
        return 1;
    else
        return 0;
}

int question_seven(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ПРОВЕРОЧНЫЙ ТЕСТ" << endl;
    cout << endl;
	cout << "\t7. К какому закону алгебры логики относится данная формула: ";
	cout << "А & (В v С) = (А & В) v (А & С) ?";
	cout << endl;
	cout << endl;
	cout << "\ta. К переместительному закону\n\tb. К сочетательному закону\n\tс. К распределительному закону" << endl;
	cout << endl;
	cout << "\tВаш ответ: ";
	cin >> *answer;
	if (*answer == "c")
        return 1;
    else
        return 0;
}

int question_eight(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ПРОВЕРОЧНЫЙ ТЕСТ" << endl;
    cout << endl;
	cout << "\t8. К какому закону алгебры логики относится данная формула: ";
	cout << "А & В = В & А ?";
	cout << endl;
	cout << endl;
	cout << "\ta. К переместительному закону\n\tb. К сочетательному закону\n\tс. К распределительному закону" << endl;
	cout << endl;
	cout << "\tВаш ответ: ";
	cin >> *answer;
	if (*answer == "a")
        return 1;
    else
        return 0;
}

int question_nine(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ПРОВЕРОЧНЫЙ ТЕСТ" << endl;
    cout << endl;
	cout << "\t9. К какому закону алгебры логики относится данная формула: ";
	cout << "(A v B) v C = A v (B v C) ?";
	cout << endl;
	cout << endl;
	cout << "\ta. К переместительному закону\n\tb. К сочетательному закону\n\tс. К распределительному закону" << endl;
	cout << endl;
	cout << "\tВаш ответ: ";
	cin >> *answer;
	if (*answer == "b")
        return 1;
    else
        return 0;
}

int question_ten(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ПРОВЕРОЧНЫЙ ТЕСТ" << endl;
    cout << endl;
	cout << "\t10. Упростите логическую формулу: НЕ(A & B | НЕ(С)) и выберите правильный ответ.";
	cout << endl;
	cout << endl;
	cout << "\ta. A v (B v C)\n\tb. (НЕ(A) | НЕ(B)) & C\n\tс. В & А" << endl;
	cout << endl;
	cout << "\tВаш ответ: ";
	cin >> *answer;
	if (*answer == "b")
        return 1;
    else
        return 0;
}

void summing_up_the_results(string answer1, string answer2, string answer3, string answer4, string answer5,
                            string answer6, string answer7, string answer8, string answer9, string answer10, int scores)
{
    cout << "\t\n\n\n\t\t\t    ПРОВЕРОЧНЫЙ ТЕСТ" << endl;
    cout << endl;
    cout << "\t1. Что из перечисленного является объектом алгебры логики?" << endl;
    cout << endl;
	cout << "\ta.Информация\n\tb. Высказывание\n\tс. Система счисления\n\td. Логические операции" << endl;
	cout << endl;
	cout << "\tВаш ответ: " << answer1 << endl;
	cout << endl;
	if (answer1 == "b")
        cout << "\tВерно! Правильный ответ: b" << endl;
    else
        cout << "\tНе верно! Правильный ответ: b" << endl;
    cout << endl;
    cout << "\t2. Как в алгебре логики обозначаются высказывания?" << endl;
	cout << endl;
	cout << "\ta. Буквами\n\tb. Цифрами\n\tс. Буквами и цифрами\n" << endl;
	cout << endl;
	cout << "\tВаш ответ: " << answer2 << endl;
	cout << endl;
    if (answer2 == "a")
        cout << "\tВерно! Правильный ответ: a" << endl;
    else
        cout << "\tНе верно! Правильный ответ: a" << endl;
    cout << endl;

	cout << "\t3. Выберите правильный вариант ответа.\n" << endl;
	cout << "\tКак называется логическая операция ";
	cout << "ставящая в соответствие двум высказываниям новое высказывание," << endl;
	cout <<" являющееся истинным тогда и только тогда, когда оба исходных";
	cout << " высказывания истинны?" << endl;
	cout << endl;
	cout << "\ta. Конъюнкция\n\tb. Дизъюнкция\n\tс. Импликация\n\td. Эквиваленция" << endl;
	cout << endl;
	cout << "\tВаш ответ: " << answer3 << endl;
	cout << endl;
    if (answer3 == "a")
        cout << "\tВерно! Правильный ответ: a" << endl;
    else
        cout << "\tНе верно! Правильный ответ: a" << endl;
    cout << endl;
    cout << "\t4. Выберите правильный вариант ответа.\n" << endl;
	cout << "\tКак называется логическая операция ";
	cout << "которая двум высказываниям ставит в соответствие новое высказывание," << endl;
	cout <<" являющееся ложным тогда и только тогда, когда оба ";
	cout << "исходных высказывания ложны?" << endl;
	cout << endl;
	cout << "\ta. Конъюнкция\n\tb. Дизъюнкция\n\tс. Импликация\n\td. Эквиваленция" << endl;
	cout << endl;
	cout << "\tВаш ответ: " << answer4 << endl;
	cout << endl;
    if (answer4 == "b")
        cout << "\tВерно! Правильный ответ: b" << endl;
    else
        cout << "\tНе верно! Правильный ответ: b" << endl;
    cout << endl;
    cout << "\t5. Выберите правильный вариант ответа.\n" << endl;
	cout << "\tКак называется логическая операция ";
	cout << "ставящая в соответствие двум высказываниям новое, являющееся истинным " << endl;
	cout <<" когда оба исходных высказывания истины или оба ";
	cout << "исходных высказывания ложны?" << endl;
	cout << endl;
	cout << "\ta. Конъюнкция\n\tb. Дизъюнкция\n\tс. Импликация\n\td. Эквиваленция" << endl;
	cout << endl;
	cout << "\tВаш ответ: " << answer5 << endl;
	cout << endl;
    if (answer5 == "d")
        cout << "\tВерно! Правильный ответ: d" << endl;
    else
        cout << "\tНе верно! Правильный ответ: d" << endl;
    cout << endl;
    cout << "\t6. Выберите правильный вариант ответа.\n" << endl;
	cout << "\tКак называется логическая операция, которая ложна тогда и только тогда,";
	cout << " когда в начале (A) истино, а в конце (B) ложно. " << endl;
	cout << endl;
	cout << "\ta. Конъюнкция\n\tb. Дизъюнкция\n\tс. Импликация\n\td. Эквиваленция" << endl;
	cout << endl;
	cout << "\tВаш ответ: " << answer6 << endl;
	cout << endl;
    if (answer6 == "c")
        cout << "\tВерно! Правильный ответ: c" << endl;
    else
        cout << "\tНе верно! Правильный ответ: c" << endl;
    cout << endl;
    cout << "\t7. К какому закону алгебры логики относится данная формула: ";
	cout << "А & (В v С) = (А & В) v (А & С) ?";
	cout << endl;
	cout << endl;
	cout << "\ta. К переместительному закону\n\tb. К сочетательному закону\n\tс. К распределительному закону" << endl;
	cout << endl;
	cout << "\tВаш ответ: " << answer7 << endl;
	cout << endl;
    if (answer7 == "c")
        cout << "\tВерно! Правильный ответ: c" << endl;
    else
        cout << "\tНе верно! Правильный ответ: c" << endl;
    cout << endl;
    cout << "\t8. К какому закону алгебры логики относится данная формула: ";
	cout << "А & В = В & А ?";
	cout << endl;
	cout << endl;
	cout << "\ta. К переместительному закону\n\tb. К сочетательному закону\n\tс. К распределительному закону" << endl;
	cout << endl;
	cout << "\tВаш ответ: " << answer8 << endl;
	cout << endl;
    if (answer8 == "a")
        cout << "\tВерно! Правильный ответ: a" << endl;
    else
        cout << "\tНе верно! Правильный ответ: a" << endl;
    cout << endl;
    cout << "\t9. К какому закону алгебры логики относится данная формула: ";
	cout << "(A v B) v C = A v (B v C) ?";
	cout << endl;
	cout << endl;
	cout << "\ta. К переместительному закону\n\tb. К сочетательному закону\n\tс. К распределительному закону" << endl;
	cout << endl;
	cout << "\tВаш ответ: " << answer9 << endl;
	cout << endl;
    if (answer9 == "b")
        cout << "\tВерно! Правильный ответ: b" << endl;
    else
        cout << "\tНе верно! Правильный ответ: b" << endl;
    cout << endl;
    cout << "\t10. Упростите логическую формулу: НЕ(A & B | НЕ(С)) и выберите правильный ответ.";
	cout << endl;
	cout << endl;
	cout << "\ta. A v (B v C)\n\tb. (НЕ(A) | НЕ(B)) & C\n\tс. В & А" << endl;
	cout << endl;
	cout << "\tВаш ответ: " << answer10 << endl;
	cout << endl;
    if (answer10 == "b")
        cout << "\tВерно! Правильный ответ: b" << endl;
    else
        cout << "\tНе верно! Правильный ответ: b" << endl;
    cout << endl;
    if(scores < 5)
    {
        if(scores == 0)
        {
            cout << "\tВы набрали " << scores << " баллов." << endl;
        }
        else if(scores == 1)
        {
            cout << "\tВы набрали " << scores << " балл." << endl;
        }
        else
        {
            cout << "\tВы набрали " << scores << " балла." << endl;
        }
        cout << endl;
        cout << "\tТест не сдан." << endl;
    }
    else if(scores >= 5 && scores <= 6)
    {
        cout << "\tВы набрали " << scores << " баллов." << endl;
        cout << endl;
        cout << "\tТест сдан, но вы можете лучше пройти тест." << endl;
    }
    else if(scores > 6 && scores <= 8)
    {
        cout << "\tВы набрали " << scores << " баллов." << endl;
        cout << endl;
        cout << "\tТест сдан. Вы хорошо прошли тест, но вы можете лучше." << endl;
    }
    else if(scores > 8 && scores <= 10)
    {
        cout << "\tВы набрали " << scores << " баллов." << endl;
        cout << endl;
        cout << "\tТест сдан. Вы молодец!" << endl;
    }
}


int main_verification_test()
{
    setlocale(LC_ALL, "RUS");
    system("cls");
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE | FOREGROUND_INTENSITY);
    int scores = 0;
    int result[10];
    string answer1, answer2, answer3, answer4, answer5;
    string answer6, answer7, answer8, answer9, answer10;
	result[0] = question_one(&answer1);
	system("cls");
	result[1] = question_two(&answer2);
	system("cls");
	result[2] = question_three(&answer3);
	system("cls");
	result[3] = question_four(&answer4);
	system("cls");
	result[4] = question_five(&answer5);
	system("cls");
	result[5] = question_six(&answer6);
	system("cls");
	result[6] = question_seven(&answer7);
	system("cls");
	result[7] = question_eight(&answer8);
	system("cls");
	result[8] = question_nine(&answer9);
	system("cls");
	result[9] = question_ten(&answer10);

	for(int i; i < 10; i++)
        scores += result[i];

    system("cls");
    summing_up_the_results(answer1, answer2, answer3, answer4, answer5,
                           answer6, answer7, answer8, answer9, answer10, scores);

	return 0;
}
