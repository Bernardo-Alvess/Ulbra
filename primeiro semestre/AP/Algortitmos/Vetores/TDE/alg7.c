// Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima  o vetor, o maior elemento e a posição em que ele se encontra. 

#include <stdio.h>

int main(){

    int vetor[10], index, count;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor da posicao %i\n", i+1);
        scanf("%i%*c", &vetor[i]);
    }

    int maior = vetor[0];

    for(int i = 0; i < 10; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
            count++;
        }
    }

    printf("O maior numero do vetor e: %i\n", maior);
    printf("Ele se encontra no index: %i", count+1);

    return 0;
}