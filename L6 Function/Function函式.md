# function


**範例6-1: square and max 多加了讓使用者輸入的功能**
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float square(float a); //宣告function的原型
float max(float a[3]); //宣告function的原型

int main()
{
    float f = 0;
    printf("請輸入一個數字，我們來算一下平方\n");
    scanf("%f", &f);
    printf("%.1f^2 =%.1f\n", f, square(f)); //%1.f小數點後一位  //呼叫square函數然後把他的output印出來


    float g[3] = { 1,2,3 };
    printf("請輸入三個數字，我們將找出其中最大的數字!!\n");
    for (int i = 0; i < 3; i = i + 1) {
        printf("請輸入第%d個數字\n", i + 1);
        scanf("%f", &g[i]);   // 傳入每個 g 元素的地址
    }
    for (int j = 0; j < 3; j++) {
        printf("%f ", g[j]);
    }
    printf("\nmax =%.1f\n", max(g));        //呼叫max函數然後把他的output印出來
    return 0;
}

float square(float a)
{
    return a * a;     //輸入浮點數 輸出浮點數
}

float max(float a[3])     //輸入array 每個都是浮點數  輸出也是一個浮點數
{
    float max_f;          //指定資料型態 max_f
    max_f = a[0];           //設第一個為初始值
    for (int i = 1; i < 3; i++)
    {
        if (a[i] > max_f)   //逐一檢查 如果比現在的大就把max_f換成大的那個
        {
            max_f = a[i];
        }
    }

    return max_f;
}
```
> Note:
> 1. 合法的呼叫square(2) 是合法的，但不會儲存或顯示結果。
> 2. 需要使用結果時最好將結果儲存到變數中或直接在印出時使用它。

**範例6-2:從別的地方引入函式**
```C
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

float square(float a);

int main()
{
    for (int i = 0; i < 3; i++)
    {
        float f = rand() % 10;
        printf("%.1f^2 =%.1f\n", f, square(f));
    }
}

float square(float a)
{
    return a * a;
}
```

**範例6-3:引數和回傳可以是Struct**
```C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct min_arrary  //包含一個長度為 3 的浮點數陣列 f 和整數 N，其中 N 預設為 3，表示陣列長度
{
    float f[3];
    int N = 3;
};
struct index_num  //用來儲存查找到的最小值 min_f 和其索引 ind
{
    int ind;
    float min_f;
};
index_num min(min_arrary); //宣告min這個函式 引數是min_arrary這個struct 回傳的是index_num這個Struct

index_num min(min_arrary input)
{
    index_num output;
    output.min_f = input.f[0];    /*output 是 index_num 型別的變數。
                                  index_num 結構體中包含兩個成員變數：ind（整數型別）和 min_f（浮點數型別）。
                                  因此，用 output.min_f 來存取 index_num 結構中的 min_f 成員。*/
    output.ind = 0;               /*input 是 min_arrary 型別的變數。
                                  min_arrary 結構體包含一個陣列成員 f，其類型是 float[3]，即一個包含 3 個 float 的陣列。
                                  因此，用 input.f[0] 來存取 f 陣列的第 0 個元素*/
    for (int i = 1; i < 3; i++)
    {
        if (input.f[i] < output.min_f)
        {
            output.min_f = input.f[i];
            output.ind = i;
        }
    }
    
    return output;
}

int main()
{
    min_arrary a;
    index_num min_data;
    srand(time(NULL));  /*srand 是 C/C++ 的標準函式，用來設定隨機數生成器的「種子」。
                         這個種子值決定了隨機數序列的起點。如果種子相同，每次產生的隨機數序列都會相同*/
                         //註解掉這行就不會隨機了

    a.N = 3;
    for (int i = 0; i < a.N; i++)
    {
        a.f[i] = rand() % 10; //random取0~9塞進去
        printf("a%i=%.2f\n", i + 1, a.f[i]);
    }
    min_data = min(a);
    printf("min_i=%i,min=%f", min_data.ind, min_data.min_f); //小心不要印錯
}
```
>Note:
>1. 即使兩個結構體擁有相同的成員（相同的名稱和類型），如果它們的順序不同，這些結構體仍然被視為不同的型別。
>2.

**範例6-4:運用header file and cpp**

把6-3的程式拆出header file(.h)和.cpp

game_lib.h(用來存資料、宣告函式)
```C
#pragma once
struct min_arrary
{
    float f[3];
    int N = 3;
};
struct index_num
{
    int ind;
    float min_f;
};
index_num min(min_arrary);
```
>Note
>1. #pragma once 是一個預處理指令，用於防止頭文件被多次包含。在 C 和 C++ 編程中，如果同一個頭文件被多次包含，可能會導致重複定義的錯誤。使用 #pragma once 可以確保該頭文件在一個編譯單元中只被包含一次當編譯器第一次遇到包含這個頭文件的指令時，它會處理這個文件。在後續的包含指令中，如果編譯器再次遇到這個頭文件，它會跳過處理，從而避免重複包含。

game_lib.cpp(函式寫在這裡面)
```C
#include "game_lib.h"  //把header file引進來

index_num min(min_arrary input)
{
    index_num output;
    output.min_f = input.f[0];
    output.ind = 0;
    for (int i = 1; i < 3; i++)
    {
        if (input.f[i] < output.min_f)
        {
            output.min_f = input.f[i];
            output.ind = i;
        }
    }

    return output;
}
```

main.cpp
```C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game_lib.h"

int main()
{
    min_arrary a;
    index_num min_data;
    srand(time(NULL));

    a.N = 3;
    for (int i = 0; i < a.N; i++)
    {
        a.f[i] = rand() % 10;
        printf("a%i=%.2f\n", i + 1, a.f[i]);
    }
    min_data = min(a);
    printf("min_i=%i,min=%f", min_data.ind, min_data.min_f);
}
```
