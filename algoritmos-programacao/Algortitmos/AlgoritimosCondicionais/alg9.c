// Faça um programa que mostre a data e a hora do sistema nos seguintes formatos: DD/MM/AAAA –
// mês por extenso e hora:minuto.

#include <stdio.h>
#include <time.h>

int main(){

    time_t t;
    struct tm *data_hora;
    int dia, mes, ano, hora,  minutos, segundos;

    t = time(NULL);
    data_hora = localtime(&t);

    dia = data_hora->tm_mday;
    mes = data_hora->tm_mon + 1;
    ano = data_hora->tm_year + 1900;

    hora = data_hora->tm_hour;
    minutos = data_hora->tm_min;
    segundos = data_hora->tm_sec;

    switch (mes){
        case 1:
            printf("%i/Janeiro/%i", dia, ano);
            break;
        case 2:
            printf("%i/Fevereiro/%i", dia, ano);
            break;    
        case 3:
            printf("%i/Março/%i", dia, ano);
            break;    
        case 4:
            printf("%i/Abril/%i", dia, ano);
            break;    
        case 5:
            printf("%i/Maio/%i", dia, ano);
            break;    
        case 6:
            printf("%i/Junho/%i", dia, ano);
            break;    
        case 7:
            printf("%i/Julho/%i", dia, ano);
            break;    
        case 8:
            printf("%i/Agosto/%i", dia, ano);
            break;    
        case 9:
            printf("%i/Setembro/%i", dia, ano);
            break;    
        case 10:
            printf("%i/Outubro/%i", dia, ano);
            break;    
        case 11:
            printf("%i/Novembro/%i", dia, ano);
            break;    
        case 12:
            printf("%i/Dezembro/%i", dia, ano);
            break;   

        default:
            printf("eh os guri");
            break;
    }

    printf("Horario atual: %i:%i:%i", hora, minutos, segundos);
    return 0;
}