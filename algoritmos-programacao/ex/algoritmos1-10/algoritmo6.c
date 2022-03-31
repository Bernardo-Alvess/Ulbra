#include <stdio.h>
#include <conio.h>

int main(){
    float salario, salario_receber, grat, imposto;

    printf("Qual o valor do seu salário?\n");
    scanf("%f%*c", &salario);

    grat = salario * 5/100;
    imposto = salario * 7/100;

    salario_receber = salario + grat - imposto;

    printf("Levando em conta a gratificação recebida de R$%.2f e o imposto de R$%.2f cobrado, você receberá: R$%.2f", grat, imposto, salario_receber);

    getch();
    return 0;
}
