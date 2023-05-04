public class Cachorro {
    private String nome;
    private String raca;
    private int idade;

    public Cachorro(String nome, String raca, int idade) {
        this.nome = nome;
        this.raca = raca;
        this.idade = idade;
    }

    public Cachorro(String nome, String raca) {
        this.nome = nome;
        this.raca = raca;
        this.idade = 1;
    }

    public static void main(String[] args) {
        Cachorro cachorro1 = new Cachorro("Borboleta", "Pitbull", 5);
        Cachorro cachorro2 = new Cachorro("Azazel", "Pinscher");
    }

}
