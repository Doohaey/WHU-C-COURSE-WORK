#include <stdio.h>
#include <math.h>

int main(){
    double a, r, n, I, D;
    scanf("%lf %lf %lf", &a, &r, &n);
    I = 1 + r;
    D = a * (pow(I,n) - 1) / ((I - 1) * pow(I,n));
    printf("%lf", D);
    return 0;
}