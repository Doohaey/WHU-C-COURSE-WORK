#include <stdio.h>

int main() {
    double principal = 8000; // 本金
    double annualInterestRate = 0.028; // 年利率
    double updatedInterestRate = 0.027; // 三年后的年利率
    int years = 0; // 存款年数

    while (1) {
        // 计算本年度的利息
        double interest = principal * annualInterestRate;
        principal += interest; // 更新本金

        years++; // 年数加1

        // 检查两个条件是否满足
        if (years >= 10 || principal >= 10000) {
            break; // 满足条件，退出循环
        }

        // 在第四年将年利率更新为新的利率
        if (years == 3) {
            annualInterestRate = updatedInterestRate;
        }
    }

    printf("储户将在第 %d 年将钱取出，取出时连本带息是 %.2lf 元。\n", years, principal);

    return 0;
}
