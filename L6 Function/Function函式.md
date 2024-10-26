**範例6-1:**
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float square(float a);
float max(float a[3]);

int main()
{
    float f = 2;
    printf("%.1f^2 =%.1f\n", f, square(f));
    float g[3] = { 1,2,3 };
    printf("max =%.1f\n", max(g));
}

float square(float a)
{
    return a * a;
}

float max(float a[3])
{
    float max_f;
    max_f = a[0];
    for (int i = 1; i < 3; i++)
    {
        if (a[i] > max_f)
        {
            max_f = a[i];
        }
    }

    return max_f;
}
```

**範例6-2:**
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

**範例6-3:**
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
