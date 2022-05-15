// Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. 
//Faça um programa que receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.

// Até R$ 30,00 Sem desconto
// Entre R$ 30,00 e R$ 100,00 10%
// Acima de R$ 100,00 15%

#include <stdio.h>

int main(){

    float valor;
    int codigo_produto;

    printf("Digite o codigo do produto:\n");
    scanf("%i%*c", &codigo_produto);
    printf("Digite o valor do produto %i\n", codigo_produto);
    scanf("%f%*c", &valor);

    if(valor <= 30){
        printf("O produto %i nao tem desconto\n", codigo_produto);
    }
    else if(valor > 30 && valor <= 100){
        valor -= (valor * 10) / 100;
        printf("O produto ficara com o valor de R$%.2f\n", valor);
    }
    else{
        valor -= (valor * 15) / 100;
        printf("O produto ficara com o valor de R$%.2f\n", valor);
    }

    return 0;
}