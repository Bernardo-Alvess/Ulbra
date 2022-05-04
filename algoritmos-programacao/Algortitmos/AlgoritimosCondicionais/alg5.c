// Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra.
//Mostre, em seguida, os quatro números em ordem decrescente. 
//Suponha que o usuário digitará quatro números diferentes.

#include <stdio.h>

int main(){

    float n1, n2, n3, n4;

    printf("Digite tres numeros em ordem crescente:\n");
    scanf("%f%*c", &n1);
    scanf("%f%*c", &n2);
    scanf("%f%*c", &n3);

    printf("Digite um numero fora de ordem:\n");
    scanf("%f%*c", &n4);

    if(n1 < n2 && n2 < n3){
        if(n4 < n1 || n4 == n1){
            printf("A ordem decrescente e %2.f, %2.f, %2.f, %2.f", n3, n2, n1, n4); // n4, n3, n2, n1
        }
        else if(n4 > n2 && n4 < n3 || n4 == n2){
            printf("A ordem decrescente e %2.f, %2.f, %2.f, %2.f", n3, n4, n2, n1); // n1, n2, n3, n4
        }
        else if(n4 > n3 || n4 == n3){
            printf("A ordem decrescente e %2.f, %2.f, %2.f, %2.f", n4, n3, n2, n1); // n4, n3, n2, n1
        }
    }
    else{
        printf("Ordem dos tres primeiros numeros invalida");
    }


    return 0;
}