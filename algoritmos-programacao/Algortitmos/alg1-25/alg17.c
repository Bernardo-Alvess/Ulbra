// Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
// programa deve mostrar uma mensagem de permissão de acesso ou não.

#include <stdio.h>

int main(){

    int senha;

    printf("Digite a senha:\n");
    scanf("%i%*c", &senha);

    switch (senha)
    {
    case 4531:
        printf("Senha correta\n");
        break;
    
    default:
        printf("Senha incorreta\n");
        break;
    }

    return 0;
}