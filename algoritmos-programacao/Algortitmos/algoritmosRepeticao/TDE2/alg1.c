// Faça um algoritmo que leia a nota de vários alunos de uma turma. Ao final, deve ser escrita a média geral da turma. A leitura das médias somente encerra quando uma nota negativa for digitada.

#include <stdio.h>

int main(){

    int alunos, i = 0, alunosDigitados = 0;
    float nota, media = 0;

    printf("Digite o numero de alunos na turma: \n");
    scanf("%i%*c", &alunos);

    printf("\033[0;31m");
    printf("ATENCAO: NUMEROS NEGATIVOS ENCERRAM A SOMA DAS NOTAS\n");
    printf("\033[0m");

    while(i < alunos){
        printf("Digite a nota do aluno %i\n", i+1);
        scanf("%f%*c", &nota);
        
        if(nota < 0){
            break;
        }

        alunosDigitados++; //para saber se foi informada a nota de todos os alunos presente na sala

        media += nota;

        i++;
    }

    if(alunosDigitados != alunos){
        media = media / alunosDigitados;
        printf("Levando em conta somente as notas dos alunos digitadas\n");
        printf("A turma tem um total de %i alunos, porem, foram informadas as notas de %i alunos\nA media da turma foi de %.2f", alunos, alunosDigitados, media);
    }

    else{
        media = media / alunos;
        printf("A turma tem %i alunos\nA media da turma foi de %.2f", alunos, media);
    }


    return 0;
}