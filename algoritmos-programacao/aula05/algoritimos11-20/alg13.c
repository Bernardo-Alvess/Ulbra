// Sabe-se que:
// pé = 12 polegadas
// 1 jarda = 3 pés
// 1 milha = 1,760 jarda
// Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
// a) polegadas;
// b) jardas;
// c) milhas.

#include <stdio.h>
#include <conio.h>

int main(){
    float pes, jarda, milha, pol;

    printf("Insira o numero de pes a serem convertidos:\n");
    scanf("%f%*c", &pes);

    pol = pes*12;
    jarda = pes/3;
    milha = jarda/1760;

    printf("Polegada: %2.2f\n", pol);
    printf("Jardas: %2.2f\n", jarda);
    printf("a: %f\n", milha);

    getch();
    return 0;
}