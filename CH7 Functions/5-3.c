#include <stdio.h>
#include <stdbool.h>

bool isPerfectNumber(int num);

int main() {
    printf("3000以内的完全数有：\n");
    for (int i = 1; i <= 3000; i++) {
        if (isPerfectNumber(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

bool isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}
