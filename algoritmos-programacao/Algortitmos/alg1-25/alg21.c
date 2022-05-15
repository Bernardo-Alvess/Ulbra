/*
Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir

1 - sul
2 - norte
3 - leste
4 - oeste
5/6 - Nordeste
7/8/9 - Sudeste
10 a 20 -  Centro-oeste
21 a 30 - Nordeste
*/

#include <stdio.h>

int main(){

    int origem;
    float preco;

    printf("Digite o preco do produto\n");
    scanf("%f%*c", &preco);

    printf("Digite o codigo de origem do produto\n");
    scanf("%i%*c", &origem);

    if(origem == 1){
        printf("Sul\n");
    }
    else if(origem == 2){
        printf("Norte\n");
    }
    else if(origem == 3){
        printf("Leste\n");
    }
    else if(origem == 4){
        printf("Oeste\n");
    }
    else if(origem == 5 || origem == 6){
        printf("Nordeste\n");
    }
    else if(origem >= 7 && origem <= 9){
        printf("Sudeste\n");
    }
    else if(origem >= 10 && origem <= 20){
        printf("Centro-oeste\n");
    }
    else if(origem >= 21 && origem <= 30){
        printf("Nordeste");
    }
    else if(origem > 30 || origem < 1){
        printf("Codigo invalido");
    }
    return 0;
}