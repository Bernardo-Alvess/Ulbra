public class Main {
    public static void main(String[] args) {
        Cliente bernardo = new Cliente("Bernardo", 20);
        ContaPoupanca contaPoupanca1 = new ContaPoupanca(bernardo);
        contaPoupanca1.setNumeroConta(12345);
        ContaCorrente contaCorrente2 = new ContaCorrente(bernardo);
        contaCorrente2.setNumeroConta(123);

        bernardo.setConta(contaPoupanca1);
        bernardo.setConta(contaCorrente2);

        System.out.println(bernardo.getConta());

        contaCorrente2.deposita(1000000);
        contaCorrente2.transfere(contaPoupanca1, 1000);
    }
}
