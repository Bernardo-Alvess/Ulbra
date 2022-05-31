//Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos. 
#include <stdio.h>

int main(){

    float conjuntos[10];
    float conjuntosQuadrado[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o valor da posicao %d\n", i + 1);
        scanf("%f%*c", &conjuntos[i]);

        conjuntosQuadrado[i] = conjuntos[i] * conjuntos[i];
    }

    printf("Conjunto dos numeros reais\n");

    for(int i = 0; i < 10; i++){        
        printf("conjuntos[%d] = %.2f\n", i + 1, conjuntos[i]);
    }

    printf("Conjunto dos numeros ao quadrado\n");

    for(int i = 0; i < 10; i++){        
        printf("conjuntosQuadrado[%d] = %.2f\n", i + 1, conjuntosQuadrado[i]);
    }

    return 0;
}