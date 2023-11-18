#include <stdio.h>

double function(double x)
{
    return 4.0 / (1 + x * x);
}

int main()
{
    double y1, y2, width, pos, s, sum = 0;
    int start = 0, end = 1, n;
    printf("请输入分割数量:");
    scanf("%d",&n);
    width = (double)(end - start) / n;
    n++;
    
    pos = start;
    y1 = function(pos);

    while (n--)
    {
        pos += width;
        y2 = function(pos);
        s = (y1 + y2) * width / 2;
        sum += s;
        y1 = y2;
    }

    printf("%lf", sum);
    
    return 0;
}