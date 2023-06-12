class Cheque implements Pagavel {
    private boolean compensado;

    public Cheque() {
        this.compensado = false;
    }

    @Override
    public void pagar() {
        System.out.println("O cheque foi pago.");
        this.compensado = true;
    }

    @Override
    public boolean verificarPagamento() {
        return this.compensado;
    }
}
