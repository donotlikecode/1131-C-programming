#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



int main(void) {
    int z1, z2, z3;
    printf("Enter the first integer\n");
    scanf("%d", &z1);
    printf("Enter the second integer (different to the first one)\n");
    scanf("%d", &z2);
    printf("Enter the third integer(different to the firsr and the second one)\n");
    scanf("%d", &z3);

    if (z1 > z2 && z2 > z3)
    {
        printf("%d is the largest\n", z1);
        printf("%d is the smallest\n", z3);
    }

    if (z1 > z3 && z3 > z2)
    {
        printf("%d is the largest\n", z1);
        printf("%d is the smallest\n", z2);
    }

    if (z2 > z1 && z1 > z3)
    {
        printf("%d is the largest\n", z2);
        printf("%d is the smallest\n", z3);
    }
    
    if (z2 > z3 && z3 > z1)
    {
        printf("%d is the largest\n", z2);
        printf("%d is the smallest\n", z3);
    }

    if (z3 > z1 && z1 > z2)
    {
        printf("%d is the largest\n", z3);
        printf("%d is the smallest\n", z2);
    }

    if (z3 > z2 && z2 > z1)
    {
        printf("%d is the largest\n", z3);
        printf("%d is the smallest\n", z1);
    }
}
