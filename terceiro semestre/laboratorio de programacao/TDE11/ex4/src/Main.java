public class Main {
    public static void main(String[] args) {
        Conta conta = new Conta(1000, "123456");
        System.out.println("Conta: " + conta.getNumero() + ", saldo: " + conta.getSaldo());

        ContaCorrente contaCorrente = new ContaCorrente(2000, "654321", 500);
        System.out.println("Conta corrente: " + contaCorrente.getNumero() + ", saldo: " + contaCorrente.getSaldo() + ", limite: " + contaCorrente.getLimite());
    }
}