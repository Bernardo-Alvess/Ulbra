public class ex3 {
    public static void main(String[] args) {
        int n = 15;

        int anterior = 0;
        int proximo = 1;

        for (int i = 0; i < n; i++) {
            System.out.print(anterior + " ");

            int x = anterior + proximo;
            anterior = proximo;
            proximo = x;
        }
    }
}
