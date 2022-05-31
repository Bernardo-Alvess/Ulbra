#include <stdio.h>
#include <conio.h>

int main(){

    float b, h, area;

    printf("Qual o valor da base do triângulo?\n");
    scanf("%f%*c", &b);

    printf("Qual o valor da altura do triângulo?\n");
    scanf("%f%*c", &h);

    area = (b * h) / 2;
    printf("A área é de %.2f", area);

    getch();
    return 0;
}
