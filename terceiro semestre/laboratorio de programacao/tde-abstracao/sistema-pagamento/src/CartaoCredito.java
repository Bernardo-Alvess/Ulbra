public class CartaoCredito extends Pagamento{
    private double limite;
    private String nome;
    private String numero;
    private int cvv;

    public CartaoCredito(double limite, String nome, String numero, int cvv){
        this.limite = limite;
        this.nome = nome;
        this.numero = numero;
        this.cvv = cvv;
    }

    public void realizarPagamento(){
        System.out.println("Pagamento realizado no crédito");
    }

    public void emitirRecibo(){
        System.out.println("Recibo do credito");
    }
}
