#include <stdio.h>

int main(){
    char a,b,c;
    printf("请输入三个字符a,b,c:");
    a=getchar();
    b=getchar();
    c=getchar();

    printf("用putchar语句输出三个字符，结果为：");
    putchar(a);
    putchar(b);
    putchar(c);
    printf("\n");
    printf("用printf语句输出三个字符的ASCII码值，结果为：");
    printf("%d %d %d",a,b,c);

    return 0;
}