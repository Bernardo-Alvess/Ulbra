#include <stdio.h>

int main(){
    float deposito, rendimento, total, taxa;

    printf("Qual o valor do depósito?\n");
    scanf("%f%*c", &deposito);

    printf("Qual o valor da taxa de juros?\n");
    scanf("%f%*c", &taxa);

    rendimento = deposito * taxa / 100;
    total = deposito + rendimento;

    printf("Levando em conta uma taxa de %.2f porcento.\nVocê obteve um rendimento de RS%.2f e um total de RS%.2f", taxa, rendimento, total);
    return 0;
}