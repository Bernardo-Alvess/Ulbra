import java.util.ArrayList;

public class CarrinhoDeCompras {
    private double valorTotal = 0;
    ArrayList<Produto> produtos = new ArrayList<Produto>();

    public void adicionarAoCarrinho(Produto produto){
        produtos.add(produto);
        valorTotal += produto.getValor();
    }

    public double getTotal(){
        double total = 0;
        for(Produto produto : produtos){
            total += produto.getValor();
        }
        valorTotal = total;
        return total;
    }
}
