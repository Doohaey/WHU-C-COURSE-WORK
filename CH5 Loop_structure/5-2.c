#include <stdio.h>

int main(){
    int n, i = 0;
    printf("Please enter n:");
    scanf("%d", &n);

    while (++i <= n){
        if (!(i % 2)) {
            printf("%d ", i * i);
        }
    }

    return 0;
}