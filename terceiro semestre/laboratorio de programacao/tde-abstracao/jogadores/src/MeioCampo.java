class MeioCampo extends Jogador {
    @Override
    void atacar() {
        System.out.println("O meio-campo está organizando jogadas de ataque.");
    }

    @Override
    void defender() {
        System.out.println("O meio-campo está auxiliando na defesa do time.");
    }
}