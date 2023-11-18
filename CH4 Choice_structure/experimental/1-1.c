#include <stdio.h>

int main(void){
    unsigned int num,r;
    printf("Input num:\n");
    scanf("%u",&num);
    r=num%2;
    if(r==0)
    printf("%d is an even.\n", num);
    if(r==1)
    printf("%d is an odd.\n", num);
    return 0;
}