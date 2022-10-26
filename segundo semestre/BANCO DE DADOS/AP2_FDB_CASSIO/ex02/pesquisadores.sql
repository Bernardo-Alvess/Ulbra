create table pesquisadores(
    id int primary key auto_increment,
    nome varchar(50)
);

create table artigos(
    id int primary key auto_increment,
    titulo varchar(100) not null,
    pag_inicial int,
    pag_final int,
    cod_periodico varchar(14) not null,
    titulo_periodico varchar(100),
    editora varchar(30)
);

create table artigos_tem_pesquisadores(
    id_artigo int,
    id_pesquisador int,
    constraint artigos_fk_artigos_tem_pesquisadores
    foreign key(id_artigo) REFERENCES artigos(id)
        on delete cascade
        on update cascade,
    constraint pesquisadores_fk_artigos_tem_pesquisadores
    foreign key(id_pesquisador) references pesquisadores(id)
        on delete restrict
        on update cascade
);

insert into pesquisadores(nome)
    VALUES
        ('Bernardo Alves'),
        ('Lorenzo'),
        ('Vitor Bernardino'),
        ('Maikel Peixouto'),
        ('João Mingibaba'),
        ('João Vitor'),
        ('Mateus João');

insert into artigos(id, titulo, pag_inicial, pag_final, cod_periodico, titulo_periodico, editora)
    values
        (1234, 'Chamber Nerfado', 1, 2, 'ABCDE123456789', 'Chamber foi nerfado e toma surra', 'Saraiva'),
        (1, 'Dia do gaucho', 1, 10, 'ABCDEFG3456789', 'História da revolução farroupilha', 'Saraiva'),
        (2, 'Armas com cadastro vencido', 1, 20, 'ABCDEDFG456789', 'Nos primeiros 6 meses do ano, mais de 117 mil novas armas foram registradas', 'darkside'),
        (3, 'Eleições dia 30', 13, 22, 'ABCDESF123456', 'VAI MATAR OU VAI MORRER, EU QUERO VER, SANGUEEEE!', 'BDA');
        

insert into artigos_tem_pesquisadores(id_pesquisador, id_artigo)
    VALUES
        (1, 1234),
        (1, 2),
        (2, 1),
        (3, 3),
        (4, 1234),
        (5, 1),
        (6, 3);
        
-- listar o artigo com código 1234
select id, titulo from artigos where id = 1234;

-- listar os artigos da editora Saraiva.
select titulo, editora from artigos where editora like '%saraiva%';

-- Listar os pesquisadores onde o nome inicia com João.
Select nome from pesquisadores where nome like 'joão%';