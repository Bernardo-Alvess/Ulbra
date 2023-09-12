public abstract class Conta {
    protected String numero;
    protected double saldo;

    public Conta(String numero, double saldo) {
        this.numero = numero;
        this.saldo = saldo;
    }

    public abstract void depositar(double valor);

    public abstract void sacar(double valor);

    public abstract void transferir(Conta contaDestino, double valor);

    public double consultarSaldo() {
        return saldo;
    }
}