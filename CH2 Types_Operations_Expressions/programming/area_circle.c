#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(){
    double R, r, area;
    scanf("%lf %lf", &R, &r);
    area = (pow(R,2) - pow(r,2)) * PI;
    printf("%lf \n", area);
    return 0;
}