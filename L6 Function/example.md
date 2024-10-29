
**投一個六面骰子**
```c
include <stdio.h>
#include <stdlib.h>

int main(void)
{

	for (unsigned int i = 1; i <= 20; i++) {
		
		
		printf("%10d", 1 + (rand() % 6));  //餘數會是0~5 但是是要1~6 所以把結果+1

		if (i % 5 == 0) {
			puts("");
		}
	}
}
```

**投骰子60000000次看機率有沒有真的差不多**
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int frequency1 = 0; //算有幾個1
	unsigned int frequency2 = 0;
	unsigned int frequency3 = 0;
	unsigned int frequency4 = 0;
	unsigned int frequency5 = 0;
	unsigned int frequency6 = 0;

	for (unsigned int roll = 1; roll <= 60000000; ++roll)
	{
		int face = 1 + rand() % 6;


		switch (face) {   //face=1時執行case1
		case 1:
			++frequency1;
			break;

		case 2:
			++frequency2;
			break;

		case 3:
			++frequency3;
			break;

		case 4:
			++frequency4;
			break;

		case 5:
			++frequency5;
			break;

		case 6:
			++frequency6;
			break;
		}

	}
	printf("%s%13s\n", "Face", "Frequency"); //以 13 個字元寬度 (%13s) 來右對齊「Frequency」
	printf("   1%13u\n", frequency1);        //%13u 指定將後面的無符號整數（frequency1 到 frequency6）以 13 個字元寬度右對齊
	printf("   2%13u\n", frequency2);        //空白是為了跟上面對齊
	printf("   3%13u\n", frequency3);
	printf("   4%13u\n", frequency4);
	printf("   5%13u\n", frequency5);
	printf("   6%13u\n", frequency6);
}
```

**使用srand將虛擬亂數隨機化**
```c

```