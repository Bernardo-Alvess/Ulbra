//Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não

#include <stdio.h>

int main(){

    int idade;

    printf("Digita a sua idade:\n");
    scanf("%i%*c", &idade);

    if(idade >= 18){
        printf("Maior de idade\n");
    }
    else{
        printf("Menor de idade\n");
    }

    return 0;
}