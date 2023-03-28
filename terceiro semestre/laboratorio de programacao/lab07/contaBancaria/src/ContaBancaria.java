// Crie uma classe chamada "ContaBancaria" que representará uma conta bancária. Esta classe deve ter:
// Três atributos privados: "numeroConta" (String), "saldo" (double) e "titular" (Pessoa).
// Métodos públicos para depositar (depositar), sacar (sacar) e consultar o saldo (getSaldo)
public class ContaBancaria{
    private String numeroConta;
    private double saldo;
    private Pessoa titular;

    public ContaBancaria(String numeroConta, double saldo, Pessoa titular){
        this.numeroConta = numeroConta;
        this.saldo = saldo;
        this.titular = titular;
    }
    public void depositar(double valor){
        this.saldo += valor;
        System.out.println("Você depositou: R$" + valor);
    }
    public void sacar(double valor){
        this.saldo -= valor;
        System.out.println("Você sacou: R$" + valor);
    }
    public double getSaldo(){
        return this.saldo;
    }
}