public class ProdutoPerecivel extends Produto{
    String dataValidade;
    public ProdutoPerecivel(String codigo, double preco, String dataValidade){
        super(codigo, preco);
        this.dataValidade = dataValidade;
    }

}
