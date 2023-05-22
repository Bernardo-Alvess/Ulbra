class Caminhao extends Transporte {
    @Override
    void carregar() {
        System.out.println("Carregando mercadorias no caminhão.");
    }

    @Override
    void descarregar() {
        System.out.println("Descarregando mercadorias do caminhão.");
    }
}