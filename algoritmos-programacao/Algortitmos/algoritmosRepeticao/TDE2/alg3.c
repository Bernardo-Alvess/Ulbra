// Faça um programa para ler uma quantidade indeterminada de valores inteiros. Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. O programa será encerrado imediatamente após a leitura de um valor NULO (zero) ou NEGATIVO.

#include <stdio.h>

int main(){
    int num;

    do{

        printf("Digite um numero:\n");
        scanf("%i%*c", &num);

        if(num % 2 == 0 && num > 0){
            printf("Numero par\n");
        }
        else if(num % 2 != 0 && num > 0){
            printf("Numero impar\n");
        }
        else{
            break;
        }

    }while (num > 0);
}
