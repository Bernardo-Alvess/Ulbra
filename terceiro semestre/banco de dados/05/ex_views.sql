create database views_livraria;

CREATE TABLE clientes (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(50)
);

CREATE TABLE livros (
    id INT AUTO_INCREMENT PRIMARY KEY,
    titulo VARCHAR(100),
    valor_unit DECIMAL(10,2)
);

CREATE TABLE autores (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(50)
);

CREATE TABLE autores_livros (
    id_autor INT,
    id_livro INT,
    PRIMARY KEY (id_autor, id_livro),
    FOREIGN KEY (id_autor) REFERENCES autores(id),
    FOREIGN KEY (id_livro) REFERENCES livros(id)
);

CREATE TABLE vendas (
    id INT AUTO_INCREMENT PRIMARY KEY,
    data DATE,
    id_cliente INT,
    FOREIGN KEY (id_cliente) REFERENCES clientes(id)
);

CREATE TABLE vendas_livros (
    id_venda INT,
    id_livro INT,
    qtd INT,
    valor_unit DECIMAL(10,2),
    FOREIGN KEY (id_livro) REFERENCES livros(id),
    foreign key (id_venda) references vendas(id)
);


-- Inserção de alguns clientes
INSERT INTO clientes (nome) VALUES
    ('João da Silva'),
    ('Maria dos Santos'),
    ('Lucas Souza'),
    ('Gabriela Oliveira'),
    ('Pedro Alves');

-- Inserção de alguns livros
INSERT INTO livros (titulo, valor_unit) VALUES
    ('Dom Casmurro', 29.90),
    ('Memórias Póstumas de Brás Cubas', 35.50),
    ('Grande Sertão: Veredas', 42.90),
    ('O Alienista', 26.00),
    ('O Cortiço', 21.90),
    ('Saboroso Cadáver', 40.00);

-- Inserção de alguns autores
INSERT INTO autores (nome) VALUES
    ('Machado de Assis'),
    ('Guimarães Rosa'),
    ('Aluísio Azevedo'),
    ('Clarice Lispector'),
    ('Jorge Amado'),
    ('Agustina Bazterrica');

-- Inserção de alguns relacionamentos entre autores e livros
INSERT INTO autores_livros (id_autor, id_livro) VALUES
    (1, 1),
    (1, 4),
    (1, 2),
    (2, 3),
    (3, 5),
    (6, 6);

-- Inserção de algumas vendas
INSERT INTO vendas (data, id_cliente) VALUES
    ('2022-01-10', 1),
    ('2022-02-15', 2),
    ('2022-03-20', 3),
    ('2022-04-25', 4),
    ('2022-05-30', 5);

-- Inserção de alguns itens vendidos
INSERT INTO vendas_livros (id_venda, id_livro, qtd, valor_unit) VALUES
	(1, 1, 2, 29.90),
    (1, 2, 1, 35.50),
    (1, 3, 3, 42.90),
    (2, 4, 5, 26.00),
    (2, 5, 2, 21.90),
    (3, 1, 1, 29.90),
    (3, 3, 2, 42.90),
    (3, 5, 3, 21.90),
    (4, 2, 2, 35.50),
    (5, 4, 1, 26.00);

-- 1)
create view livros_mais_vendidos as
select l.titulo, a.nome as autor, l.valor_unit as preco, SUM(vl.qtd) as qtd_vendas
from livros l
    left join vendas_livros vl
        on l.id = vl.id_livro
    inner join autores_livros al
        on l.id = al.id_livro
    inner join autores a
        on a.id = al.id_autor
group by vl.id_livro;

select * from livros_mais_vendidos order by qtd_vendas DESC;

-- 2)
create view autores_sem_venda as
select a.nome as autor
from autores a
	left join autores_livros al
		on al.id_autor = a.id
	inner join livros l
		on l.id = al.id_livro
where l.id not in (
	select id_livro
	from vendas_livros vl
	where l.id = vl.id_livro
);

select * from autores_sem_venda;

-- 3)
create view livros_sem_vendas as 
select l.titulo
from livros l
	left join vendas_livros vl
		on l.id = vl.id_livro
where vl.id_livro is null
group by l.id;

select * from livros_sem_vendas;
ñ