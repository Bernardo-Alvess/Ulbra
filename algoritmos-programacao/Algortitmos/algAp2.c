#include <stdio.h>

int main(){

    int idade, alfabetizado;

    printf("Regularização do Titulo de Eleitor\n");

    printf("Alfabetizado?\n 0 - Nao\n  1 - Sim\n");
    scanf("%i%*c", &alfabetizado);
    printf("Quantos anos voce tem?\n");
    scanf("%i%*c", &idade);

    if(idade >= 18){
        if (alfabetizado == 0)
        {
            printf("Voce e maior de idade e seu voto e facultativo por ser analfabeto");
        }
        else if(idade >= 70){
            printf("Voce e maior de idade e seu voto e facultativo por ter 70 anos ou mais");
        }
        else{
            printf("Voce e maior de idade com voto obrigatorio");
        }
        
    }
    else if(idade >= 16){
        printf("Voce e menor de idade e tem voto facultativo por ter 16 anos ou mais");
    }
    else{
        printf("Voce e menor de idade e nao pode votar");
    }

    return 0;
}