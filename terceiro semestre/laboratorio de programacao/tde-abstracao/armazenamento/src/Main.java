public class Main {
    public static void main(String[] args) {
        Pendrive pendrive = new Pendrive();
        pendrive.lerDados();
        pendrive.gravarDados();

        DiscoRigido discoRigido = new DiscoRigido();
        discoRigido.lerDados();
        discoRigido.gravarDados();

        CartaoMemoria cartaoMemoria = new CartaoMemoria();
        cartaoMemoria.lerDados();
        cartaoMemoria.gravarDados();
    }
}