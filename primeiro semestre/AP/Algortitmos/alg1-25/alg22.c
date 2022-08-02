/*
Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.

*/

#include <stdio.h>

int main(){

    int idade;
    float peso;

    printf("Digite o seu peso:\n");
    scanf("%f%*c", &peso);
    printf("Digite a sua idade:\n");
    scanf("%i%*c", &idade);

    if(idade < 20){
        if(peso < 60){
            printf("Grupo de risco: 9");
        }
        else if(peso >= 60 && peso <= 90){
            printf("Grupo de risco: 8");
        }
        else if(peso > 90){
            printf("Grupo de risco: 7");
        }
    }
    else if(idade >= 20 && idade <= 50){
        if(peso < 60){
            printf("Grupo de risco: 6");
        }
        else if(peso >= 60 && peso <= 90){
            printf("Grupo de risco: 5");
        }
        else if(peso > 90){
            printf("Grupo de risco: 4");
        }
    }
    else if(idade > 50){
        if(peso < 60){
            printf("Grupo de risco: 3");
        }
        else if(peso >= 60 && peso <= 90){
            printf("Grupo de risco: 2");
        }
        else if(peso > 90){
            printf("Grupo de risco: 1");
        }
    }

    return 0;
}