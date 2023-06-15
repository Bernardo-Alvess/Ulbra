public class Mamifero extends Animal{

    String tipoPelagem;

    public Mamifero(String nome, int idade, double peso, String especie, String tipoPelagem) {
        super(nome, idade, peso, especie);
        this.tipoPelagem = tipoPelagem;
    }

    public void amamentar(){
        System.out.printf("O mamifero '%s' está amamentando\n", this.getNome());
    }
}
