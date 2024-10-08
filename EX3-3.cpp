// EX3-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <string.h>
#define PI 3.14159265358979323846

struct profile
{
    char name[20];
    float x;
    float y;
    float theta;
    int t;
    float HP;
    float SP;
    float MP;
};

void main()
{
    struct profile tank_profile;
    tank_profile.x = 0;
    tank_profile.y = 0;
    tank_profile.theta = 1.57;
    tank_profile.t = 0;
    printf("====Let's build cpptank profile.====\n");
    printf("What is your cpptank's name:");
    gets_s(tank_profile.name, 20);

    printf("What is your HP (0~100):");
    scanf("%f", &tank_profile.HP);
    printf("What is your SP(0~100) :");
    scanf("%f", &tank_profile.SP);
    printf("What is your MP(0~100) :");
    scanf("%f", &tank_profile.MP);

    printf("Perfect! Start to save your profile......\n");
  

    FILE* pFile;
    pFile = fopen("profile.dat", "w");
    fprintf(pFile, "%s\n", tank_profile.name);
    fprintf(pFile, "%f\n%f\n%f\n%i\n", tank_profile.x, tank_profile.y, tank_profile.theta, tank_profile.t);
    
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
