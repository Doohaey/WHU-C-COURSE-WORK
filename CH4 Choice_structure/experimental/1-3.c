#include <stdio.h>
#include <math.h>

int main(){
    double x,y,z;
    scanf("%lf %lf",&x,&y);

    if (x > 0){
        if (y > 0) z = log(x)+log(y);
        else if (y < 0) z = tan(x+y);
    } else if (x < 0) {
        if (y > 0) z = sin(x) + cos(y);
        else if (y < 0) z = exp(2*x)+exp(3*y);
    }

    printf("%lf\n",z);
    
    return 0;
}