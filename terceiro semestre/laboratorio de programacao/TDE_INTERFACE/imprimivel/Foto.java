public class Foto implements Imprimivel{
    private String arquivo;
    public Foto(String arquivo){
        this.arquivo = arquivo;
    }

    public void imprimir(){
        System.out.printf("Imprimindo foto");
        System.out.println(arquivo);
    }
}
