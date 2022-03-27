#include <stdio.h>
#include <conio.h>

int main(){
    float salario_atual, novo_salario;

    printf("Qual o seu salário atual?\n");
    scanf("%f%*c", &salario_atual);

    novo_salario = salario_atual + salario_atual * 25/100;

    printf("Seu novo salário é de: R$%.2f", novo_salario);

    getch();
    return 0;
}