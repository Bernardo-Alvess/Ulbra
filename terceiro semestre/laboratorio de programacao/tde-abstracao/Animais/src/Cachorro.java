public class Cachorro extends Animal {
    @Override
    void comer() {
        System.out.println("O cachorro está comendo.");
    }

    @Override
    void dormir() {
        System.out.println("O cachorro está dormindo.");
    }

    @Override
    void mover() {
        System.out.println("O cachorro está se movendo.");
    }
}
