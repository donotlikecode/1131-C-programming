// EX3-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h> //<atlstr.h>也可以
#define PI 3.141592653589

char str1[10];
char str2[10];
char str3[] = ".dat";

void main()
{
    float x, y, theta, dt;
    float v = 1.0; // 1 m/s
    float w = 0.174; // 0.174 rad/s
    int step = 0;
    x = 0; y = 0; theta = 1.57; //90 degrees
    dt = 0.1;
    FILE* pFile;
    char string[100];
    printf("Insert you file name:");
    gets_s(string);   //warning unsafe (see gets instead
    printf("Your file is: %s\n", string);

    x = x + v * cos(theta + dt);
    y = y + v * sin(theta + dt);
    theta = theta + w * dt;
    step++;
    strcpy(str1, string);    //把string這個字串複製到str1
    sprintf(str2, "%d", step);  //把step這個int值轉成字串
    printf("Current file is: %s\n", str2);
    strncat(str1, str2, 4);           //把str2字串的前四個字元接到str1後面
    printf("Current file is: %s\n", str1);
    strncat(str1, str3, 5);
    printf("Cureent file is: %s\n", str1);
    pFile = fopen(str1, "w");
    fprintf(pFile, "%f,%f,%f\n", x, y, theta);
    fclose(pFile);
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
