#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Valor da nota 1:\n");
    scanf("%f%*c", &nota1);

    printf("Valor da nota 2:\n");
    scanf("%f%*c", &nota2);

    printf("Valor da nota 3: \n");
    scanf("%f%*c", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("O valor da média aritmética das três notas é de: %.1f", media);
    return 0;
}