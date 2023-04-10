-- Escreva uma SP que receba, como parâmetro, o CPF de um autor e retorne a quantidade de livros escrito pelo mesmo.

DELIMITER //
CREATE PROCEDURE quantidadeLivrosPorAutor(p_CPF varchar(11))
BEGIN
	declare qtd_livros INT;
   select count(al.id_livro) INTO qtd_livros
	from autores a
		inner join autores_livros al
			on al.id_autor = a.id
		where a.CPF = p_CPF
        group by al.id_autor;
	select qtd_livros;
END//
DELIMITER ;

call quantidadeLivrosPorAutor('49217856301');

-- Crie uma SP que receba, como parâmetro, a data de publicação de um livro e seu código. O procedimento deve atualizar a tabela de livros, especificando a data de lançamento para o livro em questão.

DELIMITER //
CREATE PROCEDURE atualizarData(p_data_lancamento date, p_id int)
BEGIN
	UPDATE livros
    SET data_lancamento = p_data_lancamento
    WHERE id = p_id;
END//
DELIMITER ;

CALL atualizarData('2022-04-06', 2);

/* Em algumas situações, SPs são utilizados para a manutenção da segurança do banco de dados.
Nestes casos, realizamos inclusões, alterações e exclusões de dados, através de SPs.
Crie SPs que recebem os parâmetros adequados e realizam as seguintes operações:

a) Inserir uma linha na tabela de livros
b) Excluir uma linha da tabela de livros
c) Atualizar valores na tabela de livros
*/

-- A)
DELIMITER //
CREATE PROCEDURE insertLivros(p_id int, p_titulo varchar(100), p_valor_unit decimal(10,2), p_data_lancamento date)
BEGIN
	INSERT INTO livros values(p_id, p_titulo, p_valor_unit, p_data_lancamento);
END//
DELIMITER ;

call insertlivros(7, 'Diario de um Banana', 50.00, '2017-04-03');

DELIMITER //
CREATE PROCEDURE removerLivro(p_id int)
BEGIN
	DELETE FROM livros
    where p_id = id;
END//
DELIMITER ;

call removerLivro(7);

select * from livros;

-- B)
DELIMITER //
CREATE PROCEDURE atualizarLivros(p_id int, p_titulo varchar(100), p_valor_unit decimal(10,2), p_data_lancamento date)
BEGIN
	UPDATE livros
    SET titulo = p_titulo, valor_unit = p_valor_unit, data_lancamento = p_data_lancamento
    where id = p_id;
END//
DELIMITER ;

call atualizarLivros(7, 'Diario de um Banana 3', 45, '2022-01-01');

-- C)
DELIMITER //
CREATE PROCEDURE atualizaPrecoPorEditora(p_id int, p_valor decimal(10, 2), p_porcentual INT)
BEGIN
	IF(p_porcentual is not null) then
		UPDATE livros
			SET valor_unit = valor_unit * (1 + p_porcentual / 100)
				WHERE id = p_id;
	ELSEIF(p_valor is not null) then
		UPDATE livros
			SET valor_unit = valor_unit + p_valor
				WHERE id = p_id;
	ELSE
		SELECT 'PARAMETROS INVALIDOS';
	END IF;
END//
DELIMITER ;

update livros
set valor_unit = 29
where id = 1;

CALL atualizaPrecoPorEditora(1, 10, null);
CALL atualizaPrecoPorEditora(1, NULL, 10);

CALL atualizaPrecoPorEditora(1, -10, null);
CALL atualizaPrecoPorEditora(1, NULL, -10);

select * from livros where id = 1;
