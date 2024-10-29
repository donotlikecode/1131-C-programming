
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int seed; //讓srand可以為rand提供seed

	printf("%s", "Enter seed:");
	scanf("%u", &seed);

	srand(seed); //從<stdlib.h>來的
	for (unsigned int i = 1; i <= 10; ++i){
		printf("%10d", 1 + (rand() % 6));
		if (i % 5 == 0) {
			puts("");
		}
	}
}
```
> Note:
>1. puts("") 表示輸出一個空字串（即沒有內容的字串），但因為 puts 本身會在輸出內容後自動換行，這行程式碼的作用就是單純換行。
> 每當i是5的倍數時（例如 5 和 10），就會執行 puts("")，讓輸出的隨機數在每 5 個數字後換行，使顯示的數字排列成兩行，每行 5 個隨機數，方便閱讀。
>2.使用srand(time(NULL))也可以隨機化就不用輸入種子了

**crap骰子遊戲**
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contains prototype for function time

// enumeration constants represent game status
enum Status { CONTINUE, WON, LOST };

int rollDice(void); // function prototype

int main(void)
{ 
   // randomize random number generator using current time
   srand(time(NULL));

   int myPoint; // player must make this point to win
   enum Status gameStatus; // can contain CONTINUE, WON, or LOST
   int sum = rollDice(); // first roll of the dice

   // determine game status based on sum of dice
   switch(sum) {

      // win on first roll
      case 7: // 7 is a winner
      case 11: // 11 is a winner          
         gameStatus = WON; 
         break;

      // lose on first roll
      case 2: // 2 is a loser
      case 3: // 3 is a loser
      case 12: // 12 is a loser
         gameStatus = LOST; 
         break;

      // remember point
      default:                  
         gameStatus = CONTINUE; // player should keep rolling
         myPoint = sum; // remember the point
         printf("Point is %d\n", myPoint);
         break; // optional
   } 

   // while game not complete
   while (CONTINUE == gameStatus) { // player should keep rolling
      sum = rollDice(); // roll dice again

      // determine game status
      if (sum == myPoint) { // win by making point
         gameStatus = WON; 
      } 
      else {
         if (7 == sum) { // lose by rolling 7
            gameStatus = LOST; 
         } 
      } 
   }

   // display won or lost message
   if (WON == gameStatus) { // did player win?
      puts("Player wins");
   } 
   else { // player lost
      puts("Player loses");
   } 
} 

// roll dice, calculate sum and display results
int rollDice(void)
{
   int die1 = 1 + (rand() % 6); // pick random die1 value
   int die2 = 1 + (rand() % 6); // pick random die2 value

   // display results of this roll
   printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
   return die1 + die2; // return sum of dice
}
```
