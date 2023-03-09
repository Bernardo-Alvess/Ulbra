create database db;

create table proprietarios(
	id int primary key auto_increment,
	nome varchar(100) not null,
	cpf char(11) not null,
	rg char(11) not null
);

create table corretores(
	id int primary key auto_increment,
	nome varchar(100) not null,
	cpf char(11) not null,
	rg char(11) not null,
	registro_creci char(12) not null
);

create table inquilinos(
	id int primary key auto_increment,
	nome varchar(100) not null,
	cpf char(11) not null,
	rg char(11) not null
);

create table imoveis(
	id int primary key auto_increment,
	endereco varchar(100) not null,
	descricao varchar(250),
	valor_aluguel decimal(12,2) not null,
	id_inquilino int,
	id_proprietario int not null,
	constraint fk_imovel_inquilino
	foreign key (id_inquilino) references inquilinos(id)
		on update cascade
		on delete restrict,
	constraint fk_imovel_proprietario
	foreign key (id_proprietario) references proprietarios(id)
		on update cascade
		on delete restrict
);

create table corretor_atende_inquilinos(
	id_corretor int,
    id_inquilino int,
    constraint fk_corretor_inquilino
    foreign key (id_corretor) references corretores(id)
		on update cascade
		on delete restrict,
    constraint fk_inquilino_corretor
    foreign key (id_inquilino) references inquilinos(id)
		on update cascade
		on delete restrict
);

create table proprietario_contata_corretor(
	id_proprietario int, 
    id_corretor int,
	constraint fk_proprietario_corretor
    foreign key (id_proprietario) references proprietarios(id)
		on update cascade
		on delete restrict,
    constraint fk_corretor_proprietario
    foreign key (id_corretor) references corretores(id)
		on update cascade
		on delete restrict
);

-- Proprietarios com mais de um imovel
select p.id, p.nome, COUNT(*) as num_imoveis
from imoveis i
	inner join proprietarios p
		on i.id_proprietario = p.id
group by p.id
having num_imoveis > 1;

-- Todos os corretores, com seus respectivos clientes
select c.nome as corretor, i.nome as inquilino
from corretores c
	left join corretor_atende_inquilinos ci
		on c.id = ci.id_corretor
	left join inquilinos i
		on i.id = ci.id_inquilino;

-- Casas com info sobre os inquilinos e donos
select i.endereco, iq.nome as inquilino, p.nome as proprietario
from imoveis i
	left join inquilinos iq
		on i.id_inquilino = iq.id
	inner join proprietarios p
		on i.id_proprietario = p.id;

INSERT INTO proprietarios (nome, cpf, rg) VALUES
    ('João Silva', 11122233344, 123456789),
    ('Maria Oliveira', 22233344455, 234567890),
    ('Pedro Santos', 33344455566, 345678901),
    ('Lucas Lima', 44455566677, 456789012),
    ('Ana Paula', 55566677788, 567890123);

INSERT INTO corretores (nome, cpf, rg, registro_creci) VALUES
    ('Fernando Santos', 66677788899, 678901234, 'SP-123456-PF'),
    ('Sandra Oliveira', 77788899900, 789012345, 'SP-234567-PJ'),
    ('Marcos Silva', 88899900011, 890123456, 'SP-345678-PF'),
    ('Bruna Lima', 99900011122, 901234567, 'SP-456789-PJ'),
    ('Rafael Souza', 00011122233, 012345678, 'SP-567890-PF'),
    ('Luciana Alves', 11122233344, 123456789, 'SP-678901-PF'),
	('Bruno Pereira', 22233344455, 234567890, 'SP-789012-PJ'),
	('Patricia Souza', 33344455566, 345678901, 'SP-890123-PF'),
	('Ricardo Castro', 44455566677, 456789012, 'SP-901234-PJ'),
	('Sonia Silva', 55566677788, 567890123, 'SP-012345-PF');

INSERT INTO inquilinos (nome, cpf, rg) VALUES
    ('Mariana Santos', 11122233344, 123456789),
    ('Luisa Oliveira', 22233344455, 234567890),
    ('Paulo Silva', 33344455566, 345678901),
    ('Pedro Lima', 44455566677, 456789012),
    ('Isabel Souza', 55566677788, 567890123);

INSERT INTO imoveis (endereco, descricao, valor_aluguel, id_inquilino, id_proprietario) VALUES
    ('Rua A, 123', 'Apartamento 2 quartos', 1500.00, 1, 1),
    ('Rua B, 456', 'Casa 3 quartos com piscina', 2500.00, 2, 2),
    ('Rua C, 789', 'Sala comercial', 3500.00, null, 3),
    ('Rua D, 1011', 'Casa térrea', 1800.00, 3, 4),
    ('Rua E, 1213', 'Apartamento 1 quarto', 1200.00, 5, 5),
    ('Rua F, 1415', 'Apartamento mobiliado 1 quarto', 1800.00, null, 1),
	('Rua G, 1617', 'Casa 2 quartos com jardim', 2100.00, null, 3),
	('Rua H, 1819', 'Sala comercial no centro', 5000.00, null, 3),
	('Rua I, 2021', 'Apartamento 3 quartos com varanda', 3500.00, 4, 5),
	('Rua J, 2223', 'Casa 4 quartos com piscina e churrasqueira', 4500.00, 5, 5);

INSERT INTO corretor_atende_inquilinos (id_corretor, id_inquilino) VALUES
    (1, 1),
    (2, 2),
    (3, 3),
    (4, 4),
    (5, 5);

INSERT INTO proprietario_contata_corretor (id_proprietario, id_corretor) VALUES
    (1, 1),
    (2, 2),
    (3, 3),
    (4, 4),
    (5, 5);