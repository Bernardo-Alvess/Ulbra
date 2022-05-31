/*
Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de refrigeração).
Calcule e mostre:
- O valor do aumento, usando as regras que se seguem.

PREÇO  CAT PERC

        1   5%
<= 25   2   8%
        3   10%

        1   12%
> 25    2   15%
        3   18%

- O valor do imposto, usando as regras a seguir.

O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5%
do preço; caso contrário, pagará 8%. Os requisitos são:

Categoria: 2
Situação: R

- O novo preço, ou seja, o preço mais aumento menos imposto.
- A classificação, usando as regras a seguir.

NOVO PREÇO                  CLASSE

<= R$50,00                  Barato
Entre R$50,00 e R$ 120,00   Normal
>= R$120,00                 Caro
*/


#include <stdio.h>

int main(){

    float preco, percAumento, imp;
    int categoria, i, op;

    printf("Preco do produto: R$");
    scanf("%f%*c", &preco);

    printf("Categorias:\n");
    printf("1 - Limpeza\n");
    printf("2 - Alimentacao\n");
    printf("3 - Vestuario\n");
    printf("Categoria do produto: ");
    scanf("%d%*c", &categoria);

    printf("Situacao:\n");
    printf("[1] - Refrigerado\n");
    printf("[2] - Nao refrigerado\n");
    printf("Situacao do produto:\n");
    scanf("%i%*c", &op);

    if(op == 2){
        imp = preco * 8 / 100;
    }

    else{
        imp = preco * 5 / 100;
    }
    

    if(preco <= 25){

        switch (categoria){

            case 1:
                percAumento = preco * 5 / 100;
                preco = (preco + percAumento) - imp;
                printf("Aumento de R$%.2f\n", percAumento);
                break;

            case 2:
                percAumento = preco * 8 / 100;
                preco = (preco + percAumento) - imp;
                printf("Aumento de R$%.2f\n", percAumento);
                break;

            default:
                percAumento = preco * 10 / 100;
                preco = (preco + percAumento) - imp;
                printf("Aumento de R$%.2f\n", percAumento);
                break;

        }

        if(preco <= 50){
            printf("Preco final: R$%.2f - BARATO", preco);
        }

        else if(preco > 50 && preco <= 120){
            printf("Preco final: R$%.2f - NORMAL", preco);
        }

        else{
            printf("Preco final: R$%.2f - CARO", preco);
        }
    }
    
    else if(preco > 25){

        switch(categoria){

            case 1:
                percAumento = preco * 12 / 100;
                preco = (preco + percAumento) - imp;
                printf("Aumento de R$%.2f\n", percAumento);
                break;

            case 2:
                percAumento = preco * 15 / 100;
                preco = (preco + percAumento) - imp;
                printf("Aumento de R$%.2f\n", percAumento);
                break;

            default:              
                percAumento = preco * 18 / 100;
                preco = (preco + percAumento) - imp;
                printf("Aumento de R$%.2f\n", percAumento);
                break;
        }

        if(preco <= 50){
            printf("Preco final: R$%.2f - BARATO", preco);
        }

        else if(preco > 50 && preco <= 120){
            printf("Preco final: R$%.2f - NORMAL", preco);
        }

        else{
            printf("Preco final: R$%.2f - CARO", preco);
        }
    }

    return 0;
}