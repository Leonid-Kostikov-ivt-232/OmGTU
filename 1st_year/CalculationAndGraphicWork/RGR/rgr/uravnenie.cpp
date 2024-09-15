#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include "uravnenie.h"

// уравнение. Вариант 14
float the_equation(float x)// уравнение
{
    float z;
    z = 5 * pow(x, 2) - 2 * x * log(x) - 7;
    return z;
}

float metod_besektsii(float a, float b)
{
	const float E = 0.001;
    float x, z, c, a1, b1, ac;
	while(1)
    {
        c = (a + b) / 2;
        x = the_equation(c);
        a1 = the_equation(a);
        b1 = the_equation(b);
        if (fabs(x) < E)
        {
            break;
        }
        else if (fabs(x) > E)
        {
            ac = a1 * x;
            if (ac < 0)
            {
                b = c;
            }
            else if (ac > 0)
            {
                a = c;
            }
        }
    }
	return c;
}

float metod_hord(float a, float b)
{
	const float E = 0.001;
    float x, z, c, a1, b1, ac;
	while(1)
    {
        c = (a * the_equation(b) - b * the_equation(a))/(the_equation(b) - the_equation(a));
        x = the_equation(c);
        a1 = the_equation(a);
        b1 = the_equation(b);
        if (fabs(x) < E)
        {
            break;
        }
        else if (fabs(x) > E)
        {
            ac = a1 * x;
            if (ac < 0)
            {
                b = c;
            }
            else if (ac > 0)
            {
                a = c;
            }
        }
    }
	return c;
}
