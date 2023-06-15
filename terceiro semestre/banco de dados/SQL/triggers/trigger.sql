create database teste;
use teste;

CREATE TABLE setores
(
	id int auto_increment primary key,
    nome varchar(50) not null, 
    total_salario decimal(18,2) default 0
);
insert into setores (nome)
	values ('Dev'), ('Suporte'),('Finan');

CREATE TABLE funcionarios
(
	id int auto_increment primary key,
    nome varchar(50) not null, 
    salario decimal(18,2) default 0,
    id_setor int,
    constraint funcionarios_setores_fk
		foreign key(id_setor) 
			references setores(id) 
				ON DELETE RESTRICT
                ON UPDATE CASCADE
);

DELIMITER //
CREATE TRIGGER trigger_atualia_total_salario AFTER INSERT ON funcionarios
for each row
BEGIN

	update setores set total_salario = total_salario + NEW.salario
    where id = NEW.id_setor;
    

END //
DELIMITER ;


DELIMITER //
CREATE TRIGGER trigger_atualia_total_salario_quando_deleta AFTER DELETE ON funcionarios
for each row
BEGIN

	update setores set total_salario = total_salario - OLD.salario
    where id = OLD.id_setor;
    

END //
DELIMITER ;

DELIMITER $$
CREATE TRIGGER trigger_atualiza_total_salario_quando_update AFTER UPDATE ON funcionarios
	FOR EACH ROW
BEGIN
	
    update setores set total_salario = total_salario + (NEW.salario - OLD.salario)
    where id = NEW.id_setor;
    
END $$
DELIMITER ;

DELETE from setores;
select * from funcionarios;
select * from setores;

insert into funcionarios  (id, nome, salario, id_setor)
	values (1, 'Bernardo', 3000, 4), (2 ,'Bryan', 4000, 6);
    
select * from setores

DELIMITER //
start transaction;

insert into setores(nome) values('devops');
insert into funcionarios(nome, salario, id_setor) values('João Silva', 4000, 7);

commit;
DELIMITER;