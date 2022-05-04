// Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo
// usuário. Cada data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o
// segundo, o mês e o terceiro, o ano.

#include <stdio.h>

int main(){

    int dia_data1, mes_data1, ano_data1, dia_data2, mes_data2, ano_data2;

    printf("Digite a primeira data:\n");

    printf("dia (dd):\n");
    scanf("%i%*c", &dia_data1);

    printf("Mes (mm):\n");
    scanf("%i%*c", &mes_data1);

    printf("Ano (aaaa):\n");
    scanf("%i%*c", &ano_data1);

    printf("Digite a segunda data:\n");

    printf("dia (dd):\n");
    scanf("%i%*c", &dia_data2);

    printf("Mes (mm):\n");
    scanf("%i%*c", &mes_data2);

    printf("Ano (aaaa):\n");
    scanf("%i%*c", &ano_data2);

    
    if(ano_data1 == ano_data2 && mes_data1 == mes_data2 && dia_data1 == dia_data2){
        printf("As datas são iguais");
    }
    else if(ano_data1 > ano_data2){
        printf("A maior data e: %i/%i/%i", dia_data1, mes_data1, ano_data1);
    }

    else if(ano_data1 == ano_data2){
        
        if(mes_data1 > mes_data2){
            printf("A maior data e: %i/%i/%i", dia_data1, mes_data1, ano_data1);
        }
        
        else if(mes_data1 == mes_data2){

            if(dia_data1 > dia_data2){
                printf("A maior data e: %i/%i/%i", dia_data1, mes_data1, ano_data1);
            }

            else{
                printf("A maior data e: %i/%i/%i", dia_data2, mes_data2, ano_data2);
            }
        }
        else{
            printf("A maior data e: %i/%i/%i", dia_data2, mes_data2, ano_data2);
        }

    }
    else{
        printf("A maior data e: %i/%i/%i", dia_data2, mes_data2, ano_data2);
    }

    return 0;
}