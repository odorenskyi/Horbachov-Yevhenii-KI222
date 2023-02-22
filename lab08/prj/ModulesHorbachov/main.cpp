#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

float s_calculation(float x, float y, float z)
{
    float S;
    S = abs(pow(z*y, abs(x)) - y/M_PI - sqrt(x));
    return roundf(S * 100000.0f) / 100000.0f;
}
