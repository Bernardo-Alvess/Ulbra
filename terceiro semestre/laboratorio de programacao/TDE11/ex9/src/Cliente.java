public class Cliente extends Pessoa{
    String numeroCartao;
    public Cliente(String nome, String endereco, String numeroCartao){
        super(nome, endereco);
        this.numeroCartao = numeroCartao;
    }
}
