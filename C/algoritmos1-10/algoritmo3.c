#include <stdio.h>

int main(){
    float nota1, nota2, nota3, peso1, peso2, peso3, soma1, soma2, soma3, media;

    printf("Valor da nota 1:\n");
    scanf("%f%*c", &nota1);

    printf("Valor do peso 1:\n");
    scanf("%f%*c", &peso1);

    printf("Valor da nota 2:\n");
    scanf("%f%*c", &nota2);

    printf("Valor do peso 2:\n");
    scanf("%f%*c", &peso2);

    printf("Valor da nota 3:\n");
    scanf("%f%*c", &nota3);

    printf("Valor do peso 3: \n");
    scanf("%f%*c", &peso3);

    soma1 = peso1 * nota1;
    soma2 = peso2 * nota2;
    soma3 = peso3 * nota3;

    media = (soma1 + soma2 + soma3) / (peso1 + peso2 + peso3);

    printf("A média é de: %.1f", media);

    return 0;
}
