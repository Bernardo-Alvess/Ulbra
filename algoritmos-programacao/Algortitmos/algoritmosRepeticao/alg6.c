// Efetue um programa que leia 5 números. Para cada número fornecido, escrever se ele é NULO, NEGATIVO ou POSITIVO.

#include <stdio.h>

int main(){

    float numero;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero:\n");
        scanf("%f%*c", &numero);
        if(numero == 0){
            printf("O numero eh nulo\n");
        }
        else if(numero < 0){
            printf("O numero eh negativo\n");
        }
        else{
            printf("O numero eh positivo\n");
        }
    }

    return 0;
}