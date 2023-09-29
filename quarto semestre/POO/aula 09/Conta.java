public abstract class Conta {
    private Cliente cliente;
    private int numeroConta;
    protected double saldo;
    public abstract void deposita(double valor);
    public abstract void transfere(Conta conta, double valor);
    public abstract double consultaSaldo();

    public Cliente getCliente() {
        return cliente;
    }

    public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }
    public int getNumeroConta() {
        return numeroConta;
    }

    public void setNumeroConta(int numeroConta) {
        this.numeroConta = numeroConta;
    }
}
