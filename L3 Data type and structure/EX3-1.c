// EX3-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    bool hit;
    hit = 1;
    printf("Hit is %d \n", hit);

    char c;
    c = 'A';
    printf("c is %d \n", c);
    printf("c is %c \n", c);

    printf("Guess a,b,c?");
    scanf("%c", &c);

    if(c=='a')
    {
        printf("Right! \n");
    }

    else
    {
        printf("NO! \n");
    }

    int i = 247593;
    char str[10]; //這行定義了一個大小為 10 的字符陣列 str，這個陣列用來存儲一個字串
    sprintf(str, "%d", i); // 將整數轉換為字串 (但是並沒有印出來)
    printf("str is %s\n", str);  // 輸出字串
    
    
    i = 1; 
    /* 將 i 的值改為 1，覆蓋了之前的 247593。
    這行目前是多餘的，因為程式結束之前沒有使用 i。
    如果沒有特定的用意或後續邏輯依賴於這行代碼，可以安全地將其移除 */
    printf("i=%d", i);
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
