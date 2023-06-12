public class Aviao implements Voador {
    @Override
    public void decolar() {
        System.out.println("O avião decolou.");
    }

    @Override
    public void voar() {
        System.out.println("O avião está voando.");
    }

    @Override
    public void aterrar() {
        System.out.println("O avião aterrou.");
    }
}
