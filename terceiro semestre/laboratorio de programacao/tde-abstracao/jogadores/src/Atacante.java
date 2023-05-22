class Atacante extends Jogador {
    @Override
    void atacar() {
        System.out.println("O atacante está atacando o gol adversário!");
    }

    @Override
    void defender() {
        System.out.println("O atacante está ajudando na marcação do time.");
    }
}