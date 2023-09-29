import java.util.ArrayList;

public class Cliente {
    private String nome;
    private int idade;
    private ArrayList<Conta> conta = new ArrayList<>();

    public Cliente(String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public ArrayList<Conta> getConta() {
        return this.conta;
    }

    public void setConta(Conta conta) {
        this.conta.add(conta);
    }
}
