public class Main {
    public static void main(String[] args) {
        Conta contaCorrente = new ContaCorrente("1234-5", 1000, 500);
        Conta contaPoupanca = new ContaPoupanca("5678-9", 500);
        Conta contaSalario = new ContaSalario("1010-1", 1500);

        contaCorrente.depositar(200);
        contaCorrente.sacar(300);

        contaPoupanca.depositar(100);
        contaPoupanca.transferir(contaCorrente, 50);

        contaSalario.sacar(200);
        contaSalario.depositar(300);

        System.out.println("Saldo Conta Corrente: " + contaCorrente.consultarSaldo());
        System.out.println("Saldo Conta Poupança: " + contaPoupanca.consultarSaldo());
        System.out.println("Saldo Conta Salário: " + contaSalario.consultarSaldo());
    }
}