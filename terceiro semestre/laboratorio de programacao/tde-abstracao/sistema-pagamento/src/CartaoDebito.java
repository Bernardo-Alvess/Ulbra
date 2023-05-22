public class CartaoDebito extends Pagamento {

    private double saldo;
    private String nome;
    private String numero;

    public CartaoDebito(double saldo, String nome, String numero, int cvv) {
        this.saldo = saldo;
        this.nome = nome;
        this.numero = numero;
    }

    public void realizarPagamento() {
        System.out.println("Pagamento realizado no débito");
    }

    public void emitirRecibo() {
        System.out.println("Recibo do débito");
    }

}