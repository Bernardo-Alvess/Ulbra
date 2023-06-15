CREATE TABLE pessoas (
    id INT NOT NULL PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    sexo CHAR(1) NOT NULL,
    data_nascimento DATE NOT NULL
);

INSERT INTO pessoas (id, nome, sexo, data_nascimento) VALUES
(1, 'Lucas Silva', 'M', '1995-01-12'),
(2, 'Pedro Souza', 'M', '2002-08-23'),
(3, 'Bruno Alves', 'M', '2010-04-02'),
(4, 'Rafael Pereira', 'M', '1987-12-15'),
(5, 'João Santos', 'M', '1979-05-07'),
(6, 'Carla Costa', 'F', '2004-02-28'),
(7, 'Ana Paula Rodrigues', 'F', '2001-11-09'),
(8, 'Julia Oliveira', 'F', '2011-09-21'),
(9, 'Aline Ferreira', 'F', '1989-03-30'),
(10, 'Maria da Silva', 'F', '1977-06-18'),
(11, 'Gabriel Fernandes', 'M', '2012-07-10'),
(12, 'Victor Santos', 'M', '2000-03-05'),
(13, 'Luiz Souza', 'M', '2014-11-17'),
(14, 'Mariana Silva', 'F', '2007-08-25'),
(15, 'Fernanda Almeida', 'F', '1998-12-09');


DELIMITER //

CREATE PROCEDURE inserirPessoa(p_nome varchar(100), p_sexo char(1), p_data_nascimento date)
BEGIN
    declare max_id int;
    set max_id = (select max(id) from pessoas);
    insert into pessoas(id, nome, sexo, data_nascimento) VALUES
    ((max_id + 1), p_nome, p_sexo, p_data_nascimento);
END//
DELIMITER ;

DELIMITER //
CREATE PROCEDURE qtdPorSexo(OUT masculino INT, OUT feminino INT)
BEGIN
    set masculino = (select count(id) from pessoas where sexo = 'M');
    select masculino as qtd_homens;

    set feminino = (select count(id) from pessoas where sexo = 'F');
    select feminino as qtd_mulheres;
END//
DELIMITER ;

-- qtd de homens e mulheres maiores e menores de idade
DELIMITER //
CREATE PROCEDURE maioresMenoresDeIdade()
BEGIN
    declare maiorH int;
    declare menorH int;
    declare maiorF int;
    declare menorF int;
    call qtdPorSexo(menorH, menorF);

    set maiorH = (select Count(id) from pessoas where sexo = 'M' and (DATEDIFF(CURRENT_DATE, data_nascimento) / 365) <= 18);
    set maiorF = (select Count(id) from pessoas where sexo = 'M' and (DATEDIFF(CURRENT_DATE, data_nascimento) / 365) <= 18);
    set menorH = menorH - maiorH;
    set menorF = menorF - maiorf;

    select maiorH as homens_maior_idade, menorH as homens_menor_idade, maiorF as mulheres_maior_idade, menorF as mulheres_menor_idade;
END//
DELIMITER ;
call inserirPessoa('Bernardo', 'M', '2003-05-08');
call qtdPorSexo('f');
select * from pessoas;

call maioresMenoresDeIdade();

DELIMITER //

CREATE PROCEDURE operacoesMatematicas(
  IN num1 INT,
  IN num2 INT
)
BEGIN
  DECLARE soma INT;
  DECLARE subtracao INT;
  DECLARE multiplicacao INT;
  DECLARE divisao FLOAT;

  SET soma = num1 + num2;
  SET subtracao = num1 - num2;
  SET multiplicacao = num1 * num2;
  SET divisao = num1 / num2;

  SELECT 
    soma,
    subtracao,
	multiplicacao,
    divisao;
END//

DELIMITER ;

call operacoesMatematicas(1,2);