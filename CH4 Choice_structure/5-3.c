#include <stdio.h>

int main() {
    int wordCount; // 报文字数
    char telegramType; // 电报类型: 'n'为普通电报, 'u'为加急电报
    double fee = 0; // 电报费用

    printf("请输入报文字数: ");
    scanf("%d", &wordCount);

    getchar(); // 消除缓冲区中的换行符

    printf("请输入电报类型(n为普通电报, u为加急电报): ");
    scanf("%c", &telegramType);

    if (telegramType == 'n') {
        if (wordCount < 10) {
            fee = 10 * 0.75;
        } else {
            fee = wordCount * 0.75;
        }
    } else if (telegramType == 'u') {
        wordCount++; // 加上一个字
        if (wordCount < 10) {
            fee = 10 * 0.75 * 2; // 加倍收费
        } else {
            fee = wordCount * 0.75 * 2; // 加倍收费
        }
    } else {
        printf("输入的电报类型无效！\n");
        return 1; // 退出程序
    }

    printf("电报费用为: %.2lf元\n", fee);

    return 0;
}
