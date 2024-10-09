// EX4-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <stdio.h>
#include <math.h>
#define Range 10


int main()
{
    float Rx, Ry, Ox, Oy;   //R:Robot O:Obstacle
    int HP_LOW = 2;   //assign 1 to HP_LOW
    Rx = 0;   //給初始值
    Ry = 0;
    Ox = 5;
    Oy = 5;
    float dis = sqrt((Rx - Ox) * (Rx - Ox) + (Ry - Oy) * (Ry - Oy)); //dis=sqrt50 <10

    if (dis < Range && HP_LOW==1)  // A && B A和B同時滿足  A==1是判斷式判斷A是不是A   A=1是把1設給A
    {
        printf("Robot is hit and HP is low");  
    }
    else if (dis < Range)
    {
        printf("Robot is hit, dis=%f\n", dis);
    }
    else
    {
        printf("Robot is safe\n");
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
