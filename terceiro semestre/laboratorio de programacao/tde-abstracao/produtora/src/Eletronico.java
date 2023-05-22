class Eletronico extends Produto {
    private String nome;
    private String marca;
    private double preco;

    public Eletronico(String nome, String marca, double preco) {
        this.nome = nome;
        this.marca = marca;
        this.preco = preco;
    }

    @Override
    double calcularPreco() {
        return preco;
    }

    @Override
    void exibirDetalhes() {
        System.out.println("Eletrônico: " + nome);
        System.out.println("Marca: " + marca);
        System.out.println("Preço: $" + preco);
    }
}