#include <stdio.h>

int main(){

    //Formas de inicializar uma array em C

    int notas[10]; //Espaços disponíveis dentro da array
    int notas2[] = {1, 2, 3, 4, 5}; //Array com valores predefinidos
    
    for(int i = 0; i < 5; i++){
        printf("Digite o valor para a posicao %i\n", i+1);
        scanf("%i%*c", &notas2[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%i\t", notas2[i]);
    }

    return 0;
}