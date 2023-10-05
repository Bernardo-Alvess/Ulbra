public class Conta {

    private static int contador = 1;
    private int numConta;
    private double saldo;
    private String nome;

    public Conta(String nome){
        this.saldo = 0;
        this.numConta = contador++;
        this.nome = nome;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public int getNumConta(){
        return this.numConta;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    @Override
    public String toString(){
        return this.nome + "|" + this.numConta + "|" + this.saldo;
    }

}
