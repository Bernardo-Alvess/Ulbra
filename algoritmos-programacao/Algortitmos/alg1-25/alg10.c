// O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a seguir.
//Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.

// Custo de fábrica     % do distribuidor   % impostos

// Até R$ 12.000,00     5                   isento

// Entre R$ 12.000,00   10                  15
// e R$ 25.000,00 

// Acima de R$ 25.000,00 15                 20

#include <stdio.h>

int main(){

    float preco_fab, imp, distribuidor;

    printf("Qual o preço do carro?\n");
    scanf("%f%*c", &preco_fab);

    if(preco_fab <= 12000){
        distribuidor = (preco_fab * 5) / 100;
        printf("O preco do carro e de %.2f", preco_fab + distribuidor);
    }
    else if(preco_fab <= 25000){
        distribuidor = (preco_fab * 10) / 100;
        imp = (preco_fab * 15) / 100;

        printf("O preco do carro e de %.2f", preco_fab + imp + distribuidor);
    }
    else{
        distribuidor = (preco_fab * 15) / 100;
        imp = (preco_fab * 20) / 100;

        printf("O preco do carro e de %.2f", preco_fab + imp + distribuidor);
    }

    return 0;
}