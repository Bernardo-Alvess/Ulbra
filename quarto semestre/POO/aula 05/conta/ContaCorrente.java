public class ContaCorrente extends Conta {
    private double limite;

    public ContaCorrente(String numero, double saldo, double limite) {
        super(numero, saldo);
        this.limite = limite;
    }

    private void setSaldo(double saldo){
        this.saldo = saldo;
    }

    public double getSaldo(){
        return this.saldo;
    }
    @Override
    public void depositar(double valor) {
        setSaldo(getSaldo() + valor);
    }

    @Override
    public void sacar(double valor) {
        if (getSaldo() + limite >= valor) {
            setSaldo(getSaldo() - valor);
        } else {
            System.out.println("Saldo insuficiente");
        }
    }

    @Override
    public void transferir(Conta contaDestino, double valor) {
        if (getSaldo() + limite >= valor) {
            setSaldo(getSaldo() - valor);
            contaDestino.depositar(valor);
        } else {
            System.out.println("Saldo insuficiente");
        }
    }
}
