#include <stdio.h>

// 函式用於輸入陣列
void inputArray(int arr[], int size) {
    printf("請輸入 %d 個整數:\n", size);
    for (int i = 0; i < size; i++) {
        printf("輸入第 %d 個數字: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// 主函式
int main() {
    int n;

    // 輸入陣列大小
    printf("請輸入陣列大小: ");
    scanf("%d", &n);

    // 定義陣列
    int arr[n];

    // 呼叫函式輸入陣列
    inputArray(arr, n);

    // 顯示陣列內容
    printf("您輸入的陣列是: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
---印出陣列---
#include <stdio.h>

// 函式用於印出陣列
void printArray(int arr[], int size) {
    printf("陣列內容是: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 主函式
int main() {
    int n;

    // 輸入陣列大小
    printf("請輸入陣列大小: ");
    scanf("%d", &n);

    // 定義陣列
    int arr[n];

    // 輸入陣列內容
    printf("請輸入 %d 個整數:\n", n);
    for (int i = 0; i < n; i++) {
        printf("輸入第 %d 個數字: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 呼叫函式印出陣列
    printArray(arr, n);

    return 0;
}
