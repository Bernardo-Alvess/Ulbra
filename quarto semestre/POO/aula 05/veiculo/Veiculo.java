public class Veiculo {

    public Veiculo(String marca, String modelo, int ano){
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
    }
    private String marca;
    private String modelo;
    private int ano;
    private boolean isLigado = false;
    public int getAno() {
        return this.ano;
    }
    public String getMarca(){
        return this.marca;
    }
    public String getModelo() {
        return modelo;
    }

    public void ligar(){
        if(!isLigado){
            System.out.println("Carro ligado");
            this.isLigado = true;
        }else{
            System.out.println("O carro já está ligado");
        }
    }

    public void desligar(){
        if(isLigado){
            System.out.println("Carro desligado");
            this.isLigado = false;
        }else{
            System.out.println("O carro já está desligado");
        }
    }
}
