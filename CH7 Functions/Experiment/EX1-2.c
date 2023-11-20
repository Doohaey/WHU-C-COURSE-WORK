#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int x) {
    for (int i = 2; i <= sqrt(x); i++){
        if (x % i == 0) return false;
    }

    return true;
}

int main(){
    int n;
    do {
        printf("请输入一个正确的不小于6的偶数:");
        scanf("%d",&n);
    } while (n % 2 != 0 || n < 6);

    for (int i = 3; i <= n/2; i++){
        if (isPrime(i) && isPrime(n-i)) {
            printf("该偶数%d可以被表示为素数%d和%d之和",n,i,n-1);
            return 0;
        } else if (i == n / 2){
            printf("该数字确实不能表示为两个素数之和，哥德巴赫猜想被证伪了");
            return 0;
        }
    }
}