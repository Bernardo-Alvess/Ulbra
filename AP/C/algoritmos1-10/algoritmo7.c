#include <stdio.h>
#include <conio.h>


int main(){
    float salario, salario_receber, imposto;

    printf("Qual o valor do seu salário?\n");
    scanf("%f%*c", &salario);

    imposto = salario * 10/100;

    salario_receber = salario + 50 - imposto;

    printf("Levando em conta a gratificação recebida de R$50 e o imposto de R$%.2f cobrado, você receberá: R$%.2f", imposto, salario_receber);
    
    getch();
    return 0;
}
