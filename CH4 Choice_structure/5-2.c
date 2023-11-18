#include <stdio.h>

int main(){
    int balance;
    double result;
    printf("Input the money paid:");
    scanf("%d",&balance);
    if (balance < 100) {
        result = 1 * balance;
    } else if (balance >= 100 && balance < 200) {
        result = 0.97 * balance;
    } else if (balance >= 200 && balance < 500) {
        result = 0.95 * balance;
    } else if (balance >= 500 && balance < 1000){
        result = 0.9 * balance;
    } else if (balance >= 1000) {
        result = 0.8 * balance;
    }

    printf("%.2lf",result);
    
    return 0;
}