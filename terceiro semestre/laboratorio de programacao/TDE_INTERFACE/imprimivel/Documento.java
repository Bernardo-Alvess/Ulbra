public class Documento implements Imprimivel{
    private String conteudo;

    public Documento(String conteudo){
        this.conteudo = conteudo;
    }

    public void imprimir(){
        System.out.println("Imprimindo documento");
        System.out.println(conteudo);
    }
}
