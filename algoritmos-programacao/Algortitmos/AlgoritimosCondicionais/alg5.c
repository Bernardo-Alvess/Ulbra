// Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra.
//Mostre, em seguida, os quatro números em ordem decrescente. 
//Suponha que o usuário digitará quatro números diferentes.

#include <stdio.h>

int main(){

    float n1, n2, n3, n4;

    printf("Digite tres numeros em ordem crescente:\n");
    printf("Numero 1:");
    scanf("%f%*c\n", &n1);
    printf("Numero 2:");
    scanf("%f%*c\n", &n2);
    printf("Numero 3:");
    scanf("%f%*c\n", &n3);

    printf("Digite um numero fora de ordem:\n");
    scanf("%f%*c\n", &n4);

    if(n4 > n3){
        printf("A ordem e 1: %.2f 2: %.2f 3: %.2f 4: %.2f", n4, n3, n2, n1);
    }
    else if(n4 > n2 && n4 < n3){
        printf("A ordem e 1: %.2f 2: %.2f 3: %.2f 4: %.2f", n3, n4, n2, n1);
    }
    else if(n4 > n1 && n4 < n2){
        printf("A ordem e 1: %.2f 2: %.2f 3: %.2f 4: %.2f", n4, n1, n2, n3);
    }
    else if(n4 < n1){
        printf("A ordem e 1: %.2f 2: %.2f 3: %.2f 4: %.2f", n4, n1, n2, n3);
    }

    return 0;
}