public class Triangulo extends FormaGeometrica{
    private double base;
    private double altura;

    public Triangulo(double base, double altura){
        this.base = base;
        this.altura = altura;
    }

    public double calcularArea(){
        return (base * altura) / 2;
    }
    public double calcularPerimetro(){
        //considera-se um triangulo equilátero
        return 3 * base;
    }
}
