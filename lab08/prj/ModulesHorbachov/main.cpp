#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

float s_calculation(float x, float y, float z)
{
    float S;
    S = abs(pow(z*y, abs(x)) - y/M_PI - sqrt(x));
    return roundf(S * 100000.0f) / 100000.0f;
}

float task9_1(float salary, int years)
{
    float procent = 0;
    if (years >= 2 && years <= 5)
        procent = 0.05;

    if (years >= 5 && years <= 10)
        procent = 0.1;

    if (years > 10)
        procent = 0.25;

    salary += salary * procent;

    return salary;
}
std::string task9_2(int lengthHead)
{
    if (lengthHead >= 53 && lengthHead <= 62)
    {

        if (lengthHead >= 53 && lengthHead <= 54)
            return "XS";

        if (lengthHead >= 55 && lengthHead <= 56)
            return "S";

        if (lengthHead >= 57 && lengthHead <= 58)
            return "M";

        if (lengthHead >= 59 && lengthHead <= 60)
            return "L";

        if (lengthHead >= 61 && lengthHead <= 62)
            return "XL";
    }
    return "";
}

int task9_3(int number)
{
    int bit = (number >> 14) & 1;
    if (bit == 1)
    {
        int count = 0;

        while ((number & 1) == 0)
        {
            count++;
            number >>= 1;
        }
        return count;
    }
    else
    {
        int count = 0;

        while (number != 0)
        {
            if (number & 1)
                count++;
            number >>= 1;
        }
        return count;
    }
}
