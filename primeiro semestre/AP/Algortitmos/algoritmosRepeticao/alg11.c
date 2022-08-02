// faça um programa que leia a matrícula, o nome e as três notas de 10 alunos, e indique para cada aluno, se ele foi aprovado ou não.

#include <stdio.h>

int main(){

    char nome[20];
    int matricula;
    float nota, soma, media;


    for(int i = 0; i < 10; i++){

        soma = 0;

        printf("Qual o seu nome?\n");
        scanf("%s%*c", &nome);
        printf("Qual o numero da sua matricula?\n");
        scanf("%i%*c", &matricula);

        for(int j = 0; j < 3; j++){
            printf("Qual o valor da %i nota\n", j+1);
            scanf("%f%*c", &nota);
            soma += nota;
        }

        media = soma / 3;

        if(media > 7){
            printf("Parabens, %s, voce foi aprovado, pois teve uma media de %.2f\n", nome, media);
        }
        else{
            printf("Infelizmente voce reprovou, %s, pois teve uma media de %.2f\n", nome, media);
        }
    }
}