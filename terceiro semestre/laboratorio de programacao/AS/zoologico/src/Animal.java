public class Animal {
    private String nome;
    private int idade;
    private double peso;
    private String especie;

    public Animal(String nome, int idade, double peso, String especie){
        this.nome = nome;
        this.idade = idade;
        this.peso = peso;
        this.especie = especie;
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

    public double getPeso() {
        return peso;
    }

    public void setPeso(double peso) {
        this.peso = peso;
    }

    public String getEspecie() {
        return especie;
    }

    public void setEspecie(String especie) {
        this.especie = especie;
    }

    public void movimentar(){
        System.out.printf("%s (%s) se moveu\n", this.especie, this.nome);
    }

    public void movimentar(String movimento){
        System.out.printf("%s (%s) se moveu de forma específica - Ação feita: %s\n", this.especie, this.nome, movimento);
    }

}
