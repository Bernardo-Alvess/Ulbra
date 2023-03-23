public class Exemplo3 {
    int y = 10;

    void mudar(Exemplo3 e){
        e.y = y+ 5;
    }

    public static void main(String[] args) {
        Exemplo3 e1 = new Exemplo3();
        Exemplo3 e2 = new Exemplo3();
        e1.mudar(e2);
        System.out.println(e1.y);
        System.out.println(e2.y);
    }
}
