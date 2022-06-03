/*
Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre

- os números múltiplos de 2
- os números múltiplos de 3
- os números múltiplos de 2 e 3
*/

#include <stdio.h>

int main(){

    int vetor[7];

    for(int i = 0; i < 7; i++){
        printf("Digite um valor para o posicao %i: ", i);
        scanf("%i%*c", &vetor[i]);
    }

    for(int i = 0; i < 7; i++){
        if(vetor[i] % 2 == 0 && vetor[i] % 3 == 0){
            printf("vetor[%i] = %i | Multiplo de 2 e de 3\n", i, vetor[i]);
        }
        else if(vetor[i] % 3 == 0){
            printf("vetor[%i] = %i | Multiplo de 3\n", i, vetor[i]);
        }
        else{
            printf("vetor[%i] = %i | Multiplo de 2\n", i, vetor[i]);
        }
    }

    return 0;
}