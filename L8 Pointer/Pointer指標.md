 沒有pointer的世界會怎樣?

**1.沒辦法複製陣列**
```c
#include <stdio.h>

int main()
{
int v[5] = {1, 2, 3, 4, 5};
int n[5];
n = v;    //會無法編譯 C不允許直接把陣列放在等號的左邊
 }
```

**2.沒辦法複製陣列**
```c
#include <stdio.h>

int main()
{
char v[6] = "Hello";
char n[6];
n = v;    //會無法編譯 C不允許直接把字串放在等號的左邊(因為字串是用陣列存的所以當然不行
 }

```

**3.沒辦法動態改變陣列長度**
```c
#include <stdio.h>

int main()
{
char v[5];
char n[10];
n = v;    //會無法編譯 
 }

```

一言以蔽之:指標是一種資料型態用來儲存"記憶體位置"
宣告語法
資料型別 *變數名稱;

```c
int count;  //宣告整數變數 位址會是int*
int *countAddr; //電腦依舊會配置一個記憶體空間給countAddr,裏頭存放的是一個記憶體位址 位址是int**
```
**取址運算子**
取得變數的記憶體起始位址
```c
int count = 9;  //宣告整數變數 位址會是int*
int *countAddr = &count; //把count這個變數的位址取出來存到指標變數裡
```
> Note:
```c
int count = 9;
int a;
int *b;
a = count; // 可以 int = int
b = count; //不可以 int* ≠ int
a = &count; //不可以 int ≠　int*
b = &count; //可以 int* = int*
count = *a; //語法錯誤 *的後面只能接指標變數(記憶體位址)
count = *b; //把count 複製給count
```
> 1. int 和 int* 是不一樣的型別

**間接運算子(*)**
取得以該記憶體位址起始的變數(問裡面住了誰)
語法:*記憶體位址
> 要小心不要和宣告指標變數的*搞混
```c
int count = 9;  //宣告整數變數 位址會是int*
int *countAddr = &count;
*countAddr; //取記憶體位址裡面的變數 問裡面住誰的感覺
int result = *countAddr;
```

```c
int count = 9;  //宣告整數變數 位址會是int*
int *countAddr = &count;
int result = *countAddr;
//相等於
int count = 9;
int result = count;
```
```c
int count = 9;  //宣告整數變數 位址會是int*
int *countAddr = &count;
*countAddr = 10; //count會變成10
//"不"相等於
int count = 9;
int result = count;
result = 10;   //count沒有變成10
```
> 1.指標透過count位址讀count的值
> 2.指標透過count位址寫count的值
> →要讀寫某個變數的值可以透過變數的名稱或是變數所在的位址

```c
int countA = 9;
int countB = 10;
int *countAddr;

countAddr = &countA; //把countAddr存countA的位址
*countAddr = 0; //相當於把countA設成0

countAddr = &countB; //把countAddr存countB的位址
*countAddr = 0; //相當於把countB設成0

```

**指標與函式呼叫**
```c
//變數不會被改~~
#include <stdio.h>
void addone(int n)
{
n = n + 1;  //獲得的是複製品所以沒辦法改到本尊
}
int main(){
 int a = 3;
 addone(a);  //複製a的值給addone
 printf("%d", a); //a還是3
}
```
直接複製位址的話!!!
```c

#include <stdio.h>
void addone(int *n)
{
*n = *n + 1;  //把a的位址加星號就得到a的值然後+1存到a的位址
}
int main(){
 int a = 3;
 addone(&a);  //複製a的記憶體位址給addone
 printf("%d", a); //a變成4
}
```

**EX 數值交換**  
寫一個函式swap,將輸入的兩個整數變數的值交換 
```c
#include <stdio.h>
void swap(int* , int*);

int main()
{
	int a = 3, b = 5;
	swap(&a, &b);
	/* int t = a; //先把a存起來
	a = b //a變成b
	b = t; //存起來的a給b */
	printf("a: %d\n", a);
	printf("b: %d\n", b); 
}

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
	//沒有要回傳 可以省略return
}
//https://www.youtube.com/watch?v=cvZ8XH9m4aY&list=PLY_qIufNHc293YnIjVeEwNDuqGo8y2Emx&index=156
```

**EX 使用函式排序兩個變數** 
寫一個sort函式將輸入的兩個整數依值排序
```c
#include <stdio.h>
int main(){
	int a = 5, b = 3;
 if( a > b){
	int t = a; //先把a存起來
	a = b //a變成b
	b = t; //存起來的a給b 
}
	
	printf("a: %d\n", a);
	printf("b: %d\n", b); 
}
```

```c
#include <stdio.h>
void swap(int*, int*);
void sort(int* ,int*);

int main() {
	int a = 5, b = 3;
	sort(&a, &b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
}

void sort(int *a, int *b) {
	if (*a > *b) {
		swap(&*a, &*b); //swap(a, b)
	}
}

void swap(int* a, int* b) {
	int t = *a; //先把a存起來
	*a = *b; //a變成b
 *b = t;  //存起來的a給b 
}
```
> Note:
> 1. 可以傳值就傳值(不會被改、可以傳一般的常數)
> 2. 希望呼叫完會改main就傳址
> 3. 沒辦法直接複製的時候再傳址

**指標加減整數**
```c
int v[5];
//可以透過將陣列元素的位址加減一個整數來求得其他元素的位址
&v[0] + 1 == &v[1]; //從v[0]位址往前移動一個陣列元素後的位址
&v[1] - 1 == &v[0]; //從v[1]位址往回移動一個陣列元素後的位址
```
> Note:
> 1. 指標不可以加指標
> 2. &v[2] - &v[1] == 1  //從v[2]位址到v[1]位址距離1個元素
