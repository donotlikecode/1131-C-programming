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
        a.f[i] = rand() % 10;
        printf("a%i=%.2f\n", i + 1, a.f[i]);
    }
    min_data = min(a);
    printf("min_i=%i,min=%f", min_data.ind, min_data.min_f);
}
