#include <stdio.h>

int main(){
    int n = 0, m = 0, k = 0;
    double sum = 0;

    while (++n <= 100) {
        sum += n;
    }
    while (++m <= 50) {
        sum += m * m;
    }
    while (++k <= 10) {
        sum += 1.0 / k;
    }

    printf("%lf", sum);
    
    return 0;
}