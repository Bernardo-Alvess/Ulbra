#include <stdio.h>
#include <conio.h>

int main(){
    float salario_atual, novo_salario, percentual, aumento;

    printf("Qual o seu salário atual?\n");
    scanf("%f%*c", &salario_atual);

    printf("Qual o percentual de aumento?\n");
    scanf("%f%*c", &percentual);

    aumento = salario_atual * percentual/100;
    novo_salario = aumento +  salario_atual;

    printf("O seu salário aumentou em: RS%.2f Seu novo salário é de: R$%.2f", aumento, novo_salario);

    getch();
    return 0;
}