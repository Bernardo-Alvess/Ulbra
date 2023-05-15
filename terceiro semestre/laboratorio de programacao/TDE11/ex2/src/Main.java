public class Main {
    public static void main(String[] args) {
        Veiculo moto = new Veiculo("CB 300F Twister", "Honda");
        Carro carro = new Carro("Model Y", "Tesla", 5);

        System.out.printf("Moto: %s, modelo: %s\n", moto.getMarca(), moto.getModelo());
        System.out.printf("Carro: %s, modelo: %s, numero de passageiros: %d", carro.getMarca(), carro.getModelo(), carro.getNumPassageiros());
    }
}