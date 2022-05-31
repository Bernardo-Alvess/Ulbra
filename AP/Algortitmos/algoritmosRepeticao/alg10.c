// Faça um programa para ler 10 valores inteiros. Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR.

#include <stdio.h>

int main(){

    int valor;

    printf("Vamos ver se o numero eh par ou impar:\n");

    for(int i = 0; i < 10; i++){
        printf("Valor inteiro: \n");
        scanf("%i%*c", &valor);
        if(valor % 2 == 0){
            printf("PAR\n");
        }
        else{
            printf("IMPAR\n");
        }
    }

    return 0;
}