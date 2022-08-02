// Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de referência inteiro e: 
// a) imprima os números do vetor que são maiores que o valor referência 
// b) retorne quantos números armazenados no vetor são menores que o valor de referência 
// c) retorne quantas vezes o valor de referência aparece no vetor 


#include<stdio.h>

int main()
{
    int num, i, menor = 0, iguais;
    int vet [10];

    for ( i = 0; i < 10; i++)
    {
        printf("digite um numero: \n");
        scanf("%d%*c", &vet[i]);
    }

    printf("digite um valor de referencia: \n");
    scanf("%d%*c", &num);

    for(i = 0; i < 10; i++){
        if(vet[i] > num){
            printf("%i e maior que %i\n", vet[i], num);
        }
        else if(vet[i] < num){
            menor++;
        }else{
            iguais++;
        }
    }

    printf("%i numeros sao menores que %i\n", menor, num); 
    printf("numero %d aparece %d vezes", num, iguais);     
}