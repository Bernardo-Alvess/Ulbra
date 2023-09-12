import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Double> lista = new ArrayList();
        lista.add(3.0);
        lista.add(2.0);

        Operador soma = new Soma();
        Operador subtracao = new Subtracao();
        Operador divisao = new Divisao();
        Operador multiplicacao = new Multicacao();

        CalculadoraBasica calculadora = new CalculadoraBasica();
        calculadora.calcular(soma, lista);

        double resultado = calculadora.getResultado();
        System.out.println(resultado);

        calculadora.calcular(subtracao, lista);
        resultado = calculadora.getResultado();
        System.out.println(resultado);

        calculadora.calcular(divisao, lista);
        resultado = calculadora.getResultado();
        System.out.println(resultado);

        calculadora.calcular(multiplicacao, lista);
        resultado = calculadora.getResultado();
        System.out.println(resultado);
    }
}
