/*
Faça um programa que receba:
- o código do produto comprado; e
- a quantidade comprada do produto.
Calcule e mostre:
- o preço unitário do produto comprado, seguindo a Tabela I;
- o preço total da nota;
- o valor do desc, seguindo a Tabela II e aplicado sobre o preço total da nota; e
- o preço final da nota depois do desc. 

Tabela I

Cod 1 a 10 - R$ 10
Cod 11 a 20 - R$ 15
Cod 21 a 30 - R$ 20
Cod 31 a 40 - R$ 30

Tabela II

Preço total da nota     | % de desc

até R$ 250                  5%
R$ 250,00 - R$ 500,00       10%
acima de R$ 500,00          15%
*/

#include <stdio.h>

int main(){

    int codProduto, quantidadeItens;
    float preco, total, desc;

    printf("Codigo do produto:\n");
    scanf("%d%*c", &codProduto);

    printf("Quantidade comprada:\n");
    scanf("%d%*c", &quantidadeItens);

    if (codProduto >= 1 && codProduto <= 10){
        
        preco = 10 * quantidadeItens;
        total = preco;

        if(total <= 250){
            desc = total * 5 / 100;
            total -= desc;
            printf("Total %.2f", total);
        }

        else if(total > 250 && total <= 500){
            desc = total * 10 / 100;
            total -= desc;
            printf("Total %.2f", total);
        }

        else{
            desc = total * 15 / 100;
            total -= desc;
            printf("Total %.2f", total);
        }
    }

    else if(codProduto >= 11 && codProduto <= 20){

        preco = 15 * quantidadeItens;
        total = preco;

        if(total <= 250){
            desc = total * 5 / 100;
            total -= desc;
            printf("Total %.2f", total);
        }

        else if(total > 250 && total <= 500){
            desc = total * 10 / 100;
            total -= desc;
            printf("Total %.2f", total);
        }

        else{
            desc = total * 15 / 100;
            total -= desc;
            printf("Total %.2f", total);
        }
    }
    else if(codProduto >= 21 && codProduto <= 30){

        preco = 20 * quantidadeItens;
        total = preco;

        if(total <= 250){
            desc = total * 5 / 100;
            total -= desc;
            printf("Total %.2f", total);
        }

        else if(total > 250 && total <= 500){
            desc = total * 10 / 100;
            total -= desc;
            printf("Total %.2f", total);
        }

        else{
            desc = total * 15 / 100;
            total -= desc;
            printf("Total %.2f", total);
        }

    }
    else{

        preco = 30 * quantidadeItens;
        total = preco;

        if(total <= 250){
            desc = total * 5 / 100;
            total -= desc;
            printf("Total %.2f", total);
        }

        else if(total > 250 && total <= 500){
            desc = total * 10 / 100;
            total -= desc;
            printf("Total %.2f", total);
        }

        else{
            desc = total * 15 / 100;
            total -= desc;
            printf("Total %.2f", total);
        }
    }

    return 0;
}