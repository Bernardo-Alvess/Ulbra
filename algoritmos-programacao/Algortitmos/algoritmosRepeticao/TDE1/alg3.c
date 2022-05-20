// Efetue um programa que mostre todos os números inteiros ímpares situados numa  faixa de dois números digitados pelo usuário. Esse algoritmo deve ser feito duas vezes uma usando o WHILE e DO-WHILE

#include <stdio.h>

int main(){

    int i;
    int max_count;

    printf("Digite um valor:\n");
    scanf("%i%*c", &i);

    printf("Digite outro valor:\n");
    scanf("%i%*c", &max_count);

    // printf("Usando o loop while\n");

    // while(i <= max_count){
    //     if(i % 2 != 0){
    //         printf("%i\n", i);
    //     }
    //     i++;
    // }

    printf("Usando o loop do while\n");

    do{
        if(i % 2 != 0){
            printf("%i\n", i);
        }
        i++;
    }while(i <= 1500);


    return 0;
}