#include <stdio.h>

int main() {
    int numbers[20];
    int positive_sum = 0;
    int positive_count = 0;
    int i;

    printf("Enter 20 numbers:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 20; i++) {
        if (numbers[i] > 0) {
            positive_sum += numbers[i];
            positive_count++;
        }
    }

    printf("The sum of positive numbers is: %d\n", positive_sum);
    printf("The count of positive numbers is: %d\n", positive_count);

    return 0;
}
