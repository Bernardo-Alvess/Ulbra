public class Gincana {
    private String nomeGincana;
    private int totalEstudantes;
    private Estudante estudanteVencedor;
    private int pontuacaoMaxima;

    //setters
    public void setNomeGincana(String nomeGincana){
        this.nomeGincana = nomeGincana;
    }

    public void setTotalEstudantes(int totalEstudantes){
        this.totalEstudantes = totalEstudantes;
    }

    public void setEstudanteVencedor(Estudante estudanteVencedor){
        this.estudanteVencedor = estudanteVencedor;
    }

    public void setPontuacaoMaxima(int pontuacaoMaxima){
        this.pontuacaoMaxima = pontuacaoMaxima;
    }

    //getters

    public String getNomeGincana(){
        return this.nomeGincana;
    }

    public int getTotalEstudantes(){
        return this.totalEstudantes;
    }

    public Estudante getEstudanteVencedor(){
        return this.estudanteVencedor;
    }

    public int getPontuacaoMaxima(){
        return this.getPontuacaoMaxima();
    }

    public void adicionarEstudante(Estudante estudante){
        this.totalEstudantes++;

        if(this.estudanteVencedor == null){
            this.estudanteVencedor = estudante;
        } else if(estudante.getPontos() > this.estudanteVencedor.getPontos()){
            this.estudanteVencedor = estudante;
        }
    }

    public void exibirVencedor(){
        System.out.printf("Vencedor: %s\nPontuação: %d\n", this.estudanteVencedor.getNome(), this.estudanteVencedor.getPontos());
    }
}
