#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int nums[5];
    printf("请输入5个整数：\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    int result = nums[0];
    for (int i = 1; i < 5; i++) {
        result = lcm(result, nums[i]);
    }

    printf("这些数的最小公倍数是：%d\n", result);
    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return abs(a * b) / gcd(a, b);
}
