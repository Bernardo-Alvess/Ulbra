//Faça um programa que leia a matrícula, o nome e às três notas de 10 alunos, e indique para cada aluno, se ele foi aprovado ou não, considere a media 7.

#include <stdio.h>

int main(){

    int matricula;
    char nome[10];

    for(int i = 0; i < 10; i++){

        float nota, total = 0;

        printf("Digito o nome do aluno: ");
        scanf("%s%*c", &nome);

        printf("\nQual o numero da matricula de %s?\n", nome);
        scanf("%i%*c", &matricula);

        for(int j = 0; j < 3; j++){
            printf("Qual o valor da nota %i?\n", j+1);
            scanf("%f%*c", &nota);

            total += nota;
        }

        total = total / 3;

        if(total > 7){
            printf("Parabens, %s, voce foi aprovado, pois teve media de %.2f\n", nome, total);
        }
        else{
            printf("Infelizmente voce foi reprovado, %s, pois teve media de %.2f\n", nome, total);
        }
    }

    return 0;
}