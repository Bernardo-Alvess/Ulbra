public class Livro {
    private String titulo;
    private String autor;
    private double preco;

    public Livro(String titulo, String autor, double preco) {
        this.titulo = titulo;
        this.autor = autor;
        this.preco = preco;
    }

    public Livro(String titulo, String autor) {
        this.titulo = titulo;
        this.autor = autor;
        this.preco = 10;
    }

    public static void main(String[] args) {
        Livro livro1 = new Livro("Saboroso Cadáver", "Bazterrica", 49.99);
        Livro livro2 = new Livro("Percy Jackson: O Ladrão de Raios", "Rick Ryordan");
    }
}
