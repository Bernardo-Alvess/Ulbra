public abstract class Produto {
    private String titulo;

   public Produto(String titulo){
       this.titulo = titulo;
    }
    public String getTitulo(){
        return this.titulo;
    }
    public void setTitulo(String titulo){
        this.titulo = titulo;
    }
    public abstract String detalhesDoProduto();

}
