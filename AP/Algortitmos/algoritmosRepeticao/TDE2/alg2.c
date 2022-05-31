// Faça um programa para repetir a leitura de um número enquanto o valor fornecido for diferente de 0. Para cada número fornecido, escrever se ele é NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve ser encerrada sem escrever mensagem alguma.

#include <stdio.h>

int main(){

    int num;

    do{
        printf("Digite um numero: \n");
        scanf("%i%*c", &num);
        if(num > 0){
            printf("Numero positivo\n");
        }
        else if(num < 0){
            printf("Numero negativo\n");
        }
        else{
            break;
        }
    }while(num != 0);

    return 0;
}