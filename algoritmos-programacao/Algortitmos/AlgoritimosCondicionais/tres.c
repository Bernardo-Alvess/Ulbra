#include <stdio.h>

int main(){
    float n1, n2, n3;
    printf("digite o primeiro numero:\n");
    scanf("%f%*c", &n1);
    printf("digite o segundo numero:\n");
    scanf("%f%*c", &n2);
    printf("digite o terceiro numero:\n");
    scanf("%f%*c", &n3);

    if(n1 > n2 && n1 > n3){
        printf("O numero %.2f e o maior", n1);
    }
    else if(n2 > n1 && n2 > n3){
        printf("O numero %.2f e o maior", n2);
    }
    else if(n3 > n1 && n3 > n2){
        printf("O numero %.2g e o maior", n3);
    }

    return 0;
}