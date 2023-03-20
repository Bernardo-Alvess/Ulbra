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
	(10, '2023-03-11', 'vendido');

INSERT INTO orcamentos_itens (id_prod, id_orc, valor_unit, quantidade, valor_total_it) VALUES
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
	(3, 10, 1500.00, 3, 4500.00);
    
CREATE VIEW view_orcamentos AS
SELECT p.nome AS produto,
       o.quantidade AS quantidade_orcada,
       o.quantidade * p.preco AS valor_orcado,
       o.data AS data_orcamento
FROM produtos p
INNER JOIN orcamentos o ON p.id_produto = o.id_produto
WHERE p.nome LIKE '%Computador%'
  AND p.quantidade_estoque > 0

UNION

SELECT 'Total' AS produto,
       SUM(o.quantidade) AS quantidade_orcada,
       SUM(o.quantidade * p.preco) AS valor_orcado,
       o.data AS data_orcamento
FROM produtos p
INNER JOIN orcamentos o ON p.id_produto = o.id_produto
WHERE o.data >= '2022-03-01' AND o.data < '2022-04-01'

UNION

SELECT p.nome AS produto,
       SUM(o.quantidade) AS quantidade_orcada,
       SUM(o.quantidade * p.preco) AS valor_orcado,
       o.data AS data_orcamento
FROM produtos p
INNER JOIN orcamentos o ON p.id_produto = o.id_produto
WHERE o.data >= '2014-09-01' AND o.data < '2014-10-01'
  AND p.quantidade_estoque > 0
GROUP BY p.nome
HAVING SUM(o.quantidade * p.preco) > 500
ORDER BY SUM(o.quantidade) DESC
LIMIT 10;
