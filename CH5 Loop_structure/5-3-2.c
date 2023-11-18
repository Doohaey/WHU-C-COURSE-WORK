#include <stdio.h>

int main() {
    int n = 0; // 项数
    double e = 1.0; // 初始化e的值为1
    double term = 1.0; // 第一项的值

    while (term >= 1e-6) { // 循环直到最后一项小于10^-6
        n++;
        term /= n; // 计算下一项的值
        e += term; // 将下一项加到e上
    }

    printf("e的估计值（直到最后一项小于10^-6）：%lf\n", e);

    return 0;
}
