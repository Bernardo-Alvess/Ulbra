// Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
// mensagem de aprovado ou reprovado, considerando para aprovação média 7

#include <stdio.h>

int main(){

    float n1, n2, n3, n4, media;

    printf("Digite a primeira nota\n");
    scanf("%f%*c", &n1);
    printf("Digite a segunda nota\n");
    scanf("%f%*c", &n2);
    printf("Digite a terceira nota\n");
    scanf("%f%*c", &n3);
    printf("Digite a quarta nota\n");
    scanf("%f%*c", &n4);

    while(n1 > 10 || n2 > 10 || n3 > 10 || n4 > 10){

        printf("Nota deve ser menor que dez. Tente novamente.\n");

        printf("Digite a primeira nota\n");
        scanf("%f%*c", &n1);
        printf("Digite a segunda nota\n");
        scanf("%f%*c", &n2);
        printf("Digite a terceira nota\n");
        scanf("%f%*c", &n3);
        printf("Digite a quarta nota\n");
        scanf("%f%*c", &n4);
    }

    media = (n1 + n2 + n3 + n4) / 4;

    if(media >= 7){
        printf("Voce teve uma media de %.2f e foi aprovado", media);
    }
    else{
        printf("Voce teve uma media de %.2f e foi reprovado", media);
    }

    return 0;
}