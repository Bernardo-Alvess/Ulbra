public class Loja {
    Produto produto1;
    Produto produto2;
    Produto produto3;


    private boolean existeProduto(Produto produto){
        //String prodNome = produto.getNome();
        boolean produtoExiste = false;
        if(produto1 == produto){
            return produtoExiste = true;
        } else if (produto2 == produto) {
            return produtoExiste = true;
        } else if(produto3 == produto){
            return produtoExiste = true;
        }
        return produtoExiste;
    }
    public void adicionarProduto(Produto produto){
        if(!this.existeProduto(produto)){
            if(produto1 == null){
                produto1 = produto;
            } else if (produto2 == null) {
                produto2 = produto;
            } else if(produto3 == null){
                produto3 = produto;
            }else{
                System.err.println("A loja esta com o máximo de produtos permitidos\n");
            }
        }else{
            System.err.println("Produto duplicado, inserção não ocorrida\n");
        }
    }

    public void removerProduto(Produto produto) {
        //String prodNome = produto.getNome();
        if(this.existeProduto(produto)){
            if(produto1 == produto){
                produto1 = null;
            }else if (produto2 == produto){
                produto2 = null;
            }else{
                produto3 = null;
            }
        }else{
            System.err.printf("O Produto '%s' não existe no sistema\n", produto.getNome());
        }
    }

    public void listarProdutos(){
        System.out.printf("Produtos Disponíveis\n");
        System.out.println("----------------------");
        System.out.printf("| %s - %d unidades| %s - %d unidades| %s - %d unidades\n", produto1.getNome(), produto1.getQuantidade(), produto2.getNome(), produto2.getQuantidade(), produto3.getNome(), produto3.getQuantidade());
    }

    public void venderProduto(Produto produto, int quantidade){
        int qtdProduto = produto.getQuantidade();
        if(this.existeProduto(produto) && quantidade > 0){
            if(qtdProduto >= quantidade){
                produto.setQuantidade(qtdProduto - quantidade);
                System.out.printf("Venda do produto '%s' realizada com sucesso\n", produto.getNome());
                System.out.printf("Total de %d unidades vendidas\n", quantidade);
                System.out.printf("Valor unitario: %.2f | Valor total: %.2f\n", produto.getPreco(), produto.getPreco() * quantidade);
            }
            else{
                System.out.printf("O produto '%s' possui %d unidades em estoque\n", produto.getNome(), qtdProduto);
            }
        }else{
            System.err.printf("Produto '%s' não existe ou quantidade informada é igual a 0\n", produto.getNome());
        }
    }

    public void adicionarEstoque(Produto produto, int quantidade){
        if(this.existeProduto(produto)){
            produto.setQuantidade(quantidade);
            System.out.printf("Adicionado %d itens para o produto '%s' ao estoque\n", quantidade, produto.getNome());
        }
    }

}
