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
    cout << "\t\n\n\n\t\t\t    ����������� ����" << endl;
    cout << endl;
	cout << "\t1. ��� �� �������������� �������� �������� ������� ������?" << endl;
	cout << endl;
	cout << "\ta.����������\n\tb. ������������\n\t�. ������� ���������\n\td. ���������� ��������" << endl;
	cout << endl;
	cout << "\t��� �����: ";
	cin >> *answer;
	if (*answer == "b")
        return 1;
    else
        return 0;
}

int question_two(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ����������� ����" << endl;
    cout << endl;
	cout << "\t2. ��� � ������� ������ ������������ ������������?" << endl;
	cout << endl;
	cout << "\ta. �������\n\tb. �������\n\t�. ������� � �������\n" << endl;
	cout << endl;
	cout << "\t��� �����: ";
	cin >> *answer;
	if (*answer == "a")
        return 1;
    else
        return 0;
}

int question_three(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ����������� ����" << endl;
    cout << endl;
	cout << "\t   3. �������� ���������� ������� ������.\n" << endl;
	cout << "\t   ��� ���������� ���������� �������� ";
	cout << "�������� � ������������ ���� ������������� ����� ������������," << endl;
	cout <<" ���������� �������� ����� � ������ �����, ����� ��� ��������";
	cout << " ������������ �������?" << endl;
	cout << endl;
	cout << "\ta. ����������\n\tb. ����������\n\t�. ����������\n\td. ������������" << endl;
	cout << endl;
	cout << "\t��� �����: ";
	cin >> *answer;
	if (*answer == "a")
        return 1;
    else
        return 0;
}

int question_four(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ����������� ����" << endl;
    cout << endl;
	cout << "\t   4. �������� ���������� ������� ������.\n" << endl;
	cout << "\t   ��� ���������� ���������� �������� ";
	cout << "������� ���� ������������� ������ � ������������ ����� ������������," << endl;
	cout <<" ���������� ������ ����� � ������ �����, ����� ��� ";
	cout << "�������� ������������ �����?" << endl;
	cout << endl;
	cout << "\ta. ����������\n\tb. ����������\n\t�. ����������\n\td. ������������" << endl;
	cout << endl;
	cout << "\t��� �����: ";
	cin >> *answer;
	if (*answer == "b")
        return 1;
    else
        return 0;
}

int question_five(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ����������� ����" << endl;
    cout << endl;
	cout << "\t   5. �������� ���������� ������� ������.\n" << endl;
	cout << "\t   ��� ���������� ���������� �������� ";
	cout << "�������� � ������������ ���� ������������� �����, ���������� �������� " << endl;
	cout <<" ����� ��� �������� ������������ ������ ��� ��� ";
	cout << "�������� ������������ �����?" << endl;
	cout << endl;
	cout << "\ta. ����������\n\tb. ����������\n\t�. ����������\n\td. ������������" << endl;
	cout << endl;
	cout << "\t��� �����: ";
	cin >> *answer;
	if (*answer == "d")
        return 1;
    else
        return 0;
}

int question_six(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ����������� ����" << endl;
    cout << endl;
	cout << "\t   6. �������� ���������� ������� ������.\n" << endl;
	cout << "\t   ��� ���������� ���������� ��������, ������� ����� ����� � ������ �����,";
	cout << " ����� � ������ (A) ������, � � ����� (B) �����. " << endl;
	cout << endl;
	cout << "\ta. ����������\n\tb. ����������\n\t�. ����������\n\td. ������������" << endl;
	cout << endl;
	cout << "\t��� �����: ";
	cin >> *answer;
	if (*answer == "c")
        return 1;
    else
        return 0;
}

int question_seven(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ����������� ����" << endl;
    cout << endl;
	cout << "\t7. � ������ ������ ������� ������ ��������� ������ �������: ";
	cout << "� & (� v �) = (� & �) v (� & �) ?";
	cout << endl;
	cout << endl;
	cout << "\ta. � ����������������� ������\n\tb. � �������������� ������\n\t�. � ������������������ ������" << endl;
	cout << endl;
	cout << "\t��� �����: ";
	cin >> *answer;
	if (*answer == "c")
        return 1;
    else
        return 0;
}

int question_eight(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ����������� ����" << endl;
    cout << endl;
	cout << "\t8. � ������ ������ ������� ������ ��������� ������ �������: ";
	cout << "� & � = � & � ?";
	cout << endl;
	cout << endl;
	cout << "\ta. � ����������������� ������\n\tb. � �������������� ������\n\t�. � ������������������ ������" << endl;
	cout << endl;
	cout << "\t��� �����: ";
	cin >> *answer;
	if (*answer == "a")
        return 1;
    else
        return 0;
}

int question_nine(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ����������� ����" << endl;
    cout << endl;
	cout << "\t9. � ������ ������ ������� ������ ��������� ������ �������: ";
	cout << "(A v B) v C = A v (B v C) ?";
	cout << endl;
	cout << endl;
	cout << "\ta. � ����������������� ������\n\tb. � �������������� ������\n\t�. � ������������������ ������" << endl;
	cout << endl;
	cout << "\t��� �����: ";
	cin >> *answer;
	if (*answer == "b")
        return 1;
    else
        return 0;
}

int question_ten(string *answer)
{
    cout << "\t\n\n\n\t\t\t    ����������� ����" << endl;
    cout << endl;
	cout << "\t10. ��������� ���������� �������: ��(A & B | ��(�)) � �������� ���������� �����.";
	cout << endl;
	cout << endl;
	cout << "\ta. A v (B v C)\n\tb. (��(A) | ��(B)) & C\n\t�. � & �" << endl;
	cout << endl;
	cout << "\t��� �����: ";
	cin >> *answer;
	if (*answer == "b")
        return 1;
    else
        return 0;
}

void summing_up_the_results(string answer1, string answer2, string answer3, string answer4, string answer5,
                            string answer6, string answer7, string answer8, string answer9, string answer10, int scores)
{
    cout << "\t\n\n\n\t\t\t    ����������� ����" << endl;
    cout << endl;
    cout << "\t1. ��� �� �������������� �������� �������� ������� ������?" << endl;
    cout << endl;
	cout << "\ta.����������\n\tb. ������������\n\t�. ������� ���������\n\td. ���������� ��������" << endl;
	cout << endl;
	cout << "\t��� �����: " << answer1 << endl;
	cout << endl;
	if (answer1 == "b")
        cout << "\t�����! ���������� �����: b" << endl;
    else
        cout << "\t�� �����! ���������� �����: b" << endl;
    cout << endl;
    cout << "\t2. ��� � ������� ������ ������������ ������������?" << endl;
	cout << endl;
	cout << "\ta. �������\n\tb. �������\n\t�. ������� � �������\n" << endl;
	cout << endl;
	cout << "\t��� �����: " << answer2 << endl;
	cout << endl;
    if (answer2 == "a")
        cout << "\t�����! ���������� �����: a" << endl;
    else
        cout << "\t�� �����! ���������� �����: a" << endl;
    cout << endl;

	cout << "\t3. �������� ���������� ������� ������.\n" << endl;
	cout << "\t��� ���������� ���������� �������� ";
	cout << "�������� � ������������ ���� ������������� ����� ������������," << endl;
	cout <<" ���������� �������� ����� � ������ �����, ����� ��� ��������";
	cout << " ������������ �������?" << endl;
	cout << endl;
	cout << "\ta. ����������\n\tb. ����������\n\t�. ����������\n\td. ������������" << endl;
	cout << endl;
	cout << "\t��� �����: " << answer3 << endl;
	cout << endl;
    if (answer3 == "a")
        cout << "\t�����! ���������� �����: a" << endl;
    else
        cout << "\t�� �����! ���������� �����: a" << endl;
    cout << endl;
    cout << "\t4. �������� ���������� ������� ������.\n" << endl;
	cout << "\t��� ���������� ���������� �������� ";
	cout << "������� ���� ������������� ������ � ������������ ����� ������������," << endl;
	cout <<" ���������� ������ ����� � ������ �����, ����� ��� ";
	cout << "�������� ������������ �����?" << endl;
	cout << endl;
	cout << "\ta. ����������\n\tb. ����������\n\t�. ����������\n\td. ������������" << endl;
	cout << endl;
	cout << "\t��� �����: " << answer4 << endl;
	cout << endl;
    if (answer4 == "b")
        cout << "\t�����! ���������� �����: b" << endl;
    else
        cout << "\t�� �����! ���������� �����: b" << endl;
    cout << endl;
    cout << "\t5. �������� ���������� ������� ������.\n" << endl;
	cout << "\t��� ���������� ���������� �������� ";
	cout << "�������� � ������������ ���� ������������� �����, ���������� �������� " << endl;
	cout <<" ����� ��� �������� ������������ ������ ��� ��� ";
	cout << "�������� ������������ �����?" << endl;
	cout << endl;
	cout << "\ta. ����������\n\tb. ����������\n\t�. ����������\n\td. ������������" << endl;
	cout << endl;
	cout << "\t��� �����: " << answer5 << endl;
	cout << endl;
    if (answer5 == "d")
        cout << "\t�����! ���������� �����: d" << endl;
    else
        cout << "\t�� �����! ���������� �����: d" << endl;
    cout << endl;
    cout << "\t6. �������� ���������� ������� ������.\n" << endl;
	cout << "\t��� ���������� ���������� ��������, ������� ����� ����� � ������ �����,";
	cout << " ����� � ������ (A) ������, � � ����� (B) �����. " << endl;
	cout << endl;
	cout << "\ta. ����������\n\tb. ����������\n\t�. ����������\n\td. ������������" << endl;
	cout << endl;
	cout << "\t��� �����: " << answer6 << endl;
	cout << endl;
    if (answer6 == "c")
        cout << "\t�����! ���������� �����: c" << endl;
    else
        cout << "\t�� �����! ���������� �����: c" << endl;
    cout << endl;
    cout << "\t7. � ������ ������ ������� ������ ��������� ������ �������: ";
	cout << "� & (� v �) = (� & �) v (� & �) ?";
	cout << endl;
	cout << endl;
	cout << "\ta. � ����������������� ������\n\tb. � �������������� ������\n\t�. � ������������������ ������" << endl;
	cout << endl;
	cout << "\t��� �����: " << answer7 << endl;
	cout << endl;
    if (answer7 == "c")
        cout << "\t�����! ���������� �����: c" << endl;
    else
        cout << "\t�� �����! ���������� �����: c" << endl;
    cout << endl;
    cout << "\t8. � ������ ������ ������� ������ ��������� ������ �������: ";
	cout << "� & � = � & � ?";
	cout << endl;
	cout << endl;
	cout << "\ta. � ����������������� ������\n\tb. � �������������� ������\n\t�. � ������������������ ������" << endl;
	cout << endl;
	cout << "\t��� �����: " << answer8 << endl;
	cout << endl;
    if (answer8 == "a")
        cout << "\t�����! ���������� �����: a" << endl;
    else
        cout << "\t�� �����! ���������� �����: a" << endl;
    cout << endl;
    cout << "\t9. � ������ ������ ������� ������ ��������� ������ �������: ";
	cout << "(A v B) v C = A v (B v C) ?";
	cout << endl;
	cout << endl;
	cout << "\ta. � ����������������� ������\n\tb. � �������������� ������\n\t�. � ������������������ ������" << endl;
	cout << endl;
	cout << "\t��� �����: " << answer9 << endl;
	cout << endl;
    if (answer9 == "b")
        cout << "\t�����! ���������� �����: b" << endl;
    else
        cout << "\t�� �����! ���������� �����: b" << endl;
    cout << endl;
    cout << "\t10. ��������� ���������� �������: ��(A & B | ��(�)) � �������� ���������� �����.";
	cout << endl;
	cout << endl;
	cout << "\ta. A v (B v C)\n\tb. (��(A) | ��(B)) & C\n\t�. � & �" << endl;
	cout << endl;
	cout << "\t��� �����: " << answer10 << endl;
	cout << endl;
    if (answer10 == "b")
        cout << "\t�����! ���������� �����: b" << endl;
    else
        cout << "\t�� �����! ���������� �����: b" << endl;
    cout << endl;
    if(scores < 5)
    {
        if(scores == 0)
        {
            cout << "\t�� ������� " << scores << " ������." << endl;
        }
        else if(scores == 1)
        {
            cout << "\t�� ������� " << scores << " ����." << endl;
        }
        else
        {
            cout << "\t�� ������� " << scores << " �����." << endl;
        }
        cout << endl;
        cout << "\t���� �� ����." << endl;
    }
    else if(scores >= 5 && scores <= 6)
    {
        cout << "\t�� ������� " << scores << " ������." << endl;
        cout << endl;
        cout << "\t���� ����, �� �� ������ ����� ������ ����." << endl;
    }
    else if(scores > 6 && scores <= 8)
    {
        cout << "\t�� ������� " << scores << " ������." << endl;
        cout << endl;
        cout << "\t���� ����. �� ������ ������ ����, �� �� ������ �����." << endl;
    }
    else if(scores > 8 && scores <= 10)
    {
        cout << "\t�� ������� " << scores << " ������." << endl;
        cout << endl;
        cout << "\t���� ����. �� �������!" << endl;
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
