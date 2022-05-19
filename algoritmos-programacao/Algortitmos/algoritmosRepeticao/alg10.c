//Faça um programa para ler 10 valores inteiros. Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR.


#include <stdio.h>

int main(){

    int numerosDigitados = 0, numero;

    while(numerosDigitados < 10){

        printf("Digite um numero para ver se ele eh par ou impar: \n");
        scanf("%i%*c", &numero);

        if(numero % 2 == 0){
            printf("O numero %i eh par\n", numero);
        }
        else{
            printf("O numero %i eh impar\n", numero);
        }

        numerosDigitados++;
    }

    return 0;
}