// Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a seguir. Mostre o saldo médio e o valor do crédito. 

// Acima de R$ 400,00 30% do saldo médio
// R$ 400,00 R$ 300,00 25% do saldo médio
// R$ 300,00 R$ 200,00 20% do saldo médio
// Até R$ 200,00 10% do saldo médio

#include <stdio.h>

int main(){

    float saldo_medio, credito;

    printf("Digite o seu saldo medio:\n");
    scanf("%f%*c", &saldo_medio);

    if(saldo_medio <= 200){
        printf("Voce teve um saldo medio de R$%.2f e obteve um credito de R$%.2f", saldo_medio, (saldo_medio * 10) / 100);
    }
    else if(saldo_medio <= 300){
         printf("Voce teve um saldo medio de R$%.2f e obteve um credito de R$%.2f", saldo_medio, (saldo_medio * 20) / 100);
    }
    else if(saldo_medio <= 400){
         printf("Voce teve um saldo medio de R$%.2f e obteve um credito de R$%.2f", saldo_medio, (saldo_medio * 25) / 100);
    }
    else{
         printf("Voce teve um saldo medio de R$%.2f e obteve um credito de R$%.2f", saldo_medio, (saldo_medio * 30) / 100);
    }

    return 0;
}