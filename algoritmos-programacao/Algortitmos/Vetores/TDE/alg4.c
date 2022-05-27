// 4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final, seu programa deverá escrever a soma dos valores encontrados nas respectivas posições  X e Y . 

#include <stdio.h>

int main(){

    int vetor[8], X, Y;

    for(int i = 0; i < 8; i++){
        printf("Digite um valor para a posicao %i\n", i + 1);
        scanf("%i%*c", &vetor[i]);
    }

    do{
        printf("Digite um valor para a posicao X: ");
        scanf("%i%*c", &X);
        printf("\nDigite um valor para a posicao Y: ");
        scanf("%i%*c", &Y);

        if(X > 8 || Y > 8 || X <= 0 || Y <= 0){
            printf("Digite um numero menor que 8 ou maior que 0\n");
        }

    }while(X > 8 || Y > 8 || X <= 0 || Y <= 0);

    printf("A soma de %i + %i = %i", vetor[X-1], vetor[Y-1], vetor[X-1] + vetor[Y-1]);

    return 0;
}