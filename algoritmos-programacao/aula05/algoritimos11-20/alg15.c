// O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
// distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
//preco_total = preco_fab + percentual_lucro + impostos

// a) o valor correspondente ao lucro do distribuidor;
// b) o valor correspondente aos impostos;
// c) o preço final do veículo

#include <stdio.h>

int main(){

    float preco_fab, percentual_lucro, valor_lucro, impostos, valor_imposto, preco_total;

    printf("Qual o preço de fabrico do carro?\n");
    scanf("%f%*c", &preco_fab);
    printf("Qual o percentual de lucro?");
    scanf("%f%*c", &percentual_lucro);
    printf("Qual o percentual dos impostos?");
    scanf("%f%*c", &impostos);

    valor_lucro = preco_fab * percentual_lucro/100;
    valor_imposto = preco_fab * impostos/100;
    preco_total = preco_fab + valor_imposto + valor_lucro;

    printf("Valor de fabrica do carro é de R$:%.2f", preco_fab);

}