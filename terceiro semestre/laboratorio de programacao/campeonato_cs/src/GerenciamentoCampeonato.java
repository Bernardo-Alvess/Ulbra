public class GerenciamentoCampeonato {
    public static void main(String[] args) {
        Equipe imperial = new Equipe("Imperial");
        Equipe mibr = new Equipe("Mibr");

        mibr.registrarVitoria();
        imperial.registrarDerrota();

        mibr.registrarDerrota();
        imperial.registrarVitoria();

        mibr.registrarEmpate();
        imperial.registrarEmpate();

        mibr.registrarVitoria();
        imperial.registrarDerrota();

        System.out.println(mibr.getNome());
        System.out.println(mibr.getDerrotas());
        System.out.println(mibr.getEmpates());
        System.out.println(mibr.getVitorias());

        System.out.println(imperial.getNome());
        System.out.println(imperial.getDerrotas());
        System.out.println(imperial.getEmpates());
        System.out.println(imperial.getVitorias());

    }
}