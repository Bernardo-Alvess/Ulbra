select a.nome, c.nome,
from aluno a
    inner join cidade c
        on c.idcid = a.idcid
order by a.nome;

select nome, valor_credito, valor_credito * 1.1 as valor10
from curso
where nome = 'ADS'

update curso
set valor_credito = valor_credito * 1.1
where nome = 'ADS'

-- Marque a sentença que permite listar os códigos(id) das turmas com o nome da disciplina e a sala. 

select idturma, nome, sala
from turma, turdisc, disciplina
where turma.idturma = turdisc.idturma and disciplina.iddisc = turdisc.iddisc

select t.idturma, d.nome, sala
from turma t
    inner join turdisc td
        on t.idturma = td.idturma
    inner join disciplina d
        on d.iddisc = td.iddisc

-- 6. Defina o comando SQL para listar o nome do curso e valor do crédito para o curso que tem o valor mais baixo de crédito(valorcredito).

select c.nomecurso, min(cr.valorcredito)
from curso c
    inner join credito cr
        on cr.id = c.idCredito


-

create table cidade(
	idcid int primary key auto_increment,
	nome varchar(100),
	UF varchar(2)
)

create table professor (
    idprof int primary key auto_increment, 
    nome varchar(50), 
    email varchar(320),
    endereço varchar(200),
    cpf int,
    idcid int
    constraint professor_fk_cidade
    foreign key(idcid) references cidade(idcid)
        on update cascade
        on delete restrict
)

alter table matricula
add data_entrada date;


select nomecurso, min(valorcredito)
from curso c1
    inner join curso c2


select aluno.idaluno, aluno.nome, cidade.nome
from aluno
    inner join cidade
        on cidade.idcid = aluno.idcid
where cidade.nome <> 'Torres';
    
select c1.nomecurso, min(c1.valorcredito)
from curso c1
	inner join curso c2
		on c1.nomecurso = c2.nomecurso

-- Professor (idprof, nome, email, endereço, cpf, idcid)
-- Cidade(idcid, nome, UF)
-- Aluno (idaluno, nome, endereço, telefone, idcid)
-- Curso (idcurso, nomecurso, valorcredito)
-- Turma(idturma, idprof,  sala, capacidade, idcurso)
-- Disciplina(iddidisc, nome)
-- Turdisc(idturma, iddisc)
-- Matricula(idaluno, idturma)


-- 10. Faça um SQL para exibir o nome do aluno, o código do curso, o nome do curso e o nome do professor da turma e a data que ele se matriculou. Apresentar somente para alunos que tenham se matriculado entre semestre 1 de 2022, considere que as matrículas iniciam em janeiro.

select aluno.nome, curso.idcurso, curso.nome, professor.nome, matricula.data_entrada
from matricula
    inner join aluno
        on matricula.idaluno = aluno.idaluno
    inner join turma
        on matricula.idturma = turma.idturma
    inner join professor
        on turma.idprof = professor.idprof
    inner join curso
        on turma.idcurso = curso.idcurso
where matricula.data_entrada BETWEEN '2022-01-01' and '2022-07-01';


select professor.nome, count(turma.idprof) as quantidade_turmas
from turma
    inner join professor
        on turma.idprof = professor.idprof
group by turma.idprof
order by quantidade_turmas DESC
limit 2;