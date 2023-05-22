class Vendedor extends Funcionario {
    private String nome;
    private double salarioBase;

    public Vendedor(String nome, double salarioBase) {
        this.nome = nome;
        this.salarioBase = salarioBase;
    }

    @Override
    double calcularSalario() {
        // Implementação específica para cálculo do salário de um vendedor
        double salario = salarioBase + (salarioBase * 0.1);
        return salario;
    }

    @Override
    void realizarTarefa() {
        System.out.println("O vendedor " + nome + " está realizando tarefas de vendas.");
    }
}