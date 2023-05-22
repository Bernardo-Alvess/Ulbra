class ImpressoraMatricial extends Impressora {
    @Override
    void imprimir() {
        System.out.println("Impressão em qualidade matricial.");
    }

    @Override
    void escanear() {
        System.out.println("Escaneando documento com impressora matricial.");
    }
}