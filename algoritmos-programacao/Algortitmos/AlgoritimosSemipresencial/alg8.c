#include <stdio.h>

int main(){

    int num1, num2, num3, num4;

    printf("Digite o primeiro numero:\n");
    scanf("%i%*c", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%i%*c", &num2);   
    printf("Digite o terceiro numero:\n");
    scanf("%i%*c", &num3);    
    printf("Digite o quarto numero:\n");
    scanf("%i%*c", &num4);

    if(num1 % 2 == 0){
        printf("O numero %i e divisivel por 2\n", num1);
    }
    else{
        printf("O numero %i nao e divisivel por 2\n", num1);
    }

    if(num1 % 3 == 0){
        printf("O numero %i e divisivel por 3\n", num1);
    }
    else{
        printf("O numero %i nao e divisivel por 3\n", num1);
    }

    if(num1 % 2 == 0){
        printf("O numero %i e divisivel por 2\n", num2);
    }
    else{
        printf("O numero %i nao e divisivel por 2\n", num2);
    }
    
    if(num2 % 2 == 0){
        printf("O numero %i e divisivel por 3\n", num2);
    }
    else{
        printf("O numero %i nao e divisivel por 3\n", num2);
    }
    
    if(num3 % 3 == 0){
        printf("O numero %i e divisivel por 3\n", num3);
    }
    else{
        printf("O numero %i nao e divisivel por 3\n", num3);
    }

    if(num3 % 2 == 0){
        printf("O numero %i e divisivel por 2\n", num3);
    }
    else{
        printf("O numero %i nao e divisivel por 2\n", num3);
    }
    
    if(num4 % 2 == 0){
        printf("O numero %i e divisivel por 3\n", num4);
    }
    else{
        printf("O numero %i nao e divisivel por 3\n", num4);
    }
    if(num4 % 3 == 0){
        printf("O numero %i e divisivel por 3\n", num4);
    }
    else{
        printf("O numero %i nao e divisivel por 3\n", num4);
    }


    return 0;
}