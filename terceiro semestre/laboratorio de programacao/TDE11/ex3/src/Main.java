public class Main {
    public static void main(String[] args) {
        FiguraGeometrica figura = new FiguraGeometrica();
        figura.calcularArea();
        figura.calcularPerimetro();

        Quadrado quadrado = new Quadrado(5);
        quadrado.calcularArea();
        quadrado.calcularPerimetro();
    }
}