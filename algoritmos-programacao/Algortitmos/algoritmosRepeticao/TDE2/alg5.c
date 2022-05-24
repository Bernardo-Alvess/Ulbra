// Ler uma quantidade indeterminada de duplas de valores (2 valores de cada vez). Escrever para cada dupla uma mensagem que indique se ela foi informada em ordem crescente ou decrescente. A repetição será encerrada ao ser fornecido, para os elementos da dupla, valores iguais.


#include <stdio.h>

int main(){

    int num1, num2;

    do{

        printf("Digite o primeiro valor: ");
        scanf("%i%*c", &num1);
        printf("Digite o segundo valor: ");
        scanf("%i%*c", &num2);

        if(num1 > num2){
            printf("Ordem decrescente\n");
        }
        else if(num1 < num2){
            printf("Ordem crescente\n");
        }
        else{
            break;
        }

    }while(num1 != num2);

    return 0;
}
