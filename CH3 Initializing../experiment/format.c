#include <stdio.h>

int main(){
    int a = 6, b = 7,  c = 8;
    float x = 1.6, y = 3.6, z = -6.9;
    long m = 53588, n = 123456;
    char c1 = 'A', c2 = 'a';

    printf("a=   %d, b= %d   c=%d\n",a,b,c);
    printf("x=%f, y=%f, z=%f\n",x,y,z);
    printf("m=%ld     n=  %ld\n",m,n);
    printf("c1=%c, ASCII码值=%d\n",c1,c1);
    printf("c2=%c, ASCII码值=%d\n",c2,c2);
    return 0;
}