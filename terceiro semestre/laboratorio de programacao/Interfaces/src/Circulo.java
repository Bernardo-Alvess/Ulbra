public class Circulo implements FiguraGeometrica{
    public double raio;

    public Circulo(double raio){
        this.raio = raio;
    }

    @Override
    public double area() {
        return Math.PI * raio * raio;
    }

    @Override
    public double perimetro() {
        return raio * 2;
    }
}
