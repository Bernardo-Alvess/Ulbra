// Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números
// negativos e a soma dos números positivos desse vetor. 

#include <stdio.h>

int main(){

    float vetor[10];
    int positivos = 0, negativos = 0;

    printf("Adicione os valores para o vetor\n");

    for(int i = 0; i < 10; i++){
        printf("Posicao %i: ", i);
        scanf("%f%*c", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        if(vetor[i] > 0){
            positivos += vetor[i];
        }else if(vetor[i] < 0){
            negativos++;
        }
    }

    printf("O total de negativos = %i\n", negativos);
    printf("A soma dos positivos = %i", positivos);


    return 0;
}
