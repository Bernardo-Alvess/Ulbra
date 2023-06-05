public class Media {
    public static void main(String[] args) {
        double[] notas = {8.5, 7.0, 9.0, 6.5, 10.0};

        double media = 0;

        for(int i = 0; i < notas.length; i++){
            media += notas[i];
        }
        media = media / notas.length;

        System.out.printf("A media da turma foi de: %s", media );
    }
}
