public class Main {
    public static void main(String[] args) {
        Veiculo carro1 = new Veiculo("Chevrolet", "Onix", 2024);
        Veiculo carro2 = new Veiculo("Hyundai", "Creta", 2024);

        carro1.ligar();
        carro2.desligar();
        carro1.desligar();
        carro2.ligar();
    }
}
