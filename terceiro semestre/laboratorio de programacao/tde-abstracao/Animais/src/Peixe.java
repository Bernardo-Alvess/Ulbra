class Peixe extends Animal {
    @Override
    void comer() {
        System.out.println("O peixe está comendo.");
    }

    @Override
    void dormir() {
        System.out.println("O peixe está dormindo.");
    }

    @Override
    void mover() {
        System.out.println("O peixe está nadando.");
    }
}