//Escrever um programa que gera os números de 1000 a 1999 e escreve aqueles que divididos por 11 dão um resto igual a 5.

#include <stdio.h>

int main(){

    for(int i = 1000; i < 2000; i++){
        if(i % 11 == 5){
            printf("%i divido por 11 tem resto %i\n", i, i % 11);
        }
    }

    return 0;
}