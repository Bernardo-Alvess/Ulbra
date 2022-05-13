// Faça um programa que receba três números e mostre o maior

#include <stdio.h>

int main(){

    float n1, n2, n3;

    printf("Digite o primeiro numero\n");
    scanf("%f%*c", &n1);
    printf("Digite o segundo numero\n");
    scanf("%f%*c", &n2);
    printf("Digite o terceiro numero\n");
    scanf("%f%*c", &n3);

    if(n1 > n2 && n1 > n3){
        printf("%.2f", n1);
    }
    else if(n2 > n1 && n2 > n3){
        printf("%.2f", n2);
    }
    else{
        printf("%.2f", n3);
    }

    return 0;
}