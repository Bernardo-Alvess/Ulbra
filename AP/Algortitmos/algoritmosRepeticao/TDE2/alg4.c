/*
- Ler dois valores inteiros e escrever o resultado da divisão do primeiro pelo segundo.
- Se o segundo valor informado for ZERO, deve ser impressa uma mensagem de VALOR INVÁLIDO e ser lido um novo valor.
- Ao final do programa deve ser impressa a seguinte mensagem: VOCE DESEJA OUTRO CÁLCULO (S/N).  Se a resposta for S o programa deverá retornar ao começo, caso contrário deverá encerrar a sua execução imprimindo quantos cálculos foram feitos. 
*/

#include <stdio.h>

int main(){

    int num1, num2, count, opUser;

    do{
        printf("Digite um valor para o primeiro numero:\n");
        scanf("%i%*c", &num1);
        do
        {
            printf("Digite um valor para o segundo numero:\n");
            scanf("%i%*c", &num2);
            if(num2 == 0){
                printf("VALOR INVALIDO\n");
            }
        } while (num2 == 0);
        
        printf("%i / %i = %i\n", num1, num2, num1 / num2);
        count++;
        printf("Deseja fazer outro calculo?\n");
        printf("1 - sim\n");
        printf("2 - nao\n");
        scanf("%i%*c", &opUser);

    }while(opUser == 1);

    printf("Numero de operacoes feitas: %i", count);
    return 0;
}