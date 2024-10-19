#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 100


bool A[N + 1]; /*想要開一個很大的矩陣 但是在MAIN裡不能有這麼大 
希望給一個1或0就知道他是不是質數 紀錄每個對應編號的元素是不是質數
希望A[i]是直接對應到我有興趣的那的質數而不是要再減1*/
int main(void)
{
	int i, j;
	for (i = 0; i <= N; i++) A[i] = 1;
	for (i = 2; i * i <= N; i++) 
	{
		if (A[i])//剛好用A[i]的expression當true false
		{
			for (j = i * i; j <= N; j = j + i)
			{
				A[j] = 0;
			}
		}
	}
	for (i = 2; i <= N; i++) {
		if (A[i]) printf("%d, ", i);
	}
}
