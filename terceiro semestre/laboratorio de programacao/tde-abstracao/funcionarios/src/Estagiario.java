class Estagiario extends Funcionario {
    private String nome;
    private double bolsaAuxilio;

    public Estagiario(String nome, double bolsaAuxilio) {
        this.nome = nome;
        this.bolsaAuxilio = bolsaAuxilio;
    }

    @Override
    double calcularSalario() {
        // Implementação específica para cálculo da bolsa auxílio de um estagiário
        return bolsaAuxilio;
    }

    @Override
    void realizarTarefa() {
        System.out.println("O estagiário " + nome + " está realizando tarefas sob supervisão.");
    }
}