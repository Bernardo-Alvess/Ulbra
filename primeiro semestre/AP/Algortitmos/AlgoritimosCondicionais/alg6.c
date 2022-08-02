//Faça um algoritmo que verifique se o número é impar ou par

#include <stdio.h>

int main(){
    
    int num;

    printf("Digite um numero:\n");
    scanf("%f%*c", &num);

    if(num % 2 == 0){
        printf("O numero e par");
    }
    else{
        printf("O numero e impar");
    }

    return 0;
}