#include<stdio.h>

int main(void) {
    int score[5][7] = {0}, sum[5] = {0}, aver[5] = {0};
    int i, j, high = 1, low = 1, sh, sl;

    printf("Input scores:\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 6; j++) {
            scanf("%d", &score[i][j]);
            // 判断输入的成绩是否为非负数且不超过100
            while (score[i][j] < 0 || score[i][j] > 100) {
                printf("Invalid score, please enter a value between 0 and 100:\n");
                scanf("%d", &score[i][j]);
            }
        }
    }

    // 计算每个学生的总分和平均分
    for (i = 1; i <= 4; i++) {
        sum[i] = 0; // 初始化总分
        for (j = 1; j <= 6; j++) {
            sum[i] += score[i][j];
        }
        aver[i] = sum[i] / 6; // 计算平均分
    }

    // 找出总分最高和最低的学生
    sh = sl = sum[1];
    for (i = 2; i <= 4; i++) {
        if (sum[i] > sh) {
            sh = sum[i];
            high = i;
        }
        if (sum[i] < sl) {
            sl = sum[i];
            low = i;
        }
    }

    printf("%d has the highest total score,\n%d has the lowest total score\n", high, low);

    // 根据输入的学生学号，输出该生各次考试成绩和平均成绩
    printf("Please enter the student number:");
    scanf("%d", &i);
    while (i < 1 || i > 4) {
        printf("Invalid number, please re-enter:\n");
        scanf("%d", &i);
    }
    printf("Scores for student %d are: ", i);
    for (j = 1; j <= 6; j++) {
        printf("%d ", score[i][j]);
    }
    printf("with an average of: %d\n", aver[i]);

    // 根据输入的考试次数，输出该次考试中每个学生的成绩和这次考试的平均成绩
    printf("Please enter the test number:");
    scanf("%d", &j);
    while (j < 1 || j > 6) {
        printf("Invalid number, please re-enter:\n");
        scanf("%d", &j);
    }
    int total = 0;
    printf("Scores for test %d are: ", j);
    for (i = 1; i <= 4; i++) {
        printf("%d ", score[i][j]);
        total += score[i][j];
    }
    printf("\nThe average score for test %d is: %d\n", j, total / 4);

    return 0;
}

