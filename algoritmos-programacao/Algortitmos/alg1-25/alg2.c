// Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
// na tabela a seguir: 

//  < 3 - REPROVADO
// < 7 - EXAME
// <= 10 APROVADO


#include <stdio.h>

int main(){

    float n1, n2, media;

    printf("Digite a primeira nota\n");
    scanf("%f%*c", &n1);
    printf("Digite a segunda nota\n");
    scanf("%f%*c", &n2);

    while(n1 > 10 || n2 > 10){

        printf("Notas nao podem ser maior que dez. Digite novamente\n");

        printf("Digite a primeira nota\n");
        scanf("%f%*c", &n1);
        printf("Digite a segunda nota\n");
        scanf("%f%*c", &n2);
    }
    
    media = (n1 + n2) / 2;

    if(media < 3){
        printf("Voce teve media %.2f e foi repr ovado", media);
    }
    else if(media < 7){
        printf("Voce teve media %.2f e ficou de exame", media);
    }
    else{
        printf("Voce teve media %.2f e foi aprovado", media);
    }

    return 0;
}