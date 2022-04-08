/*
Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem
constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão
tirar para serem aprovados, considerando que a média exigida é 6,0.

0 - 3 REPROVADO
3 - 7 EXAME
7 - 10 APROVADO
*/

#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media, nota_ex;

    printf("Nota 1: \t");
    scanf("%f%*c", &nota1);
    printf("Nota 2: \t");
    scanf("%f%*c", &nota2);
    printf("Nota 3: \t");
    scanf("%f%*c", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("%f", media);

    if(media < 3 && media >= 0){
        printf("Reprovado");
    }
    else if(media >= 3 && media < 7){
        printf("Exame\n");
        nota_ex = 12 - media;
        printf("A nota necessaria para ser aprovado é de %.2f", nota_ex);
    }
    else if(media >= 7 && media <= 10){
        printf("Aprovado");
    }

    return 0;
}