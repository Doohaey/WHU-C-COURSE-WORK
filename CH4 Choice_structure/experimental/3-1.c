#include<stdio.h>
int main(){
    int score;
    char grade;
    printf("Please input a score:\n");
    scanf("%d",&score);
    grade=score>=90?'A':(score>=60&&score<=89)?'B':'C';
    printf("%d belongs to %c", score, grade);
    return 0;
}