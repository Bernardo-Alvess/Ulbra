class Navio extends Transporte {
    @Override
    void carregar() {
        System.out.println("Carregando contêineres no navio.");
    }

    @Override
    void descarregar() {
        System.out.println("Descarregando contêineres do navio.");
    }
}

