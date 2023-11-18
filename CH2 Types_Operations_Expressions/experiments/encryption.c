#include <stdio.h>

int main(){
    char welcome[] = {'w','e','l','c','o','m','e'};
    for (int i = 0; i < 7; i++) {
        welcome[i] += 2;
        printf("%c", welcome[i]);
    }

    return 0;
}