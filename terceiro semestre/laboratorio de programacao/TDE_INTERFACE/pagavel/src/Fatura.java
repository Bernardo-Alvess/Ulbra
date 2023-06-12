class Fatura implements Pagavel {
    private boolean pago;

    public Fatura() {
        this.pago = false;
    }

    @Override
    public void pagar() {
        System.out.println("A fatura foi paga.");
        this.pago = true;
    }

    @Override
    public boolean verificarPagamento() {
        return this.pago;
    }
}
