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