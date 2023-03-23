public class Exemplo{
    void incrementar (int x) {
        x = x + 1;
    }

    public static void main(String[] args) {
        Exemplo e = new Exemplo();
        int i = 10;
        e.incrementar(i);
        System.out.println(i);
    }
}