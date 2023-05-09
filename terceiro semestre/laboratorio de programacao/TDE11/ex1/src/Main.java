public class Main {
    public static void main(String[] args) {
        Pessoa bernardo = new Pessoa("Bernardo Alves", 20);
        Funcionario puska = new Funcionario("Lucas", 24, "Vendedor");

        System.out.printf("Nome: %s | Idade: %d\n", bernardo.getNome(), bernardo.getIdade());
        System.out.printf("Nome: %s | Idade: %d | Cargo: %s\n", puska.getNome(), puska.getIdade(), puska.getCargo());
    }
}