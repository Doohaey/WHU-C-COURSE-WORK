#include <stdio.h>

int main() {
    int num1, num2, num3;
    float score1, score2, score3, ave;
    
    printf("请输入3个学号:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("请输入3个数学成绩: \n");
    scanf("%f %f %f", &score1, &score2, &score3);

    /* 计算平均成绩 */
    ave = (score1 + score2 + score3) / 3;
    
    /* 输出3人的学号和成绩 */
    printf("学号%d: 成绩%.1f\n", num1, score1);
    printf("学号%d: 成绩%.1f\n", num2, score2);
    printf("学号%d: 成绩%.1f\n", num3, score3);
    
    /* 输出平均成绩 */
    printf("平均成绩: %.1f\n", ave);

    return 0;
}
