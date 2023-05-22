class Goleiro extends Jogador {
    @Override
    void atacar() {
        System.out.println("O goleiro está saindo do gol para auxiliar na defesa.");
    }

    @Override
    void defender() {
        System.out.println("O goleiro está defendendo o gol!");
    }
}