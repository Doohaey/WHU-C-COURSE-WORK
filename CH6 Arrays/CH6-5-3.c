#include <stdio.h>

int main() {
    int sum, i, j;

    // 遍历1到1000的每一个数
    for(i = 1; i <= 1000; i++) {
        sum = 0; // 初始化因数之和为0

        // 计算当前数i的所有因数之和，因数必须小于i本身
        for(j = 1; j < i; j++) {
            if(i % j == 0) {
                sum += j; // 如果j是i的因数，则加到sum上
            }
        }

        // 检查因数之和是否等于原数
        if(i == sum) {
            printf("%d ", i);
        }
    }

    return 0;
}
