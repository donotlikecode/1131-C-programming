#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
   int key = 5;
    for (int i = 0; i < 10; i++)
    {
        printf("i=%d\n", i);
        if (i == key)
        {
            printf("got key=%d\n", key);
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("i=%d\n", i);
        if (i == key)
        {
            printf("got key=%d\n", key);
            continue; //continue會把當次迴圈後面的東西跳過
        }
    }
}
