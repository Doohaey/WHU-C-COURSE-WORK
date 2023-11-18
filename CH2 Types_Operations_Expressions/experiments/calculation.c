#include <stdio.h>

int main(){
    int a = 3;
    char b = 'B';
    float c = 211.5;
    double d = 211.5;
    printf("%d %c %f %lf", a, b, c, d);

    double sum = a + b, difference = a - b, product = a * b, quotient = (double)a / b;
    printf("%lf %lf %lf %lf", sum, difference, product, quotient);

    return 0;
}