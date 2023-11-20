#include <stdio.h>
#include <math.h>

double function(double x) {
    return x*x + 6*x - 7;
}

int main(){
    double x = 0, f1, f2, f3;
    f1 = function(3.0);
    printf("\nf1: %lf \n输入一个实数: ", f1);
    scanf("%lf", &x);
    f2 = function(x + 8);
    printf("\nf2: %lf \n再输入一个实数: ", f2);
    scanf("%lf", &x);
    f3 = function(cos(x));
    printf("\nf3: %lf", f3);
    return 0;
}
