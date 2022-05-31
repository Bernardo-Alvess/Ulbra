//  Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ na ordem inversa. 

#include <stdio.h>

int main(){

    int vetor[6];

    for(int i = 0; i < 6; i++){
        printf("Digite um valor para a posicao %i\n", i+1);
        scanf("%i%*c", &vetor[i]);
    }

    for(int i = 5; i >= 0; i--){
        printf("vetor[%i] = %i\n", i+1, vetor[i]);
    }

    return 0;
}