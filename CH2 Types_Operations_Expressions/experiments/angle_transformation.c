#include <stdio.h>
#define PI 3.1415926

int main(){
    double de, ra;
    printf("\n请输入一个角度:");
    scanf("%lf", &de);
    ra = PI / (double)180 * de; 
    printf("%f度角转换为弧度是：%f\n", de, ra);
    return 0;
}