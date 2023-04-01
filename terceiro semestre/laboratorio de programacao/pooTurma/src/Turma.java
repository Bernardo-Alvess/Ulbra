public class Turma {
    Aluno[] alunos;
    int sala;
    double media;
    public Turma(int sala, Aluno[] alunos) {
        this.sala = sala;
        this.alunos = alunos;

        this.calcularMedia();
    }

     void calcularMedia(){
        double soma = 0;
        for(Aluno alunoItem : alunos){
            soma += alunoItem.getMedia();
        }

        media = soma / 3;
    }

    public double getMedia(){
        return media;
    }

}
