#include <stdio.h>

int arr[100];
int evenCount = 0;

void FindEvenNumbers(int *evenNumbers, int size);

int main() {
    int n;
    printf("输入整数的个数: ");
    scanf("%d", &n);

    printf("输入 %d 个整数: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int evenNumbers[n];

    FindEvenNumbers(evenNumbers, n);

    printf("找到的偶数有: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n偶数的个数: %d\n", evenCount);

    return 0;
}

void FindEvenNumbers(int *evenNumbers, int size) {
    evenCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenNumbers[evenCount++] = arr[i];
        }
    }
}
