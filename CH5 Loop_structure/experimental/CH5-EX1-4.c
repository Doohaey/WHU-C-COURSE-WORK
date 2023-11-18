#include <stdio.h>
/*用递归实现同样的目的*/

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("输入要计算的Fibonacci数列项数：");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("第 %d 项的Fibonacci数列值为 %d\n", n, result);

    return 0;
}
