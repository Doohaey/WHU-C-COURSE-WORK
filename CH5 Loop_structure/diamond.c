#include <stdio.h>
#include <math.h>

int main(){
    for(int i = 0; i < 5; i++){
        for (int j = 0; j <= 9; j++) {
            fabs(5-j) <= i ? printf("*") : printf(" ");
        }
        printf("\n");
    }
    return 0;
}