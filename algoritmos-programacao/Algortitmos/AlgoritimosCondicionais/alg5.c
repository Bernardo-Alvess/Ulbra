#include <stdio.h>

int main(){

    float num1, num2, num3, num4;

    printf("Digite tres numeros em ordem crescente: \n");
    scanf("%f%*c\n", &num1);
    scanf("%f%*c\n", &num2);
    scanf("%f%*c\n", &num3);

    printf("Agora digite um numero fora de ordem\n");
    scanf("%f%*c\n", &num4);

    return 0;
}