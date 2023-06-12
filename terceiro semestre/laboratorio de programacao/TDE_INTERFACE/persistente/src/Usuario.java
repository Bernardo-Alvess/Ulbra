class Usuario implements Persistente {
    private String nome;

    public Usuario(String nome) {
        this.nome = nome;
    }

    @Override
    public void salvar() {
        System.out.println("Usuário '" + nome + "' foi salvo.");
    }

    @Override
    public void atualizar() {
        System.out.println("Usuário '" + nome + "' foi atualizado.");
    }

    @Override
    public void deletar() {
        System.out.println("Usuário '" + nome + "' foi deletado.");
    }

    @Override
    public void buscar() {
        System.out.println("Usuário '" + nome + "' foi encontrado.");
    }
}
