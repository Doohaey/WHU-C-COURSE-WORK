#include<stdio.h>
#define N 10

int main(void) {
    float score[N], sum, min, max, ave;
    int i;
    
    printf("请输入%d位评委的评分:\n", N);
    
    // 输入第一位评委的评分，并初始化sum, min, max
    printf("请输入第1位评委的评分:\n");
    scanf("%f", &score[0]);
    sum = min = max = score[0];
    
    // 从第二位评委开始输入评分
    for(i = 1; i < N; i++) {
        printf("请输入第%d位评委的评分:\n", i + 1);
        scanf("%f", &score[i]);
        
        // 累加得分
        sum += score[i];
        
        // 更新最高分
        if(score[i] > max) {
            max = score[i];
        }
        
        // 更新最低分
        if(score[i] < min) {
            min = score[i];
        }
    }
    
    // 计算平均分
    ave = (sum - max - min) / (N - 2);
    
    printf("该选手的得分是:%.2f\n", ave);
    return 0;
}
