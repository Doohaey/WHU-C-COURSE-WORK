#include <stdio.h>

int main(){
    int a = 7, b;
    double x = 2.5, y = 4.7;
    double result;

    result = x + a % 3 * (int) (x + y) % 2 / 4;
    printf("%lf\n", result);

    a = 2;
    b = 5;
    x = 3.5;
    y = 2.5;
    result = (float) (a + b) / 2 + (int) x % (int) y;
    printf("%lf\n", result);

    return 0;
}