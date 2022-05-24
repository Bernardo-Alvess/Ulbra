// Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234.
// OBS: Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser impressa e repetida a solicitação de uma nova senha até que ela seja válida. Caso contrário deve ser impressa a mensagem "ACESSO PERMITIDO" junto com um número que representa quantas vezes a senha foi informada.

#include <stdio.h>

#define SENHA 1234

int main(){

    int senha, tentativas;

    do{

        printf("Digite a senha de acesso: ");
        scanf("%i%*c", &senha);
        tentativas++;

        if(senha == SENHA){
            printf("\033[0;32m");
            printf("ACESSO PERMITIDO\n");
            printf("\033[0m");
            printf("Voce tentou a senha %i vez(es)", tentativas);
        }
        else{
            printf("\033[0;31m");
            printf("ACESSO NEGADO\n");
            printf("\033[0m");
        }

    }while(senha != SENHA);

    return 0;
}