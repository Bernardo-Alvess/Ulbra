public class Estudante {
    private String nome;
    private int matricula;
    private String curso;

    public Estudante(String nome, int matricula, String curso) {
        this.nome = nome;
        this.matricula = matricula;
        this.curso = curso;
    }
    public Estudante(String nome, int matricula) {
        this.nome = nome;
        this.matricula = matricula;
        this.curso = null;
    }

    public static void main(String[] args) {
        Estudante estudante1 = new Estudante("Bernardo", 1, "ADS");
        Estudante estudante2 = new Estudante("Vitor", 2);
    }
}
