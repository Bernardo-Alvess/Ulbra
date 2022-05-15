/*
Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem. 

Infantil - 5 a 7
Juvenil - 8 a 10
Adolescente - 11 a 15
Adulto - 16 a 30
Sênior - acima de 30
*/

#include <stdio.h>

int main(){

    int idade;

    printf("Digita a sua idade:\n");
    scanf("%i%*c", &idade);

    if(idade < 5){
        printf("Muito novo para poder começar a nadar\n");
    }
    else if(idade >= 5 && idade <= 7){
        printf("Categoria: Infantil\n");
    }
    else if(idade >= 8 && idade <= 10){
        printf("Categoria: Juvenil\n");
    }
    else if(idade >= 11 && idade <= 15){
        printf("Categoria: Adolescente\n");
    }
    else if(idade >= 16 && idade <= 30){
        printf("Categoria: Adulto\n");
    }
    else{
        printf("Categoria: senior");
    }
    return 0;
}