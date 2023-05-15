public class ContaCorrente extends Conta{
    private double limite;

    public ContaCorrente(double saldo, String numero, double limite){
        super(saldo, numero);
        this.limite = limite;
    }

    public double getLimite() {
        return limite;
    }

    public void setLimite(double limite) {
        this.limite = limite;
    }


}
