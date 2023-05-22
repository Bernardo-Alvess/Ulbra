class ArquivoTexto extends Arquivo {
    @Override
    void abrir() {
        System.out.println("Abrindo arquivo de texto.");
    }

    @Override
    void fechar() {
        System.out.println("Fechando arquivo de texto.");
    }
}