//Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o usuário digite um número que já foi digitado anteriormente, o programa devera pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram  fornecidos. Exibir na tela o vetor final digitado.


#include<stdio.h>

int main()
{
    int vetor[10], iguais = 0, i, j;

    for (int i = 0; i < 10; i++)
    {     
        do{       
            printf("digite numeros DIFERENTES:\n");
            scanf("%d%*c", &vetor[i]);
            for(j = 0; j < i; j++){
                if(vetor[j] == vetor[i]){
                    iguais = 1;
                    printf("Valor duplicado. Digite outro\n");
                    break;
                }else{
                    iguais = 0;
                }
            }
        }while(iguais == 1);

    } 

    printf("[");
    for(i = 0; i < 10; i++){
        printf(" %i ", vetor[i]);
    }
    printf("]");
}