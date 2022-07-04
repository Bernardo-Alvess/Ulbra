#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    int vetor[], numero, cont, posicao = 0;

    while(posicao < 10){
        scanf("%d%*c", numero);
        if (posicao == 0){
            vetor[posicao] = numero;
            printf("%d\n", vetor[i]);
            posicao++;
        }else{
            for(cont = 0; (cont < posicao) && (vetor[cont] != numero); cont++){
                if(cont >= posicao){
                    vetor[posicao] = numero;
                    printf("%d\n", vetor[posicao]);
                    posicao++;
                }
            }
        }
    }
    
    return 0;
}