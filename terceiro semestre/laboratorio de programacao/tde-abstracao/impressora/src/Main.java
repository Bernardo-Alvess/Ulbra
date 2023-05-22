public class Main {
    public static void main(String[] args) {
        ImpressoraJatoTinta jatoTinta = new ImpressoraJatoTinta();
        jatoTinta.imprimir();
        jatoTinta.escanear();

        ImpressoraLaser laser = new ImpressoraLaser();
        laser.imprimir();
        laser.escanear();

        ImpressoraMatricial matricial = new ImpressoraMatricial();
        matricial.imprimir();
        matricial.escanear();
    }
}