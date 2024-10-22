// EX5-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int input;
    float HP = 60;

    while (HP < 100)  //一直到HP超過100才出去while
    {
        printf("Enter cases(1~5):");
        scanf("%i", &input);
        switch (input)
        {
        case 1:
            HP = HP + 5;
                printf("HP recover! HP=%1.f\n", HP);
            break;
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
