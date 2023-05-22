class Trem extends Transporte {
    @Override
    void carregar() {
        System.out.println("Carregando vagões do trem.");
    }

    @Override
    void descarregar() {
        System.out.println("Descarregando vagões do trem.");
    }
}
