// Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h é a altura):
// ■■ para homens: (72.7 * h) – 58.
// ■■ para mulheres: (62.1 * h) – 44.7

#include <stdio.h>

int main(){

    float altura, formula;
    int sexo;

    printf("Qual a sua altura:\n");
    scanf("%f%*c", &altura);

    printf("Qual o seu sexo?\n");
    printf("1 - Masculino\n");
    printf("2 - Feminino\n");
    scanf("%i%*c", &sexo);

    switch (sexo)
    {
    case 1:
        formula = (72.7 * altura) - 58;
        printf("Peso ideal: %.2fKg", formula);
        break;
    
    case 2:
        formula = (62.1 * altura) - 44.7;
        printf("Peso ideal: %.2fKg", formula);
        break;

    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}