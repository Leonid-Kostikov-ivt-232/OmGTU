#include <iostream>
#include <stdio.h>
#include <math.h>
#include "integral.h"

using namespace std;

// функция вариант = 14 + 2 = 16
float function_v_16(float x)
{
    float f, x1;
    x1 = (float)x * 3.14/180;
    f = sqrt(x) * sin(x1);
    return f;
}


// длина
float length(float a, float b, float n)
{
    float h;
    h = (float)(b - a)/n;
    return h;
}

// метод центральных прямоугольников
float the_method_of_central_rectangles(float a, float b, float n, float h)
{
    float i, xi, integral;
    integral = 0;
    xi = a+(i-0.5) * h;
    for(i = 1; i <= n; i++)
        integral = integral + h * function_v_16(xi);

    return integral;
}

// метод трапеций
float the_trapezoid_method(float a, float b, float n, float h)
{
    float i, xi, integral;
    xi = a + i * h;
    integral = (float)h * (function_v_16(a) + function_v_16(b)) / 2;
    for(i = 1; i <= n-1; i++)
        integral += h * function_v_16(xi);

    return integral;
}
