#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

float square(float a);

int main()
{
    for (int i = 0; i < 3; i++)
    {
        float f = rand() % 10;
        printf("%.1f^2 =%.1f\n", f, square(f));
    }
}

float square(float a)
{
    return a * a;
}

