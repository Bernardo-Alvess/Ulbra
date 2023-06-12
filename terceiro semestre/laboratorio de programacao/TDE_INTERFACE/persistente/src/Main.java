public class Main {
    public static void main(String[] args) {
        Usuario usuario = new Usuario("João");
        usuario.salvar();
        usuario.atualizar();
        usuario.deletar();
        usuario.buscar();
    }
}