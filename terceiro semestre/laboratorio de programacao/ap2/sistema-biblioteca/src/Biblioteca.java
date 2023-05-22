class Biblioteca {
    private Livro livro1;
    private Livro livro2;
    private Livro livro3;
    private Livro livro4;
    private Livro livro5;

    public void adicionarLivro(Livro livro) {
        if (livro1 == null) {
            livro1 = livro;
        } else if (livro2 == null) {
            livro2 = livro;
        } else if (livro3 == null) {
            livro3 = livro;
        } else if (livro4 == null) {
            livro4 = livro;
        } else if (livro5 == null) {
            livro5 = livro;
        } else {
            System.out.printf("Biblioteca cheia! \nSubstituindo livro '%s' por livro '%s'\n", livro5.getTitulo(), livro.getTitulo());
            livro5 = livro;
        }
    }

    public void removerLivro(int numeroLivro) {
        switch (numeroLivro) {
            case 1:
                livro1 = null;
                break;
            case 2:
                livro2 = null;
                break;
            case 3:
                livro3 = null;
                break;
            case 4:
                livro4 = null;
                break;
            case 5:
                livro5 = null;
                break;
            default:
                System.out.println("Número de livro inválido.");
        }
    }

    public void atualizarDetalhesLivro(int numeroLivro, String titulo, String autor, int anoPublicacao, boolean disponibilidade) {
        Livro livro = encontrarLivro(numeroLivro);
        if (livro != null) {
            livro.setTitulo(titulo);
            livro.setAutor(autor);
            livro.setAnoPublicacao(anoPublicacao);
            livro.setDisponibilidade(disponibilidade);
        }
    }

    public boolean verificarDisponibilidadeLivro(int numeroLivro) {
        Livro livro = encontrarLivro(numeroLivro);
        return livro != null && livro.isDisponivel();
    }

    private Livro encontrarLivro(int numeroLivro) {
        Livro livro = null;
        switch (numeroLivro) {
            case 1:
                livro = livro1;
                break;
            case 2:
                livro = livro2;
                break;
            case 3:
                livro = livro3;
                break;
            case 4:
                livro = livro4;
                break;
            case 5:
                livro = livro5;
                break;
            default:
                System.out.println("Número de livro inválido.");
        }
        return livro;
    }
}
