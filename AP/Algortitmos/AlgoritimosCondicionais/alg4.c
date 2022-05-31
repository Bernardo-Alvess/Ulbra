/*
Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário
digitará três números diferentes.
*/

#include <stdio.h>

int main(){

    float num1, num2, num3, primeiro, segundo, terceiro;

    printf("Qual o numero 1: \t");
    scanf("%f%*c", &num1);
    printf("Qual o numero 2: \t");
    scanf("%f%*c", &num2);
    printf("Qual o numero 3: \t");
    scanf("%f%*c", &num3);

    if (num1 > num2 && num1 > num3){
        primeiro = num1;
        if(num2 > num3){
            segundo = num2;
            terceiro = num3;
        }
        else{
            segundo = num3;
            terceiro = num2;
        }
    }
    else if (num2 > num1 && num2 > num3){
        primeiro = num2;
        if (num1 > num3){
            segundo = num1;
            terceiro = num3;
        }
        else{
            segundo = num3;
            terceiro = num1;
        }
    }
    else{
        primeiro = num3;
        if (num1 > num2)
        {
            segundo = num1;
            terceiro = num2;
        }
        else{
            segundo = num2;
            terceiro = num1;
        }
        
    }

    printf("Primeiro: %.2f", primeiro);
    printf("Segundo: %.2f", segundo);
    printf("Terceiro %.2f", terceiro);

    return 0;
}
