#include <stdio.h>

int main(){
    int i = 0, sum = 0;
    while(sum <= 10000) {
        i++;
        sum += i;
    }
    printf("n=%d, sum=%d\n",i,sum);
    return 0;
}