#include <stdio.h>

int main(){
    int n, result;
    scanf("%d", &n);
    result = (n / 10) % 10;
    printf("%d \n", result);
    return 0;
}