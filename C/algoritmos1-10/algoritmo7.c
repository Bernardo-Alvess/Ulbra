#include <stdio.h>

int main(){
    float salario, salario_receber, imposto;

    printf("Qual o valor do seu salário?\n");
    scanf("%f%*c", &salario);

    imposto = salario * 10/100;

    salario_receber = salario + 50 - imposto;

    printf("Levando em conta a gratificação recebida e o imposto cobrado, você receberá: R$%.2f", salario_receber);

    return 0;
}
