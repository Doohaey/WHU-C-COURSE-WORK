#include <stdio.h>

int isSumOfCubes(int num);

int main() {
    printf("各位数字立方之和等于本身的三位数有：\n");

    for (int num = 100; num < 1000; num++) {
        if (isSumOfCubes(num)) {
            printf("%d\n", num);
        }
    }

    return 0;
}

int isSumOfCubes(int num) {
    int originalNum = num;
    int sum = 0;
    int remainder;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += remainder * remainder * remainder;
        originalNum /= 10;
    }

    return sum == num;
}