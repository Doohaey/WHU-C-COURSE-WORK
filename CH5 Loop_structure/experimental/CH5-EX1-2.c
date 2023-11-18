#include <stdio.h>
#include <math.h>

int main(){
    int a, n, count=1;
    int sn=0, tn=0;
    printf("Please input a and n: \n");
    scanf("%d%d", &a, &n);
    printf("a = %d, n = %d\n", a, n);

    do {
        tn = count - 1;
        sn += a * (n - tn) * pow(10,tn);
        count++;
    } while (count <= n);
    
    printf("a+aa+...=%ld\n",sn);

    return 0;
}