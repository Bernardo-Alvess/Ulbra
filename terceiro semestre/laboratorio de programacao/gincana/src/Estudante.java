public class Estudante {
    private String nome;
    private int idade;
    private int pontos;

    //setters
    public void setNome(String nome){
        this.nome = nome;
    }

    public void setIdade(int idade){
        this.idade = idade;
    }

    public void setPontos(int pontos){
        this.pontos = pontos;
    }

    //getters
    public String getNome(){
        return this.nome;
    }

    public int getIdade(){
        return this.idade;
    }

    public int getPontos(){
        return this.pontos;
    }
}

