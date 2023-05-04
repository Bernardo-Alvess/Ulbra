public class Main {
    public static void main(String[] args) {
        Estudante bernardo = new Estudante();
        bernardo.setNome("Bernardo Alves");
        bernardo.setIdade(19);
        bernardo.setPontos(75);

        Estudante vitor = new Estudante();
        vitor.setNome("Vitor");
        vitor.setIdade(22);
        vitor.setPontos(80);

        Estudante bryan = new Estudante();
        bryan.setNome("Bryan");
        bryan.setIdade(19);
        bryan.setPontos(90);

        Gincana gincana = new Gincana();

        gincana.adicionarEstudante(bernardo);
        gincana.adicionarEstudante(vitor);
        gincana.adicionarEstudante(bryan);

        gincana.exibirVencedor();
    }
}