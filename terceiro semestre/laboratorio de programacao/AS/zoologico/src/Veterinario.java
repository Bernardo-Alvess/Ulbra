public class Veterinario extends Funcionario{
    String especialidade;
    public Veterinario(String nome, String cargo, double salario, String especialidade) {
        super(nome, cargo, salario);
        this.especialidade = especialidade;
    }

    public void realizarExame(Animal animal){
        System.out.printf("O veterinário '%s' está realizando um exame no animal '%s' | Espécime: %s\n", this.getNome(), animal.getNome(), animal.getEspecie());
    }
}
