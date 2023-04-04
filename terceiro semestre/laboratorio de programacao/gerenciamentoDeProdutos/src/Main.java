public class Main {

    public static void main(String[] args) {
        Produto mouse = new Produto("Logitech G403", 250, 10);
        Produto monitor = new Produto("Monitor Ozone 144hz 24' 4k", 1500, 4);
        Produto teclado = new Produto("Redragon Fizz k617", 350, 2);

        Loja kabum = new Loja();

        kabum.adicionarProduto(mouse);
        kabum.adicionarProduto(monitor);
        kabum.adicionarProduto(teclado);

        kabum.listarProdutos();

        kabum.venderProduto(mouse, 3);
        kabum.venderProduto(monitor, 4);

        kabum.removerProduto(teclado);
        kabum.venderProduto(teclado, 2);
    }

}
