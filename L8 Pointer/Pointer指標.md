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
int count;  //宣告整數變數
int *countAddr; //電腦依舊會配置一個記憶體空間給countAddr,裏頭存放的是一個記憶體位址
```
