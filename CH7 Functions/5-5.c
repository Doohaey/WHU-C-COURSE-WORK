#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;     
    int score; 
} Student;

int *findIndexes(Student *students, int size, int targetScore, int *count);

int main() {
    Student students[] = {
        {1001, 275}, {1002, 248}, {1003, 195}, {1004, 170},
        {1005, 260}, {1006, 275}, {1007, 259}, {1008, 260},
        {1009, 288}, {1010, 260}
    };
    int size = sizeof(students) / sizeof(students[0]);
    int targetScore;
    printf("输入要查找的最低总分：");
    scanf("%d", &targetScore);

    int count;
    int *indexes = findIndexes(students, size, targetScore, &count);

    printf("总分大于或等于 %d 的学生学号有：\n", targetScore);
    for (int i = 0; i < count; i++) {
        printf("%d\n", students[indexes[i]].id);
    }

    free(indexes);

    return 0;
}

int *findIndexes(Student *students, int size, int targetScore, int *count) {
    int *indexes = (int *)malloc(size * sizeof(int));
    if (indexes == NULL) {
        fprintf(stderr, "内存分配失败。\n");
        exit(1);
    }
    *count = 0;
    for (int i = 0; i < size; i++) {
        if (students[i].score >= targetScore) {
            indexes[(*count)++] = i;
        }
    }
    return indexes;
}
