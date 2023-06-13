public class Ave extends Animal implements Treinavel{
    double envergaduraAsa;
    public Ave(String nome, int idade, double peso, String especie, double envergaduraAsa) {
        super(nome, idade, peso, especie);
        this.envergaduraAsa = envergaduraAsa;
    }

    @Override
    public void realizarTruque() {
        System.out.printf("%s (%s) realizou um truque voador\n", this.getEspecie(), this.getNome());
    }

    public void voar(){
        System.out.printf("%s (%s) está voando\n", this.getEspecie(), this.getNome());
    }
}
