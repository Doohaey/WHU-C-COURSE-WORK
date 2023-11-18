#include <stdio.h>
#define abs(X) X>=0?X:-X

int main() {
    int num, count = 1;
    printf("请输入一个整数:");
    scanf("%d", &num);
    num = abs(num);
    while ((num/=10) != 0) {
        count++;
    }
    printf("%d",count);

    return 0;
}