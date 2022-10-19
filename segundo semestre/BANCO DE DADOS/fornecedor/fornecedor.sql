create table fornecedores(
    id int auto_increment primary key,
    nome varchar(50) not null
);

create table categorias(
    id int auto_increment primary key,
    nome varchar(50) not null
);

create table produtos(
    id int auto_increment primary key,
    descricao varchar(75),
    data_cadastro datetime not null,
    valor_unitario float not null,
    fk_id_categoria int,
    constraint categorias_fk_produtos
        foreign key(fk_id_categoria) references categorias(id)
  		on delete set null
        on update cascade
);

create table pede(
    quantidade int primary key,
    valor_unitario float not null, 
    date datetime not null,
    fk_id_produtos int,
    fk_id_fornecedor int,
    constraint fornecedor_fk_pede
        foreign key(fk_id_fornecedor) references fornecedores(id)
        on delete restrict
        on update cascade,
    constraint produtos_fk_pede
        foreign key(fk_id_produtos) references produtos(id)
        on delete RESTRICT
        on update cascade
);

-- 3) Faça um comando (FUC) para adicionar o campo data_ultima_compra na tabela fornecedor.
alter table fornecedores add column data_ultima_hora timestamp;

-- 4) FUC para alterar o nome do atributo data em PEDE para data_pedido.
alter table pede change column date data_pedido datetime;

-- 5) FUC para deletar o campo data_cadastro em produtos
alter table produtos drop data_cadastro;

-- 6) FUC para adicionar na relação categoria e produto para o delete ser em cascata e o update ser restrict.
alter table produtos drop constraint categorias_fk_produtos;

alter table produtos
add constraint categorias_fk_produtos
    foreign key(fk_id_categoria) references categorias(id)
    on delete cascade
    on update restrict;

-- 7) FUC para aumentar o tamanho do domínio do campo nome do fornecedor para mais 30 caracteres.
 alter table fornecedores MODIFY COLUMN nome varchar(80);

-- 8) FUC para apagar a tabela fornecedor. Explique o que vai acontecer com o seu esquema e as consequências disso.
-- drop table fornecedores;
-- O SGBD vai verificar se existe algum pedido com o fornecedor, caso tenha, não vai ser permitido a remoção do fornecedor

-- 9) FUC para adicionar o número do pedido em PEDE. Este número deve aceitar caracteres.
alter table pede modify column quantidade varchar(100);

-- 10) Popule as tabelas utilizando comandos insert.
insert into fornecedores(id, nome, data_ultima_hora)
    values(1, 'Bernardo Alves', '2022-10-17 20:17:40');

insert into categorias(id, nome)
    values(10, 'Achocolatados');

insert into produtos(id, descricao, valor_unitario, fk_id_categoria)
    values
        (100, 'Toddy', '6.39', 10),
    	(101, 'Nescau', '8.00', 10),
        (102, 'Chocotino', '5.00', 10);
;

insert into pede(quantidade, valor_unitario, data_pedido, fk_id_produtos, fk_id_fornecedor)
    values(3, '6.39', '2022-10-17', 100, 1);
  
delete from produtos where id = 101;

-- 12) Atualize a chave primária de um produto, ilustre o comando e explique a restrição de integridade.
UPDATE produtos
set id = 102
where id = 100;
/*
    O SGBD verifica se o valor que será atualizado não está sendo usado em outra linha da tabela produtos,
    se estiver sendo usado, o novo ID não será atribuido, caso contrário ele será atribuido ao produto
*/
