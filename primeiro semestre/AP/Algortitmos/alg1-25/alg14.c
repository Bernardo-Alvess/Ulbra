/*
Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.


Até R$ 300,00 50%
R$ 300,00 R$ 500,00 40%
R$ 500,00 R$ 700,00 30%
R$ 700,00 R$ 800,00 20%
R$ 800,00 R$ 1.000,00 10%
Acima de R$ 1.000,00 5%
*/

#include <stdio.h>

int main(){

    float valor_sal, aumento;
    printf("Digite o valor do seu salario:\n");
    scanf("%f%*c", &valor_sal);


    if(valor_sal <= 300){
        valor_sal += (valor_sal * 50) / 100;
        printf("Adicionando 50 porcento ao valor do salario\n");
    }
    else if(valor_sal > 300 && valor_sal <= 500){
        valor_sal += (valor_sal * 40) / 100;
        printf("Adicionando 40 porcento ao valor do salario\n");

    }
    else if(valor_sal > 500 && valor_sal <= 700){
        valor_sal += (valor_sal * 30) / 100;
        printf("Adicionando 30 porcento ao valor do salario\n");
    }
    else if(valor_sal > 700 && valor_sal <= 800){
        valor_sal += (valor_sal * 20) / 100;
        printf("Adicionando 20 porcento ao valor do salario\n");
    }
    else if(valor_sal > 800 && valor_sal <= 1000){
        valor_sal += (valor_sal * 10) / 100;
        printf("Adicionando 10 porcento ao valor do salario\n");
    }
    else{
        valor_sal += (valor_sal * 5) / 100;
        printf("Adicionando 5 porcento ao valor do salario\n");
    }

    printf("Novo salario de %.2f", valor_sal);

    return 0;
}