#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double x, y, result, denominator;
    scanf("%lf %lf", &x, &y);
    denominator = cos(fabs(x+y));
    if (denominator <= 0) {
        printf(stderr, "Wrong augments\n");
        exit(1);
    }

    result = sin(fabs(x) + fabs(y)) / sqrt(denominator);
    printf("%lf", result);

    return 0;
}
