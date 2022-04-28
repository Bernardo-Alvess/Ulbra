// Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra.
//Mostre, em seguida, os quatro números em ordem decrescente. 
//Suponha que o usuário digitará quatro números diferentes.

#include <stdio.h>

int main(){

    float n1, n2, n3, n4;

    printf('Digite tres numeros em ordem crescente:\n');
    scanf("%f%*c\n", &n1);
    scanf("%f%*c\n", &n2);
    scanf("%f%*c\n", &n3);

    printf('Digite um numero fora de ordem:\n');
    scanf("%f%*c\n", &n4);

    

    return 0;
}