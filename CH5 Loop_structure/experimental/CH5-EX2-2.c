#include <stdio.h>

int main() {
    int num, sum, i, j;

    printf("2-1000之间的完全数：\n");

    for (num = 2; num <= 1000; num++) {
        sum = 0;
        
        // 寻找num的因子并求和
        for (i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        // 如果sum等于num，则是一个完全数
        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
