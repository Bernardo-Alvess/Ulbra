class Pendrive extends DispositivoArmazenamento {
    @Override
    void lerDados() {
        System.out.println("Lendo dados do pendrive.");
    }

    @Override
    void gravarDados() {
        System.out.println("Gravando dados no pendrive.");
    }
}