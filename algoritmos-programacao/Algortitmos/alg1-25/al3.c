#include <stdio.h>

int main(){

    float n1, n2;

    printf("Digite o primeiro numero\n");
    scanf("%f%*c", &n1);
    printf("Digite o segundo numero\n");
    scanf("%f%*c", &n2);
    
    if(n1 > n2){
        printf("%.2f e maior que %.2f", n1, n2);
    }
    else{
        printf("%.2f e maior que %.2f", n2, n1);
    }
    
    return 0;
}