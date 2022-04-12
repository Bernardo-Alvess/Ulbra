/*A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas
obedece aos pesos a seguir:
Nota PESO
Trabalho de laboratório 2
Avaliação semestral 3
Exame final 5
Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue
a tabela:
MÉDIA PONDERADA CONCEITO
8,0 10,0 A
7,0 8,0 B
6,0 7,0 C
5,0 6,0 D
0,0 5,0 E

*/

#include <stdio.h>

int main(){

    float nota_lab, nota_sem, nota_ex, media;

    printf("Trabalho de laboratorio: \t");
    scanf("%f%*c", &nota_lab);
    printf("Avalicao semestral: \t");
    scanf("%f%*c", &nota_sem);
    printf("Exame Final: \t");
    scanf("%f%*c", &nota_ex);

    media = (nota_lab * 2 + nota_sem * 3 + nota_ex * 5) / 10;

    printf("%f", media);

    if(media >= 8 && media <= 10){
        printf("Media A");
    }
    else if(media >= 7 && media < 8){
        printf("Media B");
    }
    else if(media >= 6 && media < 7){
        printf("Media C");
    }
    else if(media >= 5 && media < 6){
        printf("Media D");
    }
    else if(media >= 0 && media < 5){
        printf("Media E");
    }

    return 0;
}