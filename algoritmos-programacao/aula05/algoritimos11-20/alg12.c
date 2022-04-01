//Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro
#include <stdio.h>
#include <math.h>

int main(){
    float num1, num2, num1_pow, num2_pow;

    printf("Qual o primeiro numero?\n");
    scanf("%f%*c", &num1);

    printf("Qual o segundo numero?\n");
    scanf("%f%*c", &num2);

    num1_pow = pow(num1, num2);
    num2_pow = pow(num2, num1);

    printf("Numero %2.1f elevado a %2.1f = %2.1f\n", num1, num2, num1_pow);
    printf("Numero %2.1f elevado a %2.1f = %2.1f", num2, num1, num2_pow);

    return 0;
}