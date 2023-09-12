public class ContaPoupanca extends Conta {
    public ContaPoupanca(String numero, double saldo) {
        super(numero, saldo);
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
        if (getSaldo() >= valor) {
            setSaldo(getSaldo() - valor);
        } else {
            System.out.println("Saldo insuficiente");
        }
    }

    @Override
    public void transferir(Conta contaDestino, double valor) {
        if (getSaldo() >= valor) {
            setSaldo(getSaldo() - valor);
            contaDestino.depositar(valor);
        } else {
            System.out.println("Saldo insuficiente");
        }
    }
}