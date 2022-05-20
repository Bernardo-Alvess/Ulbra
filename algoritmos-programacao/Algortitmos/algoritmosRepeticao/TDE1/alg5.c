// Faça um programa que leia um número N, e realize a soma dos números de 1 a N. Ao final, deve-se escrever o resultado. Esse algoritmo deve ser feito duas vezes uma usando o While e Do-While

#include <stdio.h>

int main(){

    int i = 1, max_count;
    float soma = 0;

    printf("Digite um numero final para o range da soma:\n");
    scanf("%i%*c", &max_count);

    while(i <= max_count){
        soma += i;
        i++;
    }

    printf("A soma total dos numeros e de: %.2f", soma);

    // do{
    //     soma += i;
    //     i++;
    // }while(i <= max_count);

    // printf("A soma total dos numeros e de: %.2f", soma);

    return 0;
}