//Faça um programa que receba dois números e mostre o maior.

#include <stdio.h>

int main(){

    float num1, num2;

    printf("Digite o numero 1:\n");
    scanf("%f%*c", &num1);
    printf("Digite o numero 2:\n");
    scanf("%f%*c", &num2);

    if(num1 > num2){
        printf("O numero %.2f e maior que %.2f", num1, num2);
    }
    else{
        printf("O numero %.2f e maior que %.2f", num2, num1);
    }

    return 0;
}