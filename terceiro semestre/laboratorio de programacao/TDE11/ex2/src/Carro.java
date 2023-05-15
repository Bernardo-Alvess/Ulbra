public class Carro extends Veiculo{

    private int numPassageiros;

    public Carro(String nome, String modelo, int numPassageiros){
        super(nome, modelo);
        this.numPassageiros = numPassageiros;
    }
    public int getNumPassageiros() {
        return numPassageiros;
    }

    public void setNumPassageiros(int numPassageiros) {
        this.numPassageiros = numPassageiros;
    }


}
