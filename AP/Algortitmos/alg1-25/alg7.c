// Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00.
// Faça um programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso ele não tenha direito ao aumento

#include <stdio.h>

int main(){

    float salario, novo_salario;

    printf("Vamos verificar se voce tem direito ao aumento de salario");
    printf("Digite o seu salario: \nR$");
    scanf("%f%*c", &salario);

    if(salario <= 500){
        printf("Parabens, voce tem direito ao aumento de 30 porcento do seu salario\n");
        printf("Novo salario: R$%.2f", salario + (salario * 30) / 100);
    }
    else{
        printf("Voce nao tem direito ao aumento de salario, pois ganha R$500 ou mais");
    }

    return 0;
}