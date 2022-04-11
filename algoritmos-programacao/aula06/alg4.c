/*
Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário
digitará três números diferentes.
*/

#include <stdio.h>

int main(){

    float num1, num2, num3;

    printf("Qual o numero 1: \t");
    scanf("%f%*c", &num1);
    printf("Qual o numero 2: \t");
    scanf("%f%*c", &num2);
    printf("Qual o numero 3: \t");
    scanf("%f%*c", &num3);

    return 0;
}
