// Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
// do usuário.

// 1 - Média entre os números digitados
// 2 - Diferença do maior pelo menor
// 3 - Produto entre os números digitados
// 4 - Divisão do primeiro pelo segundo

#include <stdio.h>

int main(){

    float n1, n2;
    int op;

    printf("Digite o primeiro numero: \n");
    scanf("%f%*c", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%f%*c", &n2);

    printf("1 - Media entre os numeros digitados\n");
    printf("2 - Diferenca do maior pelo menor\n");
    printf("3 - Produto entre os numeros digitados\n");
    printf("4 - Divisao do primeiro pelo segundo\n");

    printf("Escolha a opcao: \n");
    scanf("%i%*c", &op);

    switch (op)
    {
    case 1:
        printf("A media entre os numeros e de: %.2f", (n1 + n2) / 2);
        break;
    
    case 2:
        if (n1 > n2)
        {
            printf("A diferenca do maior pelo menor e de: %.2f", n1 - n2);
        }
        else{
            printf("A diferenca do maior pelo menor e de: %.2f", n2 - n1);
        }
        break;

    case 3:
        printf("O produto entre os numeros digitados e de: %.2f", n1 * n2);
        break;

    case 4:
        if(n2 != 0){
            printf("Divisao do primeiro pelo segundo: %.2f", n1 / n2);
        }
        else{
            printf("ERRO: NAO E POSSIVEL DIVIDIR POR ZERO");
        }
        break;
    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}