// Elabore um programa que calcule e escreva a soma de 10 números lidos.Esse algorimo deve ser feito três vezes uma usando o FOR, DO-WHILE e WHILE

#include <stdio.h>

int main(){

    float numero;
    float soma;
    soma = 0;

    printf("Usando o loop for\n");
    for(int i = 0; i < 10; i++){
     printf("Digite o valor do numero %i\n", i+1);
        scanf("%f%*c", &numero);
        soma = soma + numero;
    }
    printf("%.2f", soma);

    // int i = 0;
    // printf("Usando o loop while\n");
    // while(i < 10){
    //  printf("Digite o valor do numero %i\n", i+1);
    //     scanf("%f%*c", &numero);
    //     soma += numero;
    //     i++;
    // }
    // printf("%.2f", soma);
    // return 0;

    // printf("Usando o loop 'do while'\n");

    // int i = 0;

    // do{
    //     printf("Digite o valor do numero %i\n", i+1);
    //     scanf("%f%*c", &numero);
    //     soma += numero;
    //     i++;
    // }while(i<10);

    // printf("%.2f", soma);
}