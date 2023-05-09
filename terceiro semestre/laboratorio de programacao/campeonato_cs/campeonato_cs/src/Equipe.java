public class Equipe {
    private String nome;
    private int vitorias;
    private int derrotas;
    private int empates;
    private int pontos;
    private int numeroKills;

    public Equipe(String nome){
        this.nome = nome;
        this.vitorias = 0;
        this.derrotas = 0;
        this.empates = 0;
        this.pontos = 0;
        this.numeroKills = 0;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getVitorias() {
        return vitorias;
    }

    public void setVitorias(int vitorias) {
        this.vitorias = vitorias;
    }

    public int getDerrotas() {
        return derrotas;

    }

    public void setDerrotas(int derrotas) {
        this.derrotas = derrotas;
    }

    public int getEmpates() {
        return empates;
    }

    public void setEmpates(int empates) {
        this.empates = empates;
    }

    public void registrarVitoria(int numeroKills){
        this.vitorias++;
        this.pontos += 3;
        this.numeroKills += numeroKills;
    }

    public void registrarDerrota(int numeroKills){
        this.derrotas++;
        this.numeroKills += numeroKills;
    }

    public void registrarEmpate(int numeroKills){
        this.empates++;
        this.pontos++;
        this.numeroKills += numeroKills;
    }
    public double calcularAproveitamento(){
        int totaldejogos = this.derrotas + this.vitorias + this.empates;
        int totalPontosPossiveis = totaldejogos * 3;
        double aproveitamento = 0;

        if(totalPontosPossiveis > 0){
            aproveitamento = (double) pontos / totalPontosPossiveis * 100;
        }
        return aproveitamento;
    }

    public void exibirInfo(){
        System.out.println("Equipe: " + this.nome);
        System.out.println("Derrotas: " + this.derrotas);
        System.out.println("Vitórias: " + this.vitorias);
        System.out.println("Empates: " + this.empates);
        System.out.println("Pontos: " + this.pontos);
        System.out.println("Aproveitamento: " + this.calcularAproveitamento());
        System.out.println("Kills: " + this.numeroKills);
    }
}
