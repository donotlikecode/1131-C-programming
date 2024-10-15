// EX4-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <stdio.h>
#include <math.h>


int main()
{
    float Ox[5] = { 2,4,6,8,10 };  //障礙物在(2,1) (4,3) (6,5) (8,7) (10,9)
    float Oy[5] = { 1,3,5,7,9 };
    float vx = 10;
    float vy = 5;
    float dt = 0.1;
    float x, y, theta;
    x = 0;
    y = 0;
    theta = 1.57;
    float v = 10;
    float w = 0.174;

    for (int i = 0; i < 5; i++)  
    {
        printf("obstacle position is (%.2f,%.2f)\n", Ox[i], Oy[i]);  //印出障礙物的位置
    }
    printf("(VX,VY,dt)=(%f,%f,%f)\n", vx, vy, dt);  //印出現在的狀態


    for (int i = 0; i < 5; i++)  //i=0 Ox[0]
    {
        Ox[i] = Ox[i] + vx * dt;                 //斷點設在這裏去看
        Oy[i] = Oy[i] + vy * dt;
        printf("next obstacle position is (%.2f,%.2f)\n", Ox[i], Oy[i]);
    }

    for (int i = 0; i < 5; i++)  //算機器人的位置
    {
        x = x + v * cos(theta) * dt;
        y = y + v * sin(theta) * dt;
        theta = theta + w * dt;
        printf("Robot position is (%.2f,%.2f,%.2f)\nx, y, theta");
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
