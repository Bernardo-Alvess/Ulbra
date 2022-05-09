// Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo, A, B e
// C são reais. Escreva os números A, B e C obedecendo à tabela a seguir.
// Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números
// digitados sejam diferentes um do outro.

#include <stdio.h>

int main(){

    int I;
    float A, B, C;

    printf("Digite um valor para A:\n");
    scanf("%f%*c", &A);
    printf("Digite um valor para B:\n");
    scanf("%f%*c", &B);
    printf("Digite um valor para C:\n");
    scanf("%f%*c", &C);

    printf("Digite um valor para I\n");
    printf("1 - ordem crescente\n2 - ordem decrescente\n3 - maior no meio\n");
    scanf("%i%*c", &I);

    switch(I){
        
    case 1:

        if(A == B && A == C && B == C ){
            printf("Todos os numeros sao iguais");
        }
        else if(A < B && A < C){
            if (B < C){
                printf("A ordem crescente e de %.2f, %.2f, %.2f", A, B, C);
            }
            else{
                printf("A ordem crescente e de %.2f, %.2f, %.2f", A, C, B);
            }
            
        }

        else if(A > B && A > C){
            if(B > C){
                printf("A ordem crescente e de %.2f, %.2f, %.2f", C, B, A);
            }
            else{
                printf("A ordem crescente e de %.2f, %.2f, %.2f", B, C, A);
            }
        }
        else{
            if(B > C){
                printf("A ordem crescente e de %.2f, %.2f, %.2f", C, A, B);
            }
            else{
                printf("A ordem crescente e de %.2f, %.2f, %.2f", B, A, C);
            }
        }

        break;
    
    case 2:

        if(A == B && A == C && B == C ){
            printf("Todos os numeros sao iguais");
        }
        else if(A > B && A > C){
            if(B > C){
                printf("A ordem decrescente e de %.2f, %.2f, %.2f", A, B, C);
            }
            else{
                printf("A ordem decrescente e de %.2f, %.2f, %.2f", A, C, B);
            }
        }
        else if(A < B && A < C){
            if (B < C)
            {
                printf("A ordem decrescente e de %.2f, %.2f, %.2f", C, B, A);
            }
            else{
                printf("A ordem decrescente e de %.2f, %.2f, %.2f", B, C, A);
            }
            
        }
        else{
            if(B > C){
                printf("A ordem decrescente e de %.2f, %.2f, %.2f", B, A, C);
            }
            else{
                printf("A ordem decrescente e de %.2f, %.2f, %.2f", C, A, B);
            }
        }
        break;
    
    case 3:
        if(A > B && A > C){
            printf("Maior no meio: %.2f, %.2f, %.2f", B, A, C);
        }
        else if(C > A && C > B){
            printf("Maior no meio: %.2f, %.2f, %.2f", A, C, B);
        }
        else{
            printf("Maior no meio: %.2f, %.2f, %.2f", A, B, C);
        }
        break;

    default:
        printf("hi");
        break;
    }

    return 0;
}