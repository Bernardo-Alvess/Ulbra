class Gerente extends Funcionario {
private String nome;
private double salarioBase;

public Gerente(String nome, double salarioBase) {
        this.nome = nome;
        this.salarioBase = salarioBase;
        }

@Override
    double calcularSalario() {
            // Implementação específica para cálculo do salário de um gerente
            double salario = salarioBase * 1.5;
            return salario;
            }

@Override
    void realizarTarefa() {
            System.out.println("O gerente " + nome + " está realizando tarefas de gerenciamento.");
            }
            }
