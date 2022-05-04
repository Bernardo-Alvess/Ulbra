#include <stdio.h>

int main(){

    float n1, n2;
    int operacao;

    printf("Digite o primeiro numero:\n");
    scanf("%f%*c", &n1);    
    printf("Digite o segundo numero:\n");
    scanf("%f%*c", &n2);

    printf("1 - media\n");
    printf("2 - diferença do maior para o menor\n");
    printf("3 - produto\n");
    printf("4 - divisao\n");
    scanf("%i%*c", &operacao);

    switch(operacao){
        case 1:
            printf("A media é de %.2f", (n1 + n2) / 2);
            break;

        case 2:
            if(n1 > n2){
                printf("Diferenca do maior para o menor e de %.2f", n2 - n1);
            }
            else{
                printf("Diferenca do maior para o menor e de %.2f", n1 - n2);
            }
            break;

        case 3:
            printf("Produto entre os numeros e: %.2f", n1 * n2);
            break;

        case 4:
            if(n1 != 0 && n2 != 0){
                printf("A divisao do primeiro numero entre o segundo e de: %.2f", n1 / n2);
                break;
            }
            else{
                printf("Nao e possivel fazer divisao por 0");
            }

        default:
            printf("Opcao invalida");
            break;

    }

    return 0;
}