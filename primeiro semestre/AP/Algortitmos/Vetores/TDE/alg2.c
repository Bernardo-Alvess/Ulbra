//2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos. 


#include <stdio.h>

int main(){
    
    int numeros[6];

    for(int i = 0; i < 6; i++){
        printf("Digite um valor para a posicao %i\n", i+1);
        scanf("%i%*c", &numeros[i]);
    }

    for(int i = 0; i < 6; i++){
        printf("Posicao %i = %i\n", i+1, numeros[i]);
    }

    return 0;
}