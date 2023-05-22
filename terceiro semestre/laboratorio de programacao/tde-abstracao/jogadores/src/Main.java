public class Main {
    public static void main(String[] args) {
        Atacante atacante = new Atacante();
        atacante.atacar();
        atacante.defender();

        MeioCampo meioCampo = new MeioCampo();
        meioCampo.atacar();
        meioCampo.defender();

        Goleiro goleiro = new Goleiro();
        goleiro.atacar();
        goleiro.defender();
    }
}