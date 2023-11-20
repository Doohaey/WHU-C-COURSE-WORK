#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++){
        if (x % i == 0) return false;
    }
    return true;
}

int main(){
    int n, aux;
    bool isContinue = true;
    while (isContinue) {
        do {
            printf("\n请输入一个正确的不小于6的偶数:");
            scanf("%d", &n);
        } while (n % 2 != 0 || n < 6);

        for (int i = 3; i <= n/2; i++){
            if (isPrime(i) && isPrime(n-i)) {
                printf("\n该偶数%d可以被表示为素数%d和%d之和", n, i, n-i);
                break; // 找到一对素数后退出循环
            } else if (i == n / 2){
                printf("\n该数字确实不能表示为两个素数之和，哥德巴赫猜想被证伪了");
                return 0;
            }
        }

        printf("\n您还想继续吗？还想继续的话请输入任意非0整数，否则请输入0:");
        scanf("%d", &aux);
        if (!aux) isContinue = false;
    }
    
    return 0;
}