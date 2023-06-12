class Deposito implements Pagavel {
    private boolean confirmado;

    public Deposito() {
        this.confirmado = false;
    }

    @Override
    public void pagar() {
        System.out.println("O deposito foi feito.");
        this.confirmado = true;
    }

    @Override
    public boolean verificarPagamento() {
        return this.confirmado;
    }
}