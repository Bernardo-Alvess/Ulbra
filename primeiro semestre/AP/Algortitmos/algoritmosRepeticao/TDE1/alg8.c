// Elabore um programa que escreva a tabuada do número 9.

#include <stdio.h>

int main(){

    printf("Tabuada do numero 9\n");

    for(int i = 0; i < 10; i++){
        printf("9 x %i = %i\n", i + 1, 9 * i + 1);
    }

    return 0;
}