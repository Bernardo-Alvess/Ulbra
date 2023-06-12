public class Main {
    public static void main(String[] args) {
        Fatura fatura = new Fatura();
        fatura.pagar();
        System.out.println("Fatura paga: " + fatura.verificarPagamento());

        Cheque cheque = new Cheque();
        cheque.pagar();
        System.out.println("Cheque compensado: " + cheque.verificarPagamento());

        Deposito deposito = new Deposito();
        deposito.pagar();
        System.out.println("Deposito confirmado: " + deposito.verificarPagamento());
    }
}