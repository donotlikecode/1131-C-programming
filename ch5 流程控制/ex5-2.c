// if 敘述的練習
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int x;
    char str1[30];  // 使用字符數組來存儲字串，確保大小足夠

    strcpy(str1, "您輸入的是正數或0");  // 將字串複製到字符數組
    printf("請輸入一個整數: ");
    scanf("%d", &x);

    if (x < 0)
        strcpy(str1, "您輸入的是負數");  // 用 strcpy 改變字串內容

    printf("%s\n", str1);  // 打印字符數組中的字串
    return 0;
}
