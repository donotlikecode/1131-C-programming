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
