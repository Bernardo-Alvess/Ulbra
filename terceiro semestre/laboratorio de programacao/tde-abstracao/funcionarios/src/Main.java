public class Main {
    public static void main(String[] args) {
        Gerente gerente = new Gerente("João", 5000.0);
        gerente.realizarTarefa();
        System.out.println("Salário do gerente: $" + gerente.calcularSalario());

        Vendedor vendedor = new Vendedor("Maria", 2000.0);
        vendedor.realizarTarefa();
        System.out.println("Salário do vendedor: $" + vendedor.calcularSalario());

        Estagiario estagiario = new Estagiario("Pedro", 1000.0);
        estagiario.realizarTarefa();
        System.out.println("Bolsa auxílio do estagiário: $" + estagiario.calcularSalario());
    }
}