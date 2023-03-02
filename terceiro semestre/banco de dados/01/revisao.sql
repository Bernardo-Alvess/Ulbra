create database revisao_db;

create table cidades(
    codcid int primary key auto_increment not null,
    nome varchar(100),
    uf char(2)
);

create table produtos (
	codprod int primary key auto_increment not null,
    descricao varchar(150),
    preco decimal(12,2),
    nomecategoria varchar(50),
    descricaocategoria varchar(100)
);

create table filiais(
	codfilial int primary key auto_increment not null,
    nome varchar(100),
    endereco varchar(100),
    codcid int,
	constraint fk_cidades_filiais
    foreign key (codcid) references cidades(codcid)
    on update cascade
    on delete restrict
);

create table empregados(
	codemp int primary key auto_increment not null,
    nome varchar(100),
    endereco varchar(100),
    ct int,
    rg char(10),
    cpf char(11),
    salario decimal(12,2),
    codcid int,
    codfilial int,
    constraint fk_cidades_empregados
    foreign key (codcid) references cidades(codcid)
    on update cascade
    on delete restrict,
    constraint fk_filiais_empregados
    foreign key (codfilial) references filiais(codfilial)
    on update cascade
    on delete restrict
);

create table vendas(
	codprod int,
    codfilial int,
    constraint fk_produtos_vendas
    foreign key (codprod) references produtos(codprod)
    on update cascade
    on delete restrict,
    constraint fk_filiais_vendas
    foreign key (codfilial) references filiais(codfilial)
    on update cascade
    on delete restrict
);

INSERT INTO cidades (nome, uf) VALUES 
    ('São Paulo', 'SP'),
    ('Rio de Janeiro', 'RJ'),
    ('Belo Horizonte', 'MG'),
    ('Salvador', 'BA'),
    ('Porto Alegre', 'RS');

INSERT INTO produtos (descricao, preco, nomecategoria, descricaocategoria) VALUES 
    ('Camisa Polo', 49.99, 'Roupas', 'Roupas Masculinas'),
    ('Calça Jeans', 79.99, 'Roupas', 'Roupas Femininas'),
    ('Tênis de Corrida', 199.99, 'Calçados', 'Tênis'),
    ('Mochila Escolar', 89.99, 'Acessórios', 'Mochilas'),
    ('Relógio de Pulso', 299.99, 'Acessórios', 'Relógios');

INSERT INTO filiais (nome, endereco, codcid) VALUES 
    ('F1', 'Rua A, 123', 1),
    ('F2', 'Rua B, 456', 2),
    ('F3', 'Rua C, 789', 3),
    ('F4', 'Rua D, 012', 4),
    ('F5', 'Rua E, 345', 5);

INSERT INTO empregados (nome, endereco, ct, rg, cpf, salario, codcid, codfilial) VALUES 
    ('João da Silva', 'Rua X, 123', 123456, '7123456789', '12345678910', 2500.00, 1, 1),
    ('Maria Santos', 'Rua Y, 456', 789012, '9987654321', '98765432198', 3500.00, 2, 2),
    ('Pedro Souza', 'Rua Z, 789', 345678, '6456789012', '45678901234', 3000.00, 3, 3),
    ('Ana Rodrigues', 'Rua W, 012', 901234, '4765432101', '76543210987', 2800.00, 4, 4),
    ('Carlos Oliveira', 'Rua V, 345', 567890, '3210987654', '21098765432', 3200.00, 5, 5),
    ('Fernanda Silva', 'Rua A, 123', 123456, '123456789', '12345678910', 2500.00, 5, 1),
    ('Lucas Oliveira', 'Rua B, 456', 789012, '1987654321', '98765432198', 3500.00, 5, 2);

INSERT INTO vendas (codprod, codfilial) VALUES 
    (1, 1),
    (2, 2),
    (3, 3),
    (4, 4),
    (5, 5);
    
/*
Criar as tabelas vende e filial. X
Listar o valor do produto mais caro. X
Obter a média dos preços dos produtos. 
Listar o nome dos produtos vendidos pela filial “f3”. (joins)
Listar os nomes e números de RG dos funcionários que moram no Rio Grande do Sul e tem salário superior a R$ 500,00. (joins)
*/
    
select descricao, max(preco) as maior_valor
from produtos;

select avg(preco) as media_precos
from produtos;

select p.descricao, f.nome
from produtos p
	inner join vendas v
		on p.codprod = v.codprod
	inner join filiais f
		on f.codfilial = v.codfilial and f.nome = 'F3';
        
select e.nome, e.salario, c.nome, c.uf
from empregados e
 inner join cidades c
  on c.codcid = e.codcid
  having e.salario > 500 and c.uf = 'RS';

-- Exercícios com a database livros

create database livros;

create table categorias(
    codcat int primary key auto_increment,
    nome varchar(255),
    descricao varchar(255)
);

create table cidades(
    codcid int primary key auto_increment,
    nome varchar(255),
    UF varchar(2)
);

create table autores(
    codautor int primary key auto_increment,
    nome varchar(255),
    codcid int,
    constraint fk_autores_ciadades
    foreign key (codcid) references cidades(codcid)
		on update cascade
        on delete restrict
);

create table livros(
    codlivro int primary key auto_increment,
    titulo varchar(255),
    codautor int,
    nfolhas int,
    editora varchar(255),
    valor decimal(10, 2),
    codcat int,
    constraint fk_livros_autores
    foreign key (codautor) references autores(codautor)
		on update cascade
		on delete restrict,
    constraint fk_livros_categorias
    foreign key (codcat) references categorias(codcat)
		on update cascade
		on delete cascade
);

create table clientes(
    codcliente int primary key auto_increment,
    nome varchar(255),
    endereco varchar(255),
    codcid int,
    constraint fk_cidades_clientes
    foreign key (codcid) references cidades(codcid)
		on update cascade
        on delete restrict
);

create table vendas(
    codlivro int,
    codcliente int,
    quantidade int,
    data date,
    constraint fk_vendas_livros
    foreign key (codlivro) references livros(codlivro)
		on update cascade
        on delete restrict,
	constraint fk_vendas_clientes
    foreign key (codcliente) references clientes(codcliente)
		on update cascade
		on delete restrict
);

INSERT INTO categorias (nome, descricao) VALUES
('Programação', 'Livros sobre programação'),
('Banco de dados', 'Livros sobre banco de dados'),
('Redes', 'Livros sobre redes');

INSERT INTO cidades (nome, UF) VALUES
('São Paulo', 'SP'),
('Rio de Janeiro', 'RJ'),
('Belo Horizonte', 'MG'),
('Porto Alegre', 'RS'),
('Curitiba', 'PR'),
('Salvador', 'BA');

INSERT INTO autores (nome, codcid) VALUES
('José Silva', 1),
('Maria Souza', 2),
('Carlos Santos', 3),
('Fernanda Costa', 4),
('Antonio Oliveira', 5),
('Ana Paula Mendes', 6);

INSERT INTO livros (titulo, codautor, nfolhas, editora, valor, codcat) VALUES
('Introdução à Programação', 1, 200, 'Editora A', 50.00, 1),
('Algoritmos e Estruturas de Dados', 2, 300, 'Editora B', 80.00, 1),
('Banco de Dados Powerfull', 3, 400, 'Editora C', 300, 2),
('Redes de Computadores', 4, 500, 'Editora D', 100.00, 3),
('Desenvolvimento Web com HTML, CSS e JS', 5, 250, 'Editora E', 60.00, 1),
('Programação Orientada a Objetos com Java', 6, 350, 'Editora F', 350, 1);

INSERT INTO clientes (nome, endereco, codcid) VALUES
('João Silva', 'Rua A, 123', 1),
('Maria Santos', 'Rua B, 456', 2),
('Pedro Souza', 'Rua C, 789', 3),
('Lucas Oliveira', 'Rua D, 123', 4),
('Juliana Costa', 'Rua E, 456', 5),
('Fernando Mendes', 'Rua F, 789', 6);

INSERT INTO vendas (codlivro, codcliente, quantidade, data) VALUES
(1, 1, 2, '2021-03-01'),
(2, 2, 1, '2022-02-05'),
(3, 3, 3, '2022-01-08'),
(4, 4, 2, '2021-03-15'),
(5, 5, 1, '2022-02-20'),
(6, 6, 1, '2021-03-28'),
(1, 2, 2, '2023-01-05'),
(2, 3, 1, '2023-01-12'),
(3, 5, 3, '2023-01-15'),
(4, 4, 2, '2023-01-20'),
(5, 1, 1, '2023-01-28');

/*
Mostrar o número total de vendas realizadas. 
Listar os títulos e valores dos livros da categoria “banco de Dados’. Mostra também o nome da categoria. 
Listar os  títulos e nome dos autores dos livros que custam mais que R$ 300,00. Listar os nomes dos clientes juntamente com o nome da cidade onde moram e UF.
Listar os nomes dos clientes juntamente com os nomes de todos os livros comprados por ele.
Listar o código do livro, o tilulo, o nome do autor, dos livros que foram vendidos no mês de março de 2021. (join)
Listar o título e o autor dos 5 livros mais vendidos do mês de janeiro.
Mostrar o nome do cliente que comprou o livro com o título ‘Banco de dados powerful’).
*/

select count(codlivro) as num_vendas
from vendas;

select l.codlivro, l.titulo, c.nome as categoria, l.valor
from livros l
	inner join categorias c
		on l.codcat = c.codcat
where c.nome = 'Banco de Dados';

select l.titulo, l.valor, a.nome as autor, c.nome as cidade, c.UF
from livros l
	inner join autores a
		on l.codautor = a.codautor
	inner join cidades c
		on a.codcid = c.codcid
where valor >= 300;

select c.nome, l.titulo
from clientes c
	inner join vendas v
		on c.codcliente = v.codcliente
	inner join livros l
		on v.codlivro = l.codlivro
order by c.nome;

select l.codlivro, l.titulo, a.nome, v.data
from livros l
	inner join vendas v
		on v.codlivro = l.codlivro
	inner join autores a
		on l.codautor = a.codautor
where DATE(v.data) LIKE '2021-03-__';

select l.titulo, a.nome, sum(v.quantidade) as unidades_vendidas
from livros l
	inner join vendas v
		on l.codlivro = v.codlivro
	inner join autores a 
		on l.codautor = a.codautor
group by l.codlivro
order by unidades_vendidas DESC
limit 5;

select l.titulo, c.nome
from vendas v
	inner join livros l
		on v.codlivro = l.codlivro
	inner join clientes c
		on v.codcliente = c.codcliente
where l.titulo = 'Banco de Dados Powerfull';