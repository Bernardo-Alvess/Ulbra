// 8. Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados necessários para executar cada operação.
// Menu de opções:
// 1. Somar dois números.
// 2. Raiz quadrada de um número.

#include <stdio.h>
#include <math.h>

int main(){

    int op;
    float num1, num2;

    printf("Menu de opcoes:\n");
    printf("1 - somar dois numeros\n");
    printf("2 - Raiz quadrada de um numero\n");
    scanf("%i%*c", &op);

    switch (op){

    case 1:
        printf("Digite dois numeros para soma:\n");
        printf("Numero 1:\n");
        scanf("%f%*c", &num1);
        printf("Numero 2\n", &num2);
        scanf("%f%*c", &num2);
        printf("A soma dos dois numeros e de: %.2f", num1 + num2);
        break;
    
    case 2:
        printf("Digite um numero para obter a raiz quadrada:\n");
        scanf("%f%*c", &num1);
        printf("A raiz do numero e %.2f", sqrt(num1));
        break;

    default:
        printf("Opcao invalida");
        break;

    }

    return 0;
}