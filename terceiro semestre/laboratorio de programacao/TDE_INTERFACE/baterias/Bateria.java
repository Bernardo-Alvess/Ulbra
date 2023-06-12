class Bateria implements Carregavel, Descarregavel {
    @Override
    public void carga() {
        System.out.println("A bateria está sendo carregada.");
    }
}