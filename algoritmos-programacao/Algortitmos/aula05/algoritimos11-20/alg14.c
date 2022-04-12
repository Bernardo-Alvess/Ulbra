// Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
// a) a idade dessa pessoa;
// b) quantos anos ela terá em 2050.

#include <stdio.h>
#include <math.h>

int main(){

    int ano_nascimento, ano_atual, idade, idade_futuro;

    printf("Em que ano voce nasceu?");
    scanf("%d%*c", &ano_nascimento);
    printf("Qual o ano atual?");
    scanf("%d%*c", &ano_atual);

    idade = ano_atual - ano_nascimento;
    idade_futuro = 2050 - ano_nascimento;

    printf("Voce tem %d anos, e em 2050 voce tera %d", idade, idade_futuro);

    return 0;
}