#include <stdio.h>
#include <conio.h>

int main(){
    int n1, n2, n3, n4, soma;

    printf("Vamos somar 4 números\n");
    printf("Número 1: \n");
    scanf("%d%*c", &n1);

    printf("Número 2: \n");
    scanf("%d%*c", &n2);

    printf("Número 3: \n");
    scanf("%d%*c", &n3);

    printf("Número 4: \n");
    scanf("%d%*c", &n4);

    soma = n1 + n2 + n3 + n4;
    printf("A soma dos 4 números é igual a: %d", soma);

    getch();
    return 0;
}