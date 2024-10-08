// EX3-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
struct bits //bits只是名字
{
    unsigned char hit : 1;              //位欄（bit-field）語法
    unsigned char speedup : 1;          /*unsigned char hit : 1; 表示 hit 變數是 unsigned char 類型，但它只佔 1 位元。*/
    unsigned char sp_disable : 1;
    unsigned char mp_disable : 1;
    unsigned char freeze : 1;
    unsigned char sp_up : 1;
    unsigned char mp_up : 1;
    unsigned char hp_up : 1;

};

union byte_bits //byte_bits只是名字
{
    bits b; //這個bits是前面定義結構體的bits的名字
    unsigned char B;
};

/* 沒有union的後果:法直接使用 B 來同時影響 b就無法用 tank_profile.status.B = 0x00 
來一次性設置所有位元的值。如果你想要初始化 status 為全 0，你必須手動設置每個位元   */

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
    union byte_bits status;
};

void main()
{
    struct profile tank_profile;
    printf("====Llet's build cpptank status===\n");
    printf("What is the status(0~255): ");
    scanf("%i", &tank_profile.status.B);   //這裡會一次掃前面輸的那個狀態  剛好8個位置對應到8個bit
    printf("hit is %i\n", tank_profile.status.b.hit);  //然後把剛剛輸的那個狀態印出來
    printf("speedup is %i\n", tank_profile.status.b.speedup);
    printf("sp_disable is %i\n", tank_profile.status.b.sp_disable);
    printf("mp_disable is %i\n", tank_profile.status.b.mp_disable);
    printf("freeze is %i\n", tank_profile.status.b.freeze);
    printf("sp_up is %i\n", tank_profile.status.b.sp_up);
    printf("mp_up is %i\n", tank_profile.status.b.mp_up);
    printf("hp_up is %i\n", tank_profile.status.b.hp_up);

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
