#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){
    const float PI = 3.1415;
    float raio, area;

    printf("Qual o raio do círculo?\n");
    scanf("%f%*c", &raio);

    area = PI * pow(raio, 2);

    printf("A área do círculo é de: %.2f", area);
    getch();

    return 0;
}