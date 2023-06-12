public class Main {
    public static void main(String[] args) {
        Aviao aviao = new Aviao();
        aviao.decolar();
        aviao.voar();
        aviao.aterrar();

        Passaro pássaro = new Passaro();
        pássaro.decolar();
        pássaro.voar();
        pássaro.aterrar();

        Superman superman = new Superman();
        superman.decolar();
        superman.voar();
        superman.aterrar();
    }
}