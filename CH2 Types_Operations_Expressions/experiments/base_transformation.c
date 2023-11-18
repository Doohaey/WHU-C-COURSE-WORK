#include <stdio.h>

int main(){
    printf("%d, %o, %x\n", 225,225,225);
    printf("%d, %o, %x\n", 0133,0133,0133);
    
    int a = 0x65;
    printf("%d, 0%o, 0x%x\n", a,a,a);
    
    return 0;
}