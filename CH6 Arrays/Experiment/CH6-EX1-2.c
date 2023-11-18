#include<stdio.h>
#define N 30

int main(void) {
    float a[N], temp, ave, sum=0;
    int i, j, flag, count = 0;

    printf("请输入%d个数:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%f", &a[i]);
        sum += a[i]; // 同时计算总分
    }

    // 冒泡排序算法
    for(i = 0; i < N - 1; i++) {
        flag = 0; // 标记是否发生了交换
        for(j = 0; j < N - 1 - i; j++) {
            if(a[j] < a[j + 1]) { // 比较相邻两个元素
                temp = a[j]; // 交换操作
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1; // 发生了交换，设置标记为1
            }
        }
        if(flag == 0) break; // 如果没有发生交换，则已经排序完成
    }

    printf("排序后的%d个数:\n", N);
    for(i = 0; i < N; i++) {
        printf("%f ", a[i]);
    }
    printf("\n");

    // 计算平均分
    ave = sum / N;

    // 统计高于平均分的人数
    for(i = 0; i < N; i++) {
        if(a[i] > ave) {
            count++;
        }
    }

    printf("平均成绩是: %.2f\n", ave);
    printf("高于平均分的人数: %d\n", count);

    return 0;
}
