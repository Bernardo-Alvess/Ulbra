public class Main {
    public static void main(String[] args) {
        Biblioteca biblioteca = new Biblioteca();

        Livro livro1 = new Livro("Clean Code", "Robert Cecil Martin", 2008, true);
        Livro livro2 = new Livro("JavaScript: The Good Parts", "Douglas Crockford", 2008, true);
        Livro livro3 = new Livro("Abominação", "Gary Whitta", 2017, true);
        Livro livro4 = new Livro("Fragmentos do Horror", "Junji Ito", 2017, true);
        Livro livro5 = new Livro("Percy Jackson: O Ladrão de Raios", "Rick Ryordan", 2005, false);
        Livro livro6 = new Livro("Percy Jackson: O Mar de Monstros", "Rick Ryordan", 2006, false);

        biblioteca.adicionarLivro(livro1);
        biblioteca.adicionarLivro(livro2);
        biblioteca.adicionarLivro(livro3);
        biblioteca.adicionarLivro(livro4);
        biblioteca.adicionarLivro(livro5);
        biblioteca.adicionarLivro(livro6);

        System.out.println("Detalhes do livro 1:");
        System.out.println(livro1.detalhesDoProduto());

        System.out.println("Detalhes do livro 2:");
        System.out.println(livro2.detalhesDoProduto());

        System.out.println("Detalhes do livro 3:");
        System.out.println(livro3.detalhesDoProduto());

        System.out.println("Detalhes do livro 4:");
        System.out.println(livro4.detalhesDoProduto());

        System.out.println("Detalhes do livro 5:");
        System.out.println(livro5.detalhesDoProduto());

        System.out.println("Detalhes do livro 6:");
        System.out.println(livro6.detalhesDoProduto());

        biblioteca.atualizarDetalhesLivro(2, "Novo Título", "Novo Autor", 2015, false);

        System.out.println("Detalhes atualizados do livro 2:");
        System.out.println(livro2.detalhesDoProduto());

        biblioteca.removerLivro(1);

        System.out.println("Disponibilidade do livro 1: " + (biblioteca.verificarDisponibilidadeLivro(1) ? "Disponível" : "Indisponivel"));
    }
}