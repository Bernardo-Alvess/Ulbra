// Efetue um programa que leia a nota de 10 alunos de uma turma. Ao final, deve ser escrita a média geral da turma. Esse algoritmo deve ser feito duas vezes uma usando o FOR, e DO-WHILE

#include <stdio.h>

int main(){

    float nota, soma, media;
    soma = 0;

    // printf("Usando o loop for\n");
    
    // for(int i = 0; i < 10; i++){
    //     printf("Digite a nota do aluno %i\n", i+1);
    //     scanf("%f%*c", &nota);

    //     soma += nota;
    // }

    // media = soma / 10;

    // printf("A soma das notas foi de: %.2f\n A media da turma foi de %.2f", soma, media);

    int i = 0;

    do{
        printf("Digite a nota do aluno %i\n", i+1);
        scanf("%f%*c", &nota);
        soma += nota;
        i++;

    }while(i < 10);

    media = soma / 10;

    printf("A soma das notas foi de: %.2f\n", soma);
    printf("A media da turma foi de %.2f", media);

    return 0;
}