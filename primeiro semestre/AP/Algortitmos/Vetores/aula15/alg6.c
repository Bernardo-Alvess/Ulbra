// 6 - Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
// Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
// Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
// loja. Calcule e mostre:
// ■■ um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
// ■■ o total das vendas de todos os vendedores;
// ■■ o maior valor a receber e o nome de quem o receberá;
// ■■ o menor valor a receber e o nome de quem o receberá. 

#include <stdio.h>

int main(){
    
    float totalVendas[10];
    float comissao[10];
    float comissaoCalc[10];
    char nome[10][20];
    float soma = 0, maior, menor;
    int maiorNome, menorNome;

    for(int i = 0; i < 10; i++){
        printf("Digite o nome do vendedor: ");
        scanf("%s%*c", nome[i]);
        printf("Percentual de comissao: ");
        scanf("%f%*c", &comissao[i]);
        printf("Qual o total de vendas: R$");
        scanf("%f%*c", &totalVendas[i]);
        comissaoCalc[i] = totalVendas[i] * (comissao[i] / 100);
        soma += totalVendas[i];
    }

    for(int i = 0; i < 10; i++){
        printf("%s recebe R$%.2f\n", nome[i], comissaoCalc[i]);
    }

    printf("Valor de todas as vendas combinadas = R$%.2f\n", soma);

    maior = comissaoCalc[0];
    menor = comissaoCalc[0];

    for(int i = 0; i < 10; i++){
        if(maior < comissaoCalc[i]){
            maior = comissaoCalc[i];
            maiorNome = i;
        }else if(menor > comissaoCalc[i]){
            menor = comissaoCalc[i];
            menorNome = i;
        }
    }

    printf("O vendedor que mais ganhou foi %s com R$%.2f\n", nome[maiorNome], maior);
    printf("O vendedor que menos recebeu foi %s com R$%.2f\n", nome[menorNome], menor);

    return 0;
}