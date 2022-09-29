-- aluno(id, nome)
CREATE TABLE alunos
(
    id int not null auto_increment primary key,
    nome varchar(100)
);

-- departamento (id, nome)
--   id_depto referencia departamento (id)
CREATE TABLE departamentos
(
    id int not null auto_increment primary key,
    nome varchar(100)
);

-- curso(id, nome, id_depto)
CREATE TABLE cursos
(
    id int not null auto_increment primary key,
    nome varchar(100),
    id_depto int not null,
    constraint fk_departamento_departamento_tem_cursos
    foreign key(id_depto) references departamentos(id)
);

-- professor(id, nome)
CREATE TABLE professores
(
    id int not null auto_increment primary key,
    nome varchar(100)
);

-- disciplina(id, nome, id_prof)
--    id_prof referencia professor(id)

CREATE TABLE disciplinas
(
    id int not null auto_increment primary key,
    nome varchar(100),
    id_prof int not null,
    constraint professores_disciplinas_tem_professores
    foreign key(id_prof) references professores(id)
);

-- matricula(id_disciplina, id_aluno, data_matr)
--     id_disciplina referencia disciplina(id) 
--    id_aluno referencia aluno(id);

CREATE TABLE matriculas
(
    id_disciplina int not null,
    id_aluno int not null,
    data_matr date,
    constraint disciplinas_tem_matriculas
    foreign key(id_disciplina) references disciplinas(id),
    constraint alunos_tem_matriculas
    foreign key(id_aluno) references alunos(id)
)