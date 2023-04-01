public class Main {
    public static void main(String[] args) {
        Prova provaBernardo = new Prova(4, 2.5);
        Prova provaBernardo2 = new Prova(1, 7);
        Aluno bernardo = new Aluno("Bernardo Alves", provaBernardo, provaBernardo2);

        Prova provaBryan = new Prova(6.5, 3.5);
        Prova provaBryan2 = new Prova(0, 3);
        Aluno bryan = new Aluno("Bryan Martinez", provaBryan, provaBryan2);

        Prova provaVitor = new Prova(5, 4);
        Prova provaVitor2 = new Prova(6, 1.5);
        Aluno vitor = new Aluno("Vitor Bernardino", provaVitor, provaVitor2);

        Aluno[] alunos = {bernardo, bryan, vitor};
        Turma turma = new Turma(321, alunos);

        for (Aluno alunoItem: alunos) {
            System.out.println("O aluno " + alunoItem.nome + "Teve media de = " + alunoItem.getMedia());
        }

        System.out.println("A média geral da turma é de = " + turma.getMedia());
    }
}