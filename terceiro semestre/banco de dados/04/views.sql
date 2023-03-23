create database views;

CREATE TABLE produtos (
    id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(255) NOT NULL,
    valor DECIMAL(10,2) NOT NULL,
    saldo INT NOT NULL
);

CREATE TABLE orcamentos (
    id INT PRIMARY KEY AUTO_INCREMENT,
    data DATE NOT NULL,
    status VARCHAR(50) NOT NULL
);

CREATE TABLE orcamentos_itens (
    id_prod INT NOT NULL,
    id_orc INT NOT NULL,
    valor_unit DECIMAL(10,2) NOT NULL,
    quantidade INT NOT NULL,
    valor_total_item DECIMAL(10,2) NOT NULL,
    PRIMARY KEY (id_prod, id_orc),
    FOREIGN KEY (id_prod) REFERENCES produtos(id),
    FOREIGN KEY (id_orc) REFERENCES orcamentos(id)
);

INSERT INTO produtos (id, nome, valor, saldo) VALUES
	(1, 'Computador Gamer', 5000.00, 10),
	(2, 'Computador Office', 2500.00, 20),
	(3, 'Monitor 4K', 1500.00, 15),
	(4, 'Notebook Dell', 3500.00, 12),
	(5, 'Impressora Multifuncional', 800.00, 8),
	(6, 'Teclado Mecânico', 400.00, 25),
	(7, 'Mouse Sem Fio', 200.00, 30),
	(8, 'HD Externo 1TB', 500.00, 20);

insert into produtos(id, nome, valor, saldo) values
	(9, 'Mouse Logitech g403', 250.00, 3),
    (10, 'Mouse Logitech gPro', 800.00, 5);
    
INSERT INTO orcamentos (id, data, status) VALUES
	(1, '2023-03-18', 'vendido'),
	(2, '2023-03-18', 'em orçamento'),
	(3, '2023-03-17', 'cancelado'),
	(4, '2023-03-16', 'vendido'),
	(5, '2023-03-15', 'vendido'),
	(6, '2023-03-15', 'vendido'),
	(7, '2023-03-14', 'em orçamento'),
	(8, '2023-03-13', 'vendido'),
	(9, '2023-03-12', 'vendido'),
	(10, '2023-03-11', 'vendido'),
	(11, '2014-09-01', 'em orçamento'),
	(12, '2014-09-02', 'em orçamento'),
	(13, '2014-09-03', 'em orçamento'),
	(14, '2014-09-04', 'em orçamento'),
	(15, '2014-09-05', 'em orçamento'),
	(16, '2014-09-06', 'em orçamento'),
	(17, '2014-09-07', 'em orçamento'),
	(18, '2014-09-08', 'em orçamento'),
	(19, '2014-09-09', 'em orçamento'),
	(20, '2014-09-10', 'em orçamento'),
	(21, '2014-09-11', 'em orçamento'),
	(22, '2014-09-12', 'em orçamento'),
	(23, '2014-09-13', 'em orçamento'),
	(24, '2014-09-14', 'em orçamento'),
	(25, '2014-09-15', 'em orçamento'),
	(26, '2014-09-16', 'em orçamento'),
	(27, '2014-09-17', 'em orçamento'),
	(28, '2014-09-18', 'em orçamento'),
	(29, '2014-09-19', 'em orçamento'),
	(30, '2014-09-20', 'em orçamento');
    
INSERT INTO orcamentos_itens (id_prod, id_orc, valor_unit, quantidade, valor_total_item) VALUES
	(1, 1, 5000.00, 1, 5000.00),
	(3, 1, 1500.00, 2, 3000.00),
	(2, 2, 2500.00, 1, 2500.00),
	(4, 2, 3500.00, 1, 3500.00),
	(6, 2, 400.00, 3, 1200.00),
	(7, 3, 200.00, 5, 1000.00),
	(4, 4, 3500.00, 2, 7000.00),
	(1, 5, 5000.00, 2, 10000.00),
	(8, 6, 500.00, 3, 1500.00),
	(3, 6, 1500.00, 1, 1500.00),
	(5, 7, 800.00, 1, 800.00),
	(6, 8, 400.00, 2, 800.00),
	(1, 9, 5000.00, 1, 5000.00),
	(2, 9, 2500.00, 1, 2500.00),
	(3, 10, 1500.00, 3, 4500.00),
    (5, 16, 800.00, 1, 800.00),
	(8, 16, 500.00, 2, 1000.00),
	(2, 17, 2500.00, 1, 2500.00),
	(4, 17, 3500.00, 1, 3500.00),
	(1, 18, 5000.00, 1, 5000.00),
	(3, 18, 1500.00, 2, 3000.00),
	(4, 18, 3500.00, 1, 3500.00),
	(6, 19, 400.00, 1, 400.00),
	(7, 19, 200.00, 2, 400.00),
	(2, 20, 2500.00, 2, 5000.00),
	(5, 20, 800.00, 3, 2400.00),
	(6, 20, 400.00, 2, 800.00),
	(7, 20, 200.00, 5, 1000.00),
	(8, 20, 500.00, 1, 500.00);

-- Lista de orçamentos por produto
create view lista_orcamentos_produtos as
select p.nome, o.data, o.status, oi.valor_unit, oi.quantidade, oi.valor_total_item
from produtos p
	inner join orcamentos_itens oi
		on p.id = oi.id_prod
	inner join orcamentos o
		on o.id = oi.id_orc;

select * from lista_orcamentos_produtos;

-- valor total de produtos orçados por periodo
create view orcamentos_data as
select  p.nome, sum(oi.valor_total_item) as valor_total_orcamentos
from produtos p
	inner join orcamentos_itens oi
		on oi.id_prod = p.id
	inner join orcamentos o
		on oi.id_orc = o.id
where o.data >= '2023-03-01' and o.data <= '2023-03-31'
group by p.id;

select * from orcamentos_data;

-- produtos que tem "Computador" no nome e que tem quantidade em estoque
create view computador_em_estoque as
select p.nome, p.saldo as quantidade, p.valor
from produtos p
where p.nome like 'computador%';

select * from computador_em_estoque;

-- Os 10 produtos mais orçados no mês de setembro de 2014 e quea ainda tem saldo em estoque. Somente os produtos com o valor acima de R$500
create view orcamentos_setembro as
select p.nome as produto, COUNT(o.id) as qtd_orcamentos, p.valor as valor_produto
from produtos p
	inner join orcamentos_itens oi
		on p.id = oi.id_prod
	inner join orcamentos o
		on o.id = oi.id_orc
where p.valor > 500
group by p.id
order by qtd_orcamentos DESC
limit 10;

select * from orcamentos_setembro;

-- Faça uma consulta utilizando a view para acrescentar 20% nos produtos que o saldo em estoque é menor ou igual a 5.

create view valor_mais_20_porcento as
select id, nome, valor, (valor * 1.2) as valor_mais_20
from produtos
where saldo >= 5;

select * from valor_mais_20_porcento;

-- Delete todos os produtos que não foram orçados
delete from produtos
where id not in(select distinct id_prod from orcamentos_itens);

/*
Explique quando usar o GROUP BY, de um exemplo sql
A cláusula GROUP BY é utilizada para agrupar uma query em uma coluna ou mais
Ex: Lista de produtos que estão em orçamentos abertaos
*/

select p.nome, count(o.id) as orcamentos_cancelados
from produtos p
	join orcamentos_itens oi
		on p.id = oi.id_prod
	join orcamentos o
		on o.id = oi.id_orc
where o.status = 'em orçamento'
group by p.id;

/*
Explique quando utilizar o HAVING, de um exemplo sql.

O Having é utilizado quando precisamos filtrar um resultado por alguma função de agregação
Ex: Utilizando a query anterior, mostre somente os produtos que tiveram 3 ou mais orçamentos cancelados
*/

select p.nome, count(o.id) as orcamentos_cancelados
from produtos p
	join orcamentos_itens oi
		on p.id = oi.id_prod
	join orcamentos o
		on o.id = oi.id_orc
where o.status = 'em orçamento'
group by p.id
having orcamentos_cancelados >= 3;

/*
O UNION é utilizado para combinar o resultado de dois selects
Digamos que temos as tabelas
cidade(id, id_dept, nome, cidade, salario)
gerentes(id, id_dept, nome, cidade, salario)

Ex: cidades de todos os funcionários da empresa
*/

select cidade from empregados
union
select cidade from gerentes;

/*
Explique quando utilizar o LEFT JOIN, de um exemplo sql.
O left join é utilizado quando queremos unir duas tabelas,
trazendo todos os dados da tabela da esquerda, mesmo que não se encaixe no filtro do ON do LEFT JOIN

Ex: Exibir todos os produtos, com o preço medio dos orçamentos
*/


select p.nome, FORMAT(AVG(oi.valor_total_item), 2) as media_preco, p.saldo
from produtos p
	left join orcamentos_itens oi
		on oi.id_prod = p.id
	left join orcamentos o 
		on o.id = oi.id_orc
group by p.id;
