#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) 
{
    int num = 0;
    int uppernum = 100;
    printf("Enter a number from 1 to 100\n");
    scanf("%d", &uppernum);
    int sum = 0;
    int sumsqu = 0;
    int sumcubi = 0;
        
        
    for (int num = 1; num <= uppernum; num = num +1)
    {
        sum = sum + num;
        sumsqu = sumsqu + num * num;
        sumcubi = sumcubi + num * num * num;
    }
    
    printf("the sum from 1 to %d is %d\n", uppernum, sum);
    printf("the sum from 1 to %d is %d\n", uppernum, sumsqu);
    printf("the sum from 1 to %d is %d\n", uppernum, sumcubi);


 }
