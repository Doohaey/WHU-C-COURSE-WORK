#include <stdio.h>

int main(){
    int x, y, z, i, j;
    printf("%d\n",(x=1, y = 100, z=(x + y) * 5));
    printf("%d\n",(x = (i = 10, j = 5, i * j)));
    printf("%d\n",(x = i = 10, j = 5, i * j));
    
    return 0;
}