// Exercício 1: Classe "Pessoa"
// Crie uma classe chamada "Pessoa" que representará uma pessoa. Esta classe deve ter:
// Três atributos privados: "nome" (String), "idade" (int) e "altura" (double).
// Métodos públicos para obter (get) e definir (set) os valores dos atributos.
public class Pessoa{

    private String nome;
    private int idade;
    private double altura;

    public Pessoa(String nome, int idade, double altura){
        this.nome = nome;
        this.idade = idade;
        this.altura = altura;
    }

    //setters
    public void setNome(String nome){
        this.nome = nome;
    }

    public void setIdade(int idade){
        this.idade = idade;
    }

    public void setAltura(double altura){
        this.altura = altura;
    }

    //getters
    public String getNome(){
        return this.nome;
    }

    public int getIdade(){
        return this.idade;
    }

    public double getAltura(){
        return this.altura;
    }

    public void getInfo(){
        System.out.println("Nome: " + this.nome);
        System.out.println("Idade: " + this.idade);
        System.out.println("Altura: " + this.altura);
    }

}