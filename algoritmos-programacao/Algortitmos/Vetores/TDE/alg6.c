 //Faça um programa que receba do usuário um vetor com 10 posições. Em seguida, deverá ser impresso o maior e o menor elemento do vetor. 

#include <stdio.h>

int main(){

    int vetor[10], maior, menor;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor para a posicao %i\n", i);
        scanf("%d%*c", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0; i < 10; ++i){
        if(maior < vetor[i]){
            maior = vetor[i];
        }
        if(menor > vetor[i]){
            menor = vetor[i];
        }
    }

    printf("Maior valor: %i\n", maior);
    printf("Menor valor: %i\n", menor);

    return 0;
}