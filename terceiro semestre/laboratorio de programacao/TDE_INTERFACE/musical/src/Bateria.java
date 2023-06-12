class Bateria implements Musical {
    @Override
    public void tocar() {
        System.out.println("A bateria está sendo tocada.");
    }

    @Override
    public void parar() {
        System.out.println("A bateria parou de ser tocada.");
    }

    @Override
    public void pausar() {
        System.out.println("A bateria foi pausada.");
    }
}
