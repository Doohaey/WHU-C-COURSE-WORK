#include <stdio.h>

int main() {
    int n = 50; // 计算前50项
    double e = 1.0; // 初始化e的值为1

    for (int i = 1; i <= n; i++) {
        double term = 1.0; // 存储每一项的值
        // 计算阶乘
        for (int j = 1; j <= i; j++) {
            term /= j;
        }
        e += term; // 将每一项加到e上
    }

    printf("e的估计值（前50项）：%lf\n", e);

    return 0;
}
