public class Main {
    public static void main(String[] args) {
        Produto prod1 = new Produto("Mouse Logitech SuperLight X", 1000, "Mouse para jogos Logitech");
        Produto prod2 = new Produto("Mouse Logitech Gpro", 500, "Mouse para jogos Logitech");
        Produto prod3 = new Produto("ZOTAC Geforce RTX 4090", 12000, "Placa de vídeo Nvidia");

        CarrinhoDeCompras carrinho = new CarrinhoDeCompras();

        carrinho.adicionarAoCarrinho(prod1);
        carrinho.adicionarAoCarrinho(prod2);
        carrinho.adicionarAoCarrinho(prod3);
        System.out.println(carrinho.getTotal());
        System.out.printf("%s = %s = R$%.2f", prod1.getNome(), prod1.getDescricao(), prod1.getValor());
    }
}
