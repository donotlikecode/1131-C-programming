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
> 1.合法的呼叫square(2) 是合法的，但不會儲存或顯示結果。
> 2.需要使用結果時最好將結果儲存到變數中或直接在印出時使用它。

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

int main()
{
    min_arrary a;
    index_num min_data;
    srand(time(NULL));

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
