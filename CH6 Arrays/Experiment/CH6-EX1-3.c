#include<stdio.h>

int main(void) {
    int i = 0, base, num[32];
    long int n;
    char c;

    printf("Input num: ");
    scanf("%ld", &n);
    printf("Input base: ");
    // 读取目标基数
    scanf("%d", &base);

    // 辗转相除法进行进制转换
    while(n != 0) {
        num[i] = n % base; // ① 处填入 n % base，得到余数
        n = n / base; // ② 处填入 n / base，得到商
        i++;
    }

    printf("the result is: ");
    for(i--; i >= 0; i--) {
        if(num[i] >= 0 && num[i] <= 9) {
            c = '0' + num[i]; // ③ 处填入 '0' + num[i]，将数字转为字符
        } else {
            c = 'A' + (num[i] - 10); // ④ 处填入 'A' + (num[i] - 10)，将数字转为字母
        }
        printf("%c", c);
    }
    return 0;
}
