import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<String> jogos = criarLista();

        adicionarNaLista(jogos, "God of War");
        adicionarNaLista(jogos, "Valorant");
        adicionarNaLista(jogos, "The Last of Us");
        adicionarNaLista(jogos, "Red Dead Redemption");

        lerLista(jogos);

        atualizarLista(jogos, 0, "God of War: Ragnarok");
        removerDaLista(jogos, 1);

        lerLista(jogos);
    }
    public static <T> ArrayList<T> criarLista(){
        return new ArrayList<T>();
    }

    public static void lerLista(ArrayList lista){
        System.out.println(lista);
    }

    public static  <T> void adicionarNaLista(ArrayList lista, T valor){
        lista.add(valor);
        System.out.println(lista);
    }
    public static <T> void atualizarLista(ArrayList lista, int index, T valor){
        lista.set(index, valor);
    }

    public static void removerDaLista(ArrayList lista, int index){
        lista.remove(index);
    }
}