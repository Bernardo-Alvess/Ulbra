public class Quadrado extends FiguraGeometrica{
    private double lado;

    public Quadrado(double lado){
        this.lado = lado;
    }

    @Override
    public void calcularArea(){
        double area = lado * lado;
        System.out.println("Área do quadrado: " + area);
    }

    public void calcularPerimetro(){
        double perimetro = lado * 4;
        System.out.println("Perímetro do quadrado: " + perimetro);
    }
}
