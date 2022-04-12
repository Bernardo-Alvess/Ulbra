#include <stdio.h>
#include <math.h>
#include <conio.h>

// 11. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
// a) o número digitado ao quadrado;
// b) o número digitado ao cubo;
// c) a raiz quadrada do número digitado;
// d) a raiz cúbica do número digitado

int main(){
    float num, num_quad, num_cube, num_raiz, num_raiz_cube;
    printf("Adicione um número");
    scanf("%f%*c", &num);

    if(num > 0){

    num_raiz = sqrtf(num);
    num_quad = powf(num, 2);
    num_cube = powf(num, 3);
    num_raiz_cube = cbrtf(num);

    printf("Numero ao quadrado = %.3f\nNumero ao cubo = %.3f\n Raiz quadrada do numero = %.3f\n Raiz cubica do numero = %.3f", num_quad, num_cube, num_raiz, num_raiz_cube);

    }

    else{
        printf("Digite um numero maior que zero");
    }

    getch();

    return 0;
}