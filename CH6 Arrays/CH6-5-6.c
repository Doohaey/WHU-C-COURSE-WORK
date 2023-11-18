#include <stdio.h>

#define SIZE 4
#define TOTAL_ELEMENTS (SIZE * SIZE)

void printArray(int arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void quickSort(int *arr, int low, int high) {
    if (low < high) {
        // partitionIndex是分区操作正确放置的索引
        int pivot = arr[high]; 
        int i = (low - 1); 
        for (int j = low; j <= high - 1; j++) {
            if (arr[j] > pivot) { 
                i++; 
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
        int t = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = t;
        int partitionIndex = i + 1;

        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main() {
    int array[SIZE][SIZE];
    
    printf("Enter the elements of the 4x4 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Original Array:\n");
    printArray(array);

    // 将二维数组转换为一维数组以应用快速排序
    quickSort((int *)array, 0, TOTAL_ELEMENTS - 1);
    
    printf("Sorted Array in descending order:\n");
    printArray(array);
    
    return 0;
}

