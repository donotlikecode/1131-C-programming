// EX5-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int input;

    printf("Enter cases(1~5):");
    scanf("%i", &input); 
    switch (input) //switch括號掃進來的東西
    {
       case 1:
           printf("HP recover!\n");
           break;  //break 是為了跳出去
       case 2:
           printf("SP recover!\n");
           break;
       case 3:
           printf("MP recover!\n");
           break;
       default:
           printf("Nothing\n");
           break;

    }

    char c;
    
    printf("Enter cases(a~e):");
    scanf(" %c", &c);   //  若少了空白scanf("%c", &c) 會掃到印的東西不是輸入的好慘好可憐
    switch (c)
    {
    case 'a':
        printf("HP recover!\n");
        break;
    case 'b':
        printf("SP recover!\n");
        break;
    case 'c':
        printf("MP recover!\n");
        break;
    default:
        printf("Nothing\n");
        break;

    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
