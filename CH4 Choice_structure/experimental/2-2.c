#include <stdio.h>

int main(){
    double p,w,d,f;
    int s;
    int c = (int)s / 250;
    printf("请输入运费 重量 距离：");
    scanf("%lf %lf %d",&p,&w,&s);
    switch (c)
    {
    case 0:
        d = 0;
        break;
    case 1:
        d = 0.02;
        break;
    case 2:
        d = 0.05;
        break;
    case 3:
        d = 0.05;
        break;
    case 4:
        d = 0.08;
        break;
    case 5:
        d = 0.08;
        break;
    case 6:
        d = 0.08;
        break;
    case 7:
        d = 0.08;
        break;
    case 8:
        d = 0.1;
        break;
    case 9:
        d = 0.1;
        break;
    case 10:
        d = 0.1;
        break;
    case 11:
        d = 0.1;
        break;
    default:
        d = 0.15;
        break;
    }
    f= p * w * s * (1-d);
    printf("%lf",f);
        
    return 0;
}