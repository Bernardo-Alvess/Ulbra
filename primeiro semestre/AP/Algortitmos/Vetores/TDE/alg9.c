// 9. Crie um programa que lê 6 valores num vetor inteiros pares e, em seguida, mostre na tela os valores ˆ lidos na ordem inversa. 

#include <stdio.h>

int main(){

    int vetor[6], isEven;

    printf("Digite somente valores pares e diferentes de 0\n");

    for(int i = 0; i < 6; i++){
        do{
            printf("Digite um valor para a posicao %i\n", i+1);
            scanf("%i%*c", &isEven);
            if(isEven % 2 == 0 && isEven != 0){
                vetor[i] = isEven;
            }
            else{
                printf("Valor invalido\n");
            }

        }while(isEven % 2 != 0 || isEven == 0);
    }
    
    for(int i = 5; i > 0; i--){
        printf("vetor[%i] = %i\n", i+1, vetor[i]);
    }

    return 0;
}