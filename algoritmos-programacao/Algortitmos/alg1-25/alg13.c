/*Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.
        
 PERCENTUAL DE IMPOSTO

 Preço          imposto
 até 50         5
 entre 50-100   10
 acima de 100   15

 CLASSIFICAÇÃO DO PREÇO

 Preço                          Classificação
 até 80                         Barato
 entre 80 e 120 (inclusive)     Normal
 entre 120 e 200 (inclusive)    Caro
 maior que 200                  Muito caro
*/

#include <stdio.h>

int main(){

    float valor_prod, imposto;
    printf("Digite o valor de um produto:\n");
    scanf("%f%*c", &valor_prod);


    //Adicionando valor dos impostos
    if(valor_prod <= 50){
        valor_prod += (valor_prod * 5) / 100;
        printf("Adicionando 5 porcento ao produto\n");
    }
    else if(valor_prod > 50 && valor_prod <= 100){
        valor_prod += (valor_prod * 10) / 100;
        printf("Adicionando 10 porcento ao produto\n");

    }
    else{
        valor_prod += (valor_prod * 15) / 100;
        printf("Adicionando 15 porcento ao produto\n");
    }

    //Fazendo a classificação

    if(valor_prod <= 80){
        printf("O produto tem valor de R$%.2f e esta com o valor barato\n", valor_prod);
    }
    else if(valor_prod > 80 && valor_prod <= 120){
        printf("O produto tem valor de R$%.2f e esta com o valor normal\n", valor_prod);
    }
    else if(valor_prod > 120 && valor_prod <= 200){
        printf("O produto tem valor de R$%.2f e esta com o valor caro\n", valor_prod);
    }
    else{
        printf("O produto tem valor de R$%.2f e esta com o valor muito caro", valor_prod);
    }
    return 0;
}