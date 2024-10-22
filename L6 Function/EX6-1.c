#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float square(float a);
float max(float a[3]);

int main()
{
    float f = 2;
    printf("%.1f^2 =%.1f\n", f, square(f));
    float g[3] = { 1,2,3 };
    printf("max =%.1f\n", max(g));
}

float square(float a)
{
    return a * a;
}

float max(float a[3])
{
    float max_f;
    max_f = a[0];
    for (int i = 1; i < 3; i++)
    {
        if (a[i] > max_f)
        {
            max_f = a[i];
        }
    }

    return max_f;
}
