#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    FILE* pFile;                               //宣告檔案
    pFile = fopen("data1.dat", "r");
    //float c
    char c;
    int i = 0;
    while (fscanf(pFile, "%c\t", &c) != EOF)  // EOF -> end of file 檔案的最後面電腦都會用EOF這個字元標註
    {
        printf("data_%i=%c\n", i, c);
        i++;
    }
    fclose(pFile);
}
