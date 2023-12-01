@Entity
public class Pessoa {

    @Id
    private Long id;

    @OneToOne
    @JoinColumn(name = "endereco_id")
    private Endereco endereco;
}

@Entity
public class Pedido {

    @Id
    private Long id;

    @ManyToOne
    @JoinColumn(name = "cliente_id")
    private Cliente cliente;
}

@Entity
public class Produto {

    @Id
    private Long id;

    @ManyToMany
    @JoinTable(
        name = "produtos_categorias",
        joinColumns = @JoinColumn(name = "produto_id"),
        inverseJoinColumns = @JoinColumn(name = "categoria_id")
    )
    private List<Categoria> categorias;
}

@Entity
public class Pessoa {

    @Id
    private Long id;

    @OneToMany(mappedBy = "pessoa")
    private List<Telefone> telefones;

}
