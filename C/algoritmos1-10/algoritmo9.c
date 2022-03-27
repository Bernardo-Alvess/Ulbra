#include <stdio.h>
#include <conio.h>

int main(){

    float b, h, area;

    printf("Qual o valor da base?\n");
    scanf("%f%*c", &b);

    printf("Qual o valor da altura?\n");
    scanf("%f%*c", &h);

    area = (b * h) / 2;
    printf("A áres é de %.2f", area);

    getch();
    return 0;
}
