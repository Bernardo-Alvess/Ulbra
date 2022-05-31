// Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento encontra-se na tabela a seguir.
// Até R$ 300,00 35%
// Acima de R$ 300,00 15%

#include <stdio.h>

int main(){

    float salario, novo_salario;

    printf("Digite o seu salario: \nR$");
    scanf("%f%*c", &salario);

    if(salario <= 300){
        printf("Parabens, voce tem direito ao aumento de 35 porcento do seu salario\n");
        printf("Novo salario: R$%.2f", salario + (salario * 35) / 100);
    }
    else{
        printf("Parabens, voce tem direito ao aumento de 15 porcento do seu salario\n");
        printf("Novo salario: R$%.2f", salario + (salario * 15) / 100);    }

    return 0;
}