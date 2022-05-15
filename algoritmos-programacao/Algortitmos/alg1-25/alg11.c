//Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
//mostre o valor do aumento e o novo salário

#include <stdio.h>

int main(){

    float salario, aumento;

    printf("Qual o seu salario?\n");
    scanf("%f%*c", &salario);

    if(salario <= 300){
        aumento = (salario * 15) / 100;
        printf("O seu novo salario e de %.2f", salario + aumento);
    }
    else if(salario < 600){
        aumento = (salario * 10) / 100;

        printf("O seu novo salario e de %.2f", salario + aumento);
    }
    else if(salario >= 600 || salario <= 900){
        aumento = (salario * 5) / 100;

        printf("O seu novo salario e de %.2f", salario + aumento);
    }
    else{
        printf("O seu salario continua o mesmo");
    }
    return 0;
}