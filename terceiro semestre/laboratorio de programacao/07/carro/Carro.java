// Exercício 2: Classe "Carro"
// Crie uma classe chamada "Carro" que representará um carro. Esta classe deve ter:
// Três atributos privados: "marca" (String), "modelo" (String) e "ano" (int).
// Métodos públicos para obter (get) e definir (set) os valores dos atributos.

package carro;

public class Carro{
    private String marca;
    private String modelo;
    private int ano;

    public Carro(String marca, String modelo, int ano){
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
    }

    //setters
    public String setMarca(String marca){
        this.marca = marca;
    }

    public String setModelo(String modelo){
        this.modelo = modelo;
    }

    public int setAno(int ano){
        this.ano = ano;
    }

    //gettters
    public int getAno(){
        return this.ano;
    }

    public String getModelo(){
        return this.modelo;
    }

    public String getMarca(){
        return this.marca;
    }

}