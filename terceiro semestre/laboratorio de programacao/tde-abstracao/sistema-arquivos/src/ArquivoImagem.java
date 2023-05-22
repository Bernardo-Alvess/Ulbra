class ArquivoImagem extends Arquivo {
    @Override
    void abrir() {
        System.out.println("Abrindo arquivo de imagem.");
    }

    @Override
    void fechar() {
        System.out.println("Fechando arquivo de imagem.");
    }
}