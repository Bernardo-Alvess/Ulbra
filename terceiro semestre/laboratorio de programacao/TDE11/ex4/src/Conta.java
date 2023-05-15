public class Conta {
    private double saldo;
    private String numero;

    public Conta(double saldo, String numero){
        this.saldo = saldo;
        this.numero = numero;
    }
    public String getNumero() {
        return numero;
    }
    public void setNumero(String numero) {
        this.numero = numero;
    }
    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }
}
