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
        
        
        
    for (int num = 1; num <= uppernum; num++)
    {
        sum = sum + num;
        
    }
    
    printf("the sum from 1 to %d is %d", uppernum, sum);

 }
