-- Padrão de nomeação do SQL é o snake_case

clientes(id int primary key, noem char(100));
enderecos(id, logradouro, numero, bairro, cidade, estado, id_cliente FK);


-- CREATE TABLE
/*
CREATE TABLE nome_da_tabela(
    -- atributo | domínio | restição de null | chave
)
*/


CREATE TABLE clientes
(
    id int not null primary key,
    nome varchar(100) not null,
    CPF varchar(14) unique,
    limite_credito float default 0
);

CREATE TABLE enderecos
(
    id int not null primary key,
    logradouro varchar(100) not null,
    numero int default 0
    bairro varchar(100),
    cidade varchar(100),
    estado char(2)
    id_cliente int not null
    constraint clientes_tem_enderecos
    foreign key(id_cliente) references clientes(id)
);
