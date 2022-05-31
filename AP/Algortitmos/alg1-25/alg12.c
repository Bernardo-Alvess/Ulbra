// Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
// mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário.

#include <stdio.h>

int main(){

    float salario, salario_receber, imposto;

    printf("Qual o valor do seu salário?\n");
    scanf("%f%*c", &salario);

    imposto = salario * 7/100;

    if(salario <= 350){
        salario_receber = salario + 100 - imposto;

        printf("Levando em conta a gratificação recebida de R$100 e o imposto de R$%.2f cobrado, você receberá: R$%.2f", imposto, salario_receber);
    }
    else if(salario > 350 || salario < 600){
        salario_receber = salario + 75 - imposto;

        printf("Levando em conta a gratificação recebida de R$75 e o imposto de R$%.2f cobrado, você receberá: R$%.2f", imposto, salario_receber);
    }
    else if(salario >= 600 || salario <= 900){
        salario_receber = salario + 50 - imposto;

        printf("Levando em conta a gratificação recebida de R$50 e o imposto de R$%.2f cobrado, você receberá: R$%.2f", imposto, salario_receber);
    }
    else{
        salario_receber = salario + 35 - imposto;

        printf("Levando em conta a gratificação recebida de R$35 e o imposto de R$%.2f cobrado, você receberá: R$%.2f", imposto, salario_receber);
    }


    return 0;
}