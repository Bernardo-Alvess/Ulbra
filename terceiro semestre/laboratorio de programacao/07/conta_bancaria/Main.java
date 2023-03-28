package conta_bancaria;
import pessoa.Pessoa;

public class Main{
    public static void main(String[] args) {
        Pessoa bernardo = new Pessoa("Bernardo", 19, 1.65);
        ContaBancaria conta = new ContaBancaria("1234", 1700, bernardo);
        System.out.println("Saldo atual: R$" +  conta.getSaldo());
        
        conta.depositar(5000);
        conta.sacar(1000);

        System.out.println("Saldo atual: R$" +  conta.getSaldo());
    }
}
