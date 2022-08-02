// Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
// escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
// programa. As opções são:
// a) O primeiro número elevado ao segundo número.
// b) Raiz quadrada de cada um dos números.
// c) Raiz cúbica de cada um dos números. 

#include <stdio.h>
#include <math.h>

int main(){

    int op;
    float n1, n2;

    printf("Digite o primeiro numero:\n");
    scanf("%f%*c", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%f%*c", &n2);

    printf("Escolha uma da opcoes abaixo:\n");
    printf("1 - O primeiro numero elevado ao segundo numero\n");
    printf("2 - Raiz quadrada de cada um dos numeros\n");
    printf("3 - Raiz cubica de cada um dos numeros\n");
    scanf("%i%*c", &op);

    switch (op)
    {
    case 1:
        printf("O numero %.2f elevado a %.2f e igual a: %.2f", n1, n2, powf(n1, n2));
        break;
    
    case 2:
        printf("A raiz quadrada de %.2f e igual a: %.4f\n", n1, sqrtf(n1));
        printf("A raiz quadrada de %.2f e igual a %.4f\n", n2, sqrtf(n2));
        break;

    case 3:
        printf("A raiz cubica de %.2f e igual a %.4f\n", n1, cbrtf(n1));
        printf("A raiz cubica de %.2f e igual a %.4f\n", n2, cbrtf(n2));
        break;

    default:
        printf("Opcao invalida");
        break;
    }
    return 0;
}