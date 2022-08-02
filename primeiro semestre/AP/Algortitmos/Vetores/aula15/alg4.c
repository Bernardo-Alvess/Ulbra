//Faça um programa que preencha um vetor com quinze elemento inteiros e verifique a existência de elementos iguais a 30, mostrando as posições em que aparecem.

#include <stdio.h>

int main(){

    int tam = 15;
    int vetor[15]; 

    for(int i = 0; i < tam; i++){
        printf("Digite um valor para a posicao %i: ", i);
        scanf("%i%*c", & vetor[i]);
    }

    for(int i = 0; i < tam; i++){
        if(vetor[i] == 30){
            printf("O valor 30 esta presente na posicao: %i\n", i);
        }
    }
    return 0;
}