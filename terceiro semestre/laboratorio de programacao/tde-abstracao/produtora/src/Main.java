public class Main {
    public static void main(String[] args) {
        Livro livro = new Livro("Java How to Program", "Deitel & Deitel", 59.99);
        livro.exibirDetalhes();
        System.out.println("Preço total: $" + livro.calcularPreco());

        Roupa roupa = new Roupa("Nike", "M", 79.99);
        roupa.exibirDetalhes();
        System.out.println("Preço total: $" + roupa.calcularPreco());

        Eletronico eletronico = new Eletronico("Smartphone", "Samsung", 999.99);
        eletronico.exibirDetalhes();
        System.out.println("Preço total: $" + eletronico.calcularPreco());
    }
}