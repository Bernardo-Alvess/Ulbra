create database catalogo_filmes;

create table generos(
    id int PRIMARY key auto_increment,
    nome varchar(50)    
);

create table diretores(
    id int primary key auto_increment,
    nome varchar(50) not null,
    nacionalidade varchar(30),
    nascimento date
);

create table produtoras(
    id int PRIMARY KEY auto_increment,
    nome varchar(60)
);

create table filmes(
    id int primary key auto_increment,
    titulo varchar(60) not null,
    IMDB decimal(2,1),
    lancamento date,
    id_diretor int,
    id_produtora int,
    constraint filmes_fk_diretores
    FOREIGN KEY(id_diretor) references diretores(id)
        on update CASCADE
        on delete RESTRICT,
    constraint filmes_fk_produtoras 
    foreign key(id_produtora) references produtoras(id)
        on update cascade
        on delete restrict
);

create table filmes_generos(
    id_filme int,
    id_genero int,
    constraint filmes_generos_fk_generos
    foreign key(id_genero) references generos(id)
        on update CASCADE
        on delete RESTRICT,
    constraint filmes_generos_fk_filmes
    FOREIGN KEY(id_filme) references filmes(id)
        on update cascade
        on delete restrict
);

insert into generos(id, nome)
    values
        (1, 'Terror'),
        (2, 'Drama'),
        (3, 'Comédia'),
        (4, 'Aventura'),
        (5, 'Açâo');

insert into diretores(id, nome, nacionalidade, nascimento)
    VALUES
        (1, 'Jordan Pilha', 'Brasileiro', '1979-02-21'),
        (2, 'Joseph Big Coffin', 'Americano', '1936-03-19'),
        (3, 'Quentinho Tarântula', 'Brasileiro', '1963-03-27'),
        (4, 'Martinho Escocês', 'Brasileiro', '1942-11-17'),
        (5, 'Estevan Correberg', 'Brasileiro', '1946-12-11'),
        (6, 'Joseph Paddle', 'Americano', '1967-08-01');

insert into produtoras(id, nome)
    values
        (1, 'Columbia Pictures'),
        (2, 'Universal Studios'),
        (3, 'Paramount Pictures'),
        (4, 'Zazen Produções'),
        (5, 'Monkeypaw Productions'),
        (6, 'The Weinstein Company') ;

insert into filmes(id, titulo, IMDB, lancamento, id_diretor, id_produtora)    
    VALUES  
        (1, 'Taxista Motorista', 8.2, '1974-03-24', 4, 1),
        (2, 'Rango Livre', 8.4, '2012-12-11', 3, 6),
        (3, 'A meia noite lavarei sua mala', 6.9, '1964-11-09', 2, null),
        (4, 'Pare!', 7.7, '2017-05-17', 1, 2),
        (5, 'João Indiano: O Reino da Cuia de Cristal', 6.2, '2008-05-21', 5, 3),
        (6, 'Tropa de Leite', 8.0, '2007-10-05', 6, 4),
        (7, 'Sim! Sim olhe!', 6.9, '2022-08-25', 1, 5),
        (8, 'Mostardas Gloriosas', 8.3, '2009-10-09', 3, 2);


insert into filmes_generos(id_filme, id_genero)    
    VALUES  
        (1, 5),
        (2, 2), (2, 5),
        (3, 1),
        (4, 1), (4, 2),
        (5, 4),
        (6, 5), (6, 2),
        (7, 1),
        (8, 5), (8, 2);

-- Todos os filmes de Terror
select f.titulo
from filmes f
    inner join filmes_generos fg
        on f.id = fg.id_filme
    inner join generos g
        on g.id = fg.id_genero
where g.nome = 'Terror';

-- Diretores Brasileiros
select nome
from diretores
where nacionalidade = 'Brasileiro';

-- Gêneros sem filme
select g.nome
from generos g 
    left join filmes_generos fg
        on g.id = fg.id_genero
where fg.id_genero is null;

select g.nome
from generos g
where not exists(
    select * from filmes_generos fg
    where g.id = fg.id_genero
);

-- Nota máxima dos filmes de diretores com mais de um filme
select f.id_diretor,  d.nome, max(f.IMDB) as nota_max, f.titulo, count(id_diretor) as quantidade_filmes
from filmes f
    inner join diretores d
        on d.id = f.id_diretor
group by id_diretor
having quantidade_filmes >= 2;

-- Filmes após os anos 2000 com nota acima de 8
select f.titulo
FROM filmes f
where 
    f.lancamento >= '2000-01-01' and
    f.IMDB >= 8;

-- Filmes de diretores nascidos entre 1940 e 1950
select f.titulo
from filmes f 
    inner join diretores d
        on d.id = f.id_diretor
where d.nascimento >= '1940-01-01' and 
d.nascimento < '1950-01-01';

-- Filmes que tem mais de um genero
select f.titulo, count(fg.id_genero) as quantidade_generos
from filmes_generos fg
    inner join filmes f
        on fg.id_filme = f.id
    inner join generos g
        on fg.id_genero = g.id
group by fg.id_filme
having quantidade_generos >= 2;

-- Nota média dos diretores
select nota / quantidade_filmes, diretor from (
    select f.id, sum(f.IMDB) as nota, count(f.id) as quantidade_filmes, d.nome as diretor
    from filmes f
        inner join diretores d 
            on f.id_diretor = d.id
    group by f.id_diretor
) as minhaTabela;
        