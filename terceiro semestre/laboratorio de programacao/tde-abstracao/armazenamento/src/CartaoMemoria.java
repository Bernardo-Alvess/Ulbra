class CartaoMemoria extends DispositivoArmazenamento {
    @Override
    void lerDados() {
        System.out.println("Lendo dados do cartão de memória.");
    }

    @Override
    void gravarDados() {
        System.out.println("Gravando dados no cartão de memória.");
    }
}
