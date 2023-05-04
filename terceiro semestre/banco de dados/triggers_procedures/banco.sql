CREATE DATABASE triggers_procedures;
USE triggers_procedures;

CREATE TABLE produtos (
  prd_codigo INT PRIMARY KEY,
  prd_falta BOOLEAN,
  prd_qtd_estoque INT,
  prd_descricao TEXT,
  prd_valor DECIMAL(10,2),
  prd_status VARCHAR(20)
);

CREATE TABLE orcamentos (
  orc_codigo INT PRIMARY KEY,
  orc_data DATE,
  orc_status VARCHAR(20)
);

CREATE TABLE orcamentos_produtos (
  orp_qtd INT,
  orp_valor DECIMAL(10,2),
  orp_status VARCHAR(20),
  orc_codigo INT,
  prd_codigo INT,
  FOREIGN KEY (orc_codigo) REFERENCES orcamentos (orc_codigo),
  FOREIGN KEY (prd_codigo) REFERENCES produtos (prd_codigo)
);
