package carro;

public class Main{
    public static void main(String[] args) {
        Carro carro = new Carro("Chevrolet", "Onyx", 2021);

        System.out.println("Marca: " + carro.getMarca());
        System.out.println("Modelo: " + carro.getModelo());
        System.out.println("Ano: " + carro.getAno());

        carro.setMarca("Tesla");
        carro.setModelo("Model S");
        carro.setAno(2023);

        System.out.println("Marca: " + carro.getMarca());
        System.out.println("Modelo: " + carro.getModelo());
        System.out.println("Ano: " + carro.getAno());
    }
}