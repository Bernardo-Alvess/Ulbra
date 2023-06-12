public class Guitarra implements Musical{
    @Override
    public void tocar() {
        System.out.println("A guitarra está sendo tocada.");
    }

    @Override
    public void parar() {
        System.out.println("A guitarra parou de ser tocada.");
    }

    @Override
    public void pausar() {
        System.out.println("A guitarra foi pausada.");
    }
}
