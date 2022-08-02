/*
Dois vetores de 10 posições
Um vetor com código dos produtos
Um vetor com a quantidade do estoque

Ler conjunto de dados:
código de um cliente
codigo do produto
quantidade de itens que ele deseja comprar

Verificar se:

 -  O codigo do produto solicitado existe, caso contrário exibir Código inexistente
 -  Cada pedido deve ser atendido integralmente, caso não seja possível, exibir: Não temos estoque suficiente desta mercadoria, se puder atende-lo exibir: Pedido atendido. Obrigado e volte sempre
 -  Efetuar a atualização do estoque somente se o pedido for efetuado integralmente
 - Escrever os códigos dos produtos com seus respectivos estoques atualizados;

*/

#include <stdio.h>

int main(){

    int estoque[] = {10,20,30,40,50,60,70,80,90,100};
    int codigo[] = {1,2,3,4,5,6,7,8,9,10};
    int isCodeValid, code, codCliente, quantidadeItens, indexEstoque;
    
    do{
        printf("Codigo do cliente: ");
        scanf("%i%*c", &codCliente);

        //Verificando o código do cliente

        if(codCliente != 0){

                do{

                printf("Qual produto voce deseja comprar?");
                scanf("%i%*c", &code);

                //Verficando se o código existe dentro da array

                for(int i = 0; i < 10; i++){
                    if(code == codigo[i]){
                        indexEstoque = i;
                        isCodeValid = 1;
                        printf("Produto encontrado\n");
                        break;
                    }
                    else{
                        isCodeValid = 0;
                    }
                }

                // for(int i = 0; i < 10; i++){
                if(isCodeValid == 1){

                    printf("Quantidade presente no estoque: %i\n", estoque[indexEstoque]);
                    printf("Qual a quantidade que voce deseja levar? ");

                    scanf("%i%*c", &quantidadeItens);
                    if(quantidadeItens > estoque[indexEstoque]){
                        printf("Não temos estoque suficente desta mercadoria\n");
                    }
                    else{
                        estoque[indexEstoque] -= quantidadeItens;
                        printf("Pedido atendido. Obrigado, volte sempre\n");
                    }
                    break;
                }
                else{
                    printf("Codigo inexistente\n");
                }
                // }
            }while (isCodeValid == 0);
        }
    }while(codCliente != 0);

    for(int i = 0; i < 10; i++){
        printf("Produto: %i\n", codigo[i]);
        printf("Estoque: %i\n", estoque[i]);
        printf("-----------------------------------------\n");
    }

    printf("Obrigado");

    return 0;
}