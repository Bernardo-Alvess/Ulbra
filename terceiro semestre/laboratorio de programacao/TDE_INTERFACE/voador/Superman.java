class Superman implements Voador {
    @Override
    public void decolar() {
        System.out.println("Superman decolou.");
    }

    @Override
    public void voar() {
        System.out.println("Superman está voando.");
    }

    @Override
    public void aterrar() {
        System.out.println("Superman aterrou.");
    }
}
