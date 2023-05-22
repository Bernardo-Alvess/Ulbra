class Roupa extends Produto {
    private String marca;
    private String tamanho;
    private double preco;

    public Roupa(String marca, String tamanho, double preco) {
        this.marca = marca;
        this.tamanho = tamanho;
        this.preco = preco;
    }

    @Override
    double calcularPreco() {
        return preco;
    }

    @Override
    void exibirDetalhes() {
        System.out.println("Roupa: " + marca);
        System.out.println("Tamanho: " + tamanho);
        System.out.println("Preço: $" + preco);
    }
}