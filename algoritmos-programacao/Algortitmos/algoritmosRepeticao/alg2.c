// Efetue um programa que mostre todos os números inteiros ímpares situados na faixa de 1000 a 1500. Esse algoritmo deve ser feito duas vezes uma usando o FOR,WHILE;

#include <stdio.h>

int main(){

    printf("Usando o loop for\n");

    int i = 1000;

    while(i<=1500){
        if(i % 2 != 0){
            printf("%i\n", i);
        }
        i++;
    }

    // printf("Usando o loop while\n");

    // for(int i = 1000; i <= 1500; i++){
    //     if(i % 2 != 0){
    //         printf("%i\n", i);
    //     }
    // }

    return 0;
}