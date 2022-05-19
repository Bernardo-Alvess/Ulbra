//Elabore um programa que escreva a tabuada de um número qualquer.

#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero para ver a sua tabuada: ");
    scanf("%i%*c", &num);

    for(int i = 1; i < 11; i++){
        printf("%i x %i = %i\n", num, i, num*i);
    }

    return 0;
}