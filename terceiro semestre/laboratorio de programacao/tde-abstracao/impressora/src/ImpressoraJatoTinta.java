class ImpressoraJatoTinta extends Impressora {
    @Override
    void imprimir() {
        System.out.println("Impressão em qualidade de jato de tinta.");
    }

    @Override
    void escanear() {
        System.out.println("Escaneando documento com impressora jato de tinta.");
    }
}
