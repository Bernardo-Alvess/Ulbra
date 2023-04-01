public class Prova {
    private double notaParte1;
    private double notaParte2;
    private double media;

    public Prova(double notaParte1, double notaParte2){
        this.notaParte1 = notaParte1;
        this.notaParte2 = notaParte2;

        this.calcularMedia();
    }

    void calcularMedia(){
        media = (this.notaParte1 + this.notaParte2) / 2;
        if(media > 10){
            media = 10;
        }
    }

    public double getMedia(){
        return media;
    }

}
