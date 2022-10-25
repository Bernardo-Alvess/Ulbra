create table clientes(
    id int primary key auto_increment,
    nome varchar(100) not null,
    cpf int(11) not null,
    telefone varchar(13) not null,
    endereco varchar(175)
);

create table carros(
    id int primary key auto_increment,
    placa_carro char(7) not null,
    modelo varchar(50) not null,
    cod_marca int not null,
    ano int not null,
    valor decimal(12,2) not null
);

create table alugueis(
    id int primary key auto_increment,
    registro_aluguel int not null,
    data_devolucao datetime not null,
    data_aluguel datetime not null,
    valor_total decimal(12,2),
    id_cliente int,
    constraint clientes_fk_alugueis
    foreign key(id_cliente) references clientes(id)
        on delete RESTRICT
        on update CASCADE
);

create table aluguel_carros(
    id_aluguel int,
    id_carro int,
    constraint alugueis_fk_aluguel_carros
    foreign key(id_aluguel) references alugueis(id)
        on delete CASCADE
        on update CASCADE,
    constraint carros_fk_aluguel_carros
    foreign key(id_carro) references carros(id)
        on delete RESTRICT
        on update RESTRICT
);

-- Quais clientes que tem silva no nome

INSERT INTO clientes(nome, cpf, telefone, endereco)
	VALUES
    	('Bernardo Alves', '1234567891', '5551997853569', 'Capão da Canoa'),
        ('Francisco da Silva', '354041240', '55519996980', 'Peixaria Peixouto'),
        ('Lorenzo da Silva Silvão', '123456780', '555199995635', 'Arroio do Sal');
        
select nome from clientes 
	where nome like '%silva%'
    or nome like '%Silva%';