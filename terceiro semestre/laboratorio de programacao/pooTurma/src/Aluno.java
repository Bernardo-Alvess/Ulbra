public class Aluno {
    String nome;
    private Prova prova1;
    private Prova prova2;
    private double media;

    public Aluno(String nome, Prova prova1, Prova prova2){
        this.nome = nome;
        this.prova1 = prova1;
        this.prova2 = prova2;

        this.calcularMedia();
    }

     void calcularMedia(){
        this.media = (prova1.getMedia() + prova2.getMedia()) / 2;
    }

    public double getMedia(){
        return media;
    }

}
