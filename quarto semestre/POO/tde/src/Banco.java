import java.util.ArrayList;

public class Banco {
    private ArrayList<Conta> contas = new ArrayList<Conta>();
    private String nomeBanco;

    public Banco(String nomeBanco){
        this.nomeBanco = nomeBanco;
    }
    public String getNomeBanco() {
        return nomeBanco;
    }

    public void setNomeBanco(String nomeBanco) {
        this.nomeBanco = nomeBanco;
    }

    public ArrayList<Conta> getContas() {
        return contas;
    }

    public void abrirConta(String nome, String numeroConta, double saldo){
        Conta conta = new Conta(nome);
        contas.add(conta);
    }

    public String removerConta(String nome){
        for (Conta conta:
             contas) {
            if(conta.getNome().equals(nome)){
                contas.remove(conta);
                return conta.toString();
            }
        }

        return "Conta não encontrada";
    }

    public String removerConta(int numConta){
        for (Conta conta:
                contas) {
            if(conta.getNumConta() == numConta){
                contas.remove(conta);
                return conta.toString();
            }
        }
        return "Conta não encontrada";

    }

    public void lerContas(){
        System.out.println(contas);
    }

    public String atualizarConta(String nome, int numConta, double saldo){
        for (Conta conta:
                contas) {
            if(conta.getNumConta() == numConta){
                conta.setNome(nome);
                conta.setSaldo(saldo);
                return conta.toString();
            }
        }
    }

}
