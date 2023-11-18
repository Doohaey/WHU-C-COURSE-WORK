#include <stdio.h>

int main(){
    char c;

    printf("请输入一个字符：");
    c = getchar();

    if (c>='a'&&c<='z'){
        c=c-32;
        printf("letter %c\n",c);
    } else if (c>='A'&&c<='Z') {
        c=c+32;
        printf("letter %c\n",c);
    } else if (c>='0'&&c<='9') {
        printf("digit %c\n", c);
    } else {
        printf("other character \n");
        if (c=='@'||c=='#'){
            printf("%c\n",c);
        }
    }

    return 0;
}