#include <stdio.h>

int isLeap(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int daysInMonth(int year, int month) {
    if (month == 2) return (isLeap(year)) ?  29 : 28; 
    else if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    else return 31;
}

int isLegal(int date[]) {
    if (date[1] >= 13) return 0;
    else if (date[2] < 1 || date[2] > daysInMonth(date[0], date[1])) return 0;
    return 1;
}

void dateInput(int date[]) {
    do {
        printf("\n请输入一个合法的日期:");
        for (int i = 0; i < 3; i++) scanf("%d",&date[i]);
    } while (!isLegal(date));
}

int calculate(int date1[], int date2[]) {
    int days = 0;

    date1[0] = (date1[1] > date2[1] || (date1[1] == date2[1] && date1[2] >= date2[2])) ? date2[0] : date2[0] + 1;
    if (date1[0] == date2[0]) {
        if (date1[1] == date2[1]) return date1[2] - date2[2];
        for (int i = date2[1] + 1; i < date1[1]; i++) days += daysInMonth(date2[0], i);
    } else {
        for (int i = date2[1] + 1; i < 13; i++) days += daysInMonth(date2[0], i);
        for (int i = 1; i < date1[1]; i++) days += daysInMonth(date1[0], i);
    }
    days += daysInMonth(date2[0], date2[1]) - date2[2];
    days += date1[2];

    return days;
}

int main(){
    int date1[3],date2[3], days;
    printf("请输入出生日期");
    dateInput(date1);
    printf("请输入现日期");
    dateInput(date2);

    days = calculate(date1, date2);

    printf("距离下次生日还有 %d 日。", days);
    return 0;
}