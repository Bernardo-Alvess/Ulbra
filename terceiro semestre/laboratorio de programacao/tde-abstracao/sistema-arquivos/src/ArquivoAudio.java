class ArquivoAudio extends Arquivo {
    @Override
    void abrir() {
        System.out.println("Abrindo arquivo de áudio.");
    }

    @Override
    void fechar() {
        System.out.println("Fechando arquivo de áudio.");
    }
}