create table professores
(
    id int not null auto_increment primary key,
    nome varchar(100)
);

create table disciplinas
(
    id int not null primary key,
    nome varchar(100),
    id_professor int not null,
    constraint professores_professores_ensinam_disciplinas
    foreign key(id_professor) references professores(id)
);

create table softwares
(
    id int not null primary key,
    nome varchar(100)
);

create table disciplinas_tem_softwares
(
    id_disciplina int not null,
    id_software int not null,
    constraint disiciplinas_disciplinas_tem_softwares
    foreign key(id_disciplina) references disciplinas(id),
    constraint softwares_disciplinas_tem_softwares
    foreign key(id_software) references softwares(id)
);


