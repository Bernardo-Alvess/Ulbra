public class Gato extends Animal {
    @Override
    void comer() {
        System.out.println("O gato está comendo.");
    }

    @Override
    void dormir() {
        System.out.println("O gato está dormindo.");
    }

    @Override
    void mover() {
        System.out.println("O gato está se movendo.");
    }
}