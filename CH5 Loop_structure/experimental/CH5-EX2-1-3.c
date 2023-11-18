#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    int sum, t;
    int n, i, j;
    printf("Please input how many terms you want the computer to calculate(1—9):\n");
    scanf("%d", &n);
    if(n < 1 || n >= 10)
    {
        printf("Overflow! \n");
        exit(0);
    }
    
    sum = 0;
    i = -1;
    while (++i <= n)
    {   
        t = 0;
        j = -1;
        while (++j < i) {
            t += pow(10, j) * i;
        }

        sum += t;
    }
    

    printf("sum = %d\n", sum);
  
    return 0;
}