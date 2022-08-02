/*
Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
extras e no número de horas que o funcionário faltou ao trabalho.

O valor do prêmio é obtido pela consulta à tabela que se segue, na qual:
H = número de horas extras – (2/3 * (número de horas falta))


h (minutos)         Prêmio (r$)

>= 2400             500
>= 1800 && < 2400   400
>= 1200 && < 1800   300
>= 600 && <= 1200   200
< 600               100
*/

#include <stdio.h>

int main(){

    float hrExtra, hrFalta, hrNormais, H;

    printf("Digite o numero de horas extra que voce trabalhou:\n");
    scanf("%f%*c", &hrExtra);
    printf("Números de horas normais: ");
    scanf("%f%*c", &hrNormais);
    printf("Digite o numero de horas que voce faltou o trabalho:\n");
    scanf("%f%*c", &hrFalta);

    H = (hrExtra - (2/3 * (hrNormais - hrFalta))) * 60;

    if(H >= 2400){
        printf("Premio: R$500");
    }
    else if(H >= 1800 && H < 2400){
        printf("Premio: R$400");
    }
    else if(H >= 1200 && H < 1800){
        printf("Premio: R$300");
    }
    else if(H >= 600 && H < 1200){
        printf("Premio: R$200");
    }
    else if(H < 600){
        printf("Premio: R$100");
    }

    return 0;
}