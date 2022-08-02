/*
Faça um programa que preencha um vetor com seis elementos nuéricos inteiros, calcule e mostre

- Todos os números pares
- A quantidade de números pares
- Todos os números ímpares
- A quantidade de números ímpares
*/

#include <stdio.h>

int main(){

    int vetor[6], quantidadePares = 0, quantidadeImpares = 0;

    for(int i = 0; i < 6; i++){
        printf("Digite um valor para o posicao %i: ", i);
        scanf("%i%*c", &vetor[i]);
    }

    for(int i = 0; i < 6; i++){
        if(vetor[i] % 2 == 0 && vetor[i] != 0){
            printf("vetor[%i] = %i | Par\n", i, vetor[i]);
            quantidadePares++;
        }
        else if(vetor[i] == 0){
            printf("vetor[%i] = %i | Valor nulo\n", i, vetor[i]);
        }
        else{
            printf("vetor[%i] = %i | Impar\n", i, vetor[i]);
            quantidadeImpares++;
        }
    }

    printf("Quantidade de pares: %i\n", quantidadePares);
    printf("Quantidade de impares: %i\n", quantidadeImpares);
    return 0;
}