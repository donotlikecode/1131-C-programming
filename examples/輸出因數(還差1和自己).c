#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>



int main(void)
{
    int num, div;
    int isprime;
    printf("Enter an posittve integer\n");
    //scanf("%d", &num);

    while (scanf("%d", &num) == 1) //用來看有沒有讀到東西

    {
        for (div = 2, isprime = 1; div * div < num; div++)
        {
            if (num % div == 0)
            {
                printf("%d,  ", div);
                isprime = 0;
            }
        }
        //這時候div是上面結束的時候div的值 也就是 div * div >= num
        for (; div >= 2; div--)
        {
            if (num % div == 0)
            {
                printf("%d, ", num / div);
            }
        }
        if (isprime)
            printf("%d is a prime number!\n", num);
        else
            printf("\b\b are divisors of %d\n", num);
    }

}
