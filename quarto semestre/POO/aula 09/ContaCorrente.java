public class ContaCorrente extends Conta{

    public ContaCorrente(Cliente cliente){
        this.setCliente(cliente);
    }
    @Override
    public void deposita(double valor) {
        this.saldo += valor;
        System.out.println("Depósito realizado");
    }

    @Override
    public void transfere(Conta conta, double valor) {
        if(this.consultaSaldo() < valor){
            System.out.println("Não é possível realizar a transferência");
        }else{
            System.out.println("Transferência realizada");
            this.saldo -= valor;
            conta.saldo += valor;
        }
    }

    @Override
    public double consultaSaldo() {
        return this.saldo;
    }
}
