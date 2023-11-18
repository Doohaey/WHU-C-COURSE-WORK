#include <stdio.h>

void encrypt(char *str, int size){
    for (int i = 0; i < size; i++){
        str[i] += 3;
        printf("%c",str[i]);
    }
}

int main(){
    char wuhan[5] = "Wuhan";
    encrypt(wuhan,5);
    
    return 0;
}