public class Livro extends Produto{
    private String autor;
    private int anoPublicacao;
    private boolean disponibilidade;

    public Livro(String titulo, String autor, int anoPublicacao, boolean disponibilidade) {
        super(titulo);
        this.autor = autor;
        this.anoPublicacao = anoPublicacao;
        this.disponibilidade = disponibilidade;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public int getAnoPublicacao() {
        return anoPublicacao;
    }

    public void setAnoPublicacao(int anoPublicacao) {
        this.anoPublicacao = anoPublicacao;
    }

    public boolean isDisponivel() {
        return disponibilidade;
    }

    public void setDisponibilidade(boolean disponibilidade) {
        this.disponibilidade = disponibilidade;
    }

    @Override
    public String detalhesDoProduto(){
        return "Título: " + getTitulo() + "\n" +
                "Autor: " + autor + "\n" +
                "Ano de publicação: " + anoPublicacao + "\n" +
                "Disponibilidade: " + (disponibilidade ? "Disponível" : "Indisponível") + "\n";
    }
}
