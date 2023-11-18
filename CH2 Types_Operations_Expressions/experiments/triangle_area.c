#include <stdio.h>
#include <math.h>

int main(){
    double A, s , a, b, c;
    printf("请输入a,b,c的值:");
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    A = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%lf", A);
    return 0;
}