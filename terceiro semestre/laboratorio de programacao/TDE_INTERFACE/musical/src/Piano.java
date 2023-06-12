class Piano implements Musical {
    @Override
    public void tocar() {
        System.out.println("O piano está sendo tocado.");
    }

    @Override
    public void parar() {
        System.out.println("O piano parou de ser tocado.");
    }

    @Override
    public void pausar() {
        System.out.println("O piano foi pausado.");
    }
}