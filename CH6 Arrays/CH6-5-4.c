#include <stdio.h>

int main() {
    int num, encrypted_num;
    int digits[4];

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    digits[0] = (num / 1000 + 5) % 10;
    digits[1] = (num / 100 % 10 + 5) % 10;
    digits[2] = (num / 10 % 10 + 5) % 10;
    digits[3] = (num % 10 + 5) % 10;

    encrypted_num = (digits[3] * 1000) + (digits[2] * 100) + (digits[1] * 10) + digits[0];

    printf("Encrypted number: %04d\n", encrypted_num);

    return 0;
}
