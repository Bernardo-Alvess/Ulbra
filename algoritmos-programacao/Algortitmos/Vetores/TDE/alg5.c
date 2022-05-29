//5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui. 

#include <stdio.h>

int main(){
    
    int vetor[10], count = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor para a posicao %i\n", i+1);
        scanf("%i%*c", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            printf("vetor[%i] = %i e par\n", i+1, vetor[i]);
            count++;
        }
    }

    printf("Total de %i numeros par", count);

    return 0;
}
