--1
select c.nome as cliente, COUNT(p.id) as qtd_pedidos, SUM(pp.valor * pp.quantidade) as valor_total
from clientes c
    join pedidos p
        on c.id = p.id_cliente
    join pedidos_prod pp
        on p.id = pp.id_pedido
group by c.nome
having qtd_pedidos > 3;

--2
select p.nome as produto, avg(v.valor) as avg_valor, SUM(v.qtd) as unidades_vendidas
from produtos p
    left join vendas v
        on p.id = v.id_prod
group by p.categoria;

--3
select f.nome as fornecedor, p.nome as produto, COUNT(c.id) as unidades_compradas
from fornecedores f
    join compras c
        on c.id_fornecedor = f.id
    join produtos p
        on p.id = c.id_produto
group by f.nome, p.nome
having unidades_compradas > 100;

--4
select d.nome, f.nome, AVG(f.salario) as media_salario
from funcionarios f
    left join departamentos d
        on f.id_departamento = d.id
group by d.nome, f.nome
having media_salario > 5000;

--5
select c.nome, p.nome, SUM(cp.valor * cp.qtd) as valor_total
from clientes c
    right join compras cp
        on c.id = cp.id_cliente
    join produtos p
        on p.id = cp.id_produto
group by c.nome, p.nome;