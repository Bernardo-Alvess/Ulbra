public class ContaSalario extends Conta {
    public ContaSalario(String numero, double saldo) {
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
        System.out.println("Operação não permitida para Conta Salário");
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
        System.out.println("Operação não permitida para Conta Salário");
    }
}