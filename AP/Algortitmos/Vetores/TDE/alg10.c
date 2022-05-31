// 10. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.

#include <stdio.h>

int main(){

    int notas[15], media = 0;

    for(int i = 0; i < 15; i++){
        printf("Digite a nota do aluno %i\n", i+1);
        scanf("%i%*c", &notas[i]);
        media += notas[i];
    }

    printf("Media geral: %i", media / 15);

    return 0;
}