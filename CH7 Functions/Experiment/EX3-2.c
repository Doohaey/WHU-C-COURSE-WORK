#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n);
void checkGoldbachForNumber(int number);
void checkGoldbachForRange(int start, int end);

int main() {
    int choice, number, start, end;

    printf("选择验证模式：\n");
    printf("1. 验证单个偶数\n");
    printf("2. 验证一定范围内的所有偶数\n");
    printf("请输入你的选择（1 或 2）：");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("输入一个偶数：");
            scanf("%d", &number);
            if (number % 2 != 0) {
                printf("错误：输入的不是偶数。\n");
            } else {
                checkGoldbachForNumber(number);
            }
            break;
        case 2:
            printf("输入范围的起始和结束（两个偶数）：");
            scanf("%d %d", &start, &end);
            if (start % 2 != 0 || end % 2 != 0) {
                printf("错误：范围应该是偶数。\n");
            } else {
                checkGoldbachForRange(start, end);
            }
            break;
        default:
            printf("无效选择。\n");
    }

    return 0;
}

// 检查一个数是否为质数
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// 验证单个偶数符合哥德巴赫猜想
void checkGoldbachForNumber(int number) {
    for (int i = 2; i <= number / 2; i++) {
        if (isPrime(i) && isPrime(number - i)) {
            printf("%d = %d + %d\n", number, i, number - i);
            return;
        }
    }
    printf("未找到符合条件的质数对。\n");
}

// 验证一定范围内的所有偶数符合哥德巴赫猜想
void checkGoldbachForRange(int start, int end) {
    for (int i = start; i <= end; i += 2) {
        checkGoldbachForNumber(i);
    }
}

