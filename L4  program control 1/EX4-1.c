// EX4-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>
#define Range 3  //可改 Q:為什麼要宣告變數在這裡?

int main()
{
    float Rx, Ry, Ox, Oy;   //R:Robot O:Obstacle
    Rx = 0;
    Ry = 0;
    Ox = 15;
    Oy = 15;
    float dis = sqrt((Rx - Ox) * (Rx - Ox) + (Ry - Oy) * (Ry - Oy)); //dis=sqrt450 

    if (dis < Range) //如果坦克和壞人的距離比這個dis來的少，就會判斷被打到
    {
        printf("Robot is hit, dis=%f\n", dis);
    }
    else
    {
        printf("Robot is safe, dis=%f\n", dis);
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
