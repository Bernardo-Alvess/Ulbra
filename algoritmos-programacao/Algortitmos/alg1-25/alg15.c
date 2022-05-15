// Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. 
//Faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
// investimento, de acordo com o tipo de investimento.

// 1 Poupança 3%
// 2 Fundos de renda fixa 4%

#include <stdio.h>

int main(){

    int op;
    float investimento;

    printf("Digite um valor para o investimento:\n");
    scanf("%f%*c", &investimento);
    printf("Escolha um tipo de investimento:\n");
    printf("1 - Poupanca (rendimento de 3%)\n");
    printf("2 - Fundos de renda fixa (rendimento de 4%)\n");
    scanf("%i%*c", &op);

    switch (op)
    {
    case 1:
        investimento += (investimento * 3) / 100;
        printf("O valor do investimento no proximo mes sera de R$%.2f", investimento);
        break;
    
    case 2:
        investimento += (investimento * 4) / 100;
        printf("O valor do investimento no proximo mes sera de R$%.2f", investimento);
        break;

    default:
        printf("OPCAO INVALIDA");
        break;
    }

    return 0;
}