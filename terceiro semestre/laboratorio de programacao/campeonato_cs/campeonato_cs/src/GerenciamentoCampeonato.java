public class GerenciamentoCampeonato {
    public static void main(String[] args) {
        Equipe imperial = new Equipe("Imperial");
        Equipe mibr = new Equipe("Mibr");

        mibr.registrarVitoria(90);
        imperial.registrarDerrota(45);

        mibr.registrarDerrota(80);
        imperial.registrarVitoria(120);

        mibr.registrarEmpate(90);
        imperial.registrarEmpate(75);

        mibr.registrarVitoria(115);
        imperial.registrarDerrota(90);

        mibr.exibirInfo();
        imperial.exibirInfo();
    }
}