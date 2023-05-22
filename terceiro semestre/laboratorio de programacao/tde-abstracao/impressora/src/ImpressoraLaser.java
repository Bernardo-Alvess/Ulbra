class ImpressoraLaser extends Impressora {
    @Override
    void imprimir() {
        System.out.println("Impressão em qualidade de laser.");
    }

    @Override
    void escanear() {
        System.out.println("Escaneando documento com impressora laser.");
    }
}