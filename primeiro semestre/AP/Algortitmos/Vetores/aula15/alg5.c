#include <stdio.h>

int main(){

    int logica[] = {10,20,30,40,50,60,11,12,13,14,15,16,17,18,19};
    int linguagem[] = {10,20,30,40,50,60,70,80,90,100};

    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 10; j++){
            if(logica[i] == linguagem[j]){
                printf("logica[%i] = %i | linguagem[%i] = %i\n", i, logica[i], j, linguagem[j]);
            }
        }
    }

    return 0;
}