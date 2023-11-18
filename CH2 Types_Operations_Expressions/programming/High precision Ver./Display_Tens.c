#include <stdio.h>
#include <stdlib.h>
/*这是Display_Ten.c文件中题目的第二种实现方式。
* 可以处理任意位数的输入。
*/
int main(){
    char str[4] = {0};
    int count = 0;

    while ((str[3] = getchar()) != EOF) {
        str[0] = str[1];
        str[1] = str[2];
        str[2] = str[3];
        count++;
    }

    if (count > 1) {
        printf("%c \n", str[0]);
    } else {
        fprintf(stderr, "Error: Not enough characters inputted.\n");
        exit(1);
    }
    
    return 0;
}
