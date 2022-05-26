// Elabore um programa que escreva a tabuada de um número qualquer.

#include <stdio.h>

int main(){

    int numero_tabuada;

    printf("Digite um numero para ver a sua tabuada:\n");
    scanf("%i%*c", &numero_tabuada);

    for(int i = 1; i <= 10; i++){
        printf("%i x %i = %i\n", numero_tabuada, i, numero_tabuada * i);
    }

    return 0;
}