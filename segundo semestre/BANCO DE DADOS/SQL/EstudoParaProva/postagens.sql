create table postagens (
    id int primary key auto_increment,
    titulo varchar(300) not null,
    data datetime
);

create table mensagens(
    id int primary key
    descricao text,
    id_postagem int not null,
    constraint postagens_fk_mensagens
    foreign key(id_postagem) references postagens(id)
        on delete CASCADE
        on update RESTRICT
)
