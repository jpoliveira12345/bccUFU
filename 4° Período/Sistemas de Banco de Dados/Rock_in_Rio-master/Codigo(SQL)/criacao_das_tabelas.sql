﻿--DROP SCHEMA Palcos cascade;
--REVOKE CONNECT ON DATABASE rock_in_rio FROM organizador,plateia;DROP ROLE jose,joao, organizador,plateia;
--CREATE DATABASE rock_in_rio
CREATE SCHEMA Palcos;
SET search_path to Palcos;

CREATE TABLE Patrocinador(
	cod					integer,
	nome					varchar(40),
	CONSTRAINT patrocinador_pk PRIMARY KEY (cod)
);

CREATE TABLE Edicao(
	arrecadacao				numeric(20,2),
	ano					numeric(4,0) CHECK (ano > 0),
	n_pessoas				int CHECK (n_pessoas > 0),
	CONSTRAINT edicao_pk PRIMARY KEY (ano)
);

CREATE TABLE Midia(
	nome					varchar(40),
	tipo					varchar(10) check(
							tipo = 'DVD' OR
							tipo = 'CD'
						),
	CONSTRAINT midia_pk PRIMARY KEY (nome,tipo)
);


CREATE TABLE Hotel (
	nome					varchar(40),
	endereco				varchar(120),
	telefone				varchar(15),
	CONSTRAINT hotel_pk PRIMARY KEY (telefone)
);

CREATE TABLE Banda(
	cod					serial	   ,
	nome					varchar(40),
	genero					varchar(33),
	hotel					varchar(15),
	CONSTRAINT fk_banda FOREIGN KEY (hotel) REFERENCES hotel(telefone),
	CONSTRAINT banda_pk PRIMARY KEY (cod),
	CONSTRAINT generos CHECK (
		UPPER(genero) = 'Heavy Metal' OR 
		UPPER(genero) = 'MPB' OR 
		UPPER(genero) = 'JAZZ' OR 
		UPPER(genero) = 'POP' OR 
		UPPER(genero) = 'ROCK' OR
		UPPER(genero) = 'WORLD'
	)
);




CREATE TABLE Funcionario(
	cpf						varchar(11),
	nome					varchar(40),
	sexo					char,
	tipoEmpregado			varchar(120),
	funcaoVoluntario		varchar(120),
	CONSTRAINT funcionario_pk	PRIMARY KEY (cpf)
);



CREATE TABLE Palco(
	nome_palco			varchar(40),
	cod					serial,
	responsavel			varchar(11) NOT NULL,
	CONSTRAINT pk_palco PRIMARY KEY (cod),
	CONSTRAINT fk_palco FOREIGN KEY (responsavel) REFERENCES Funcionario(cpf)
);


CREATE TABLE Equipamento(
	n_serie					varchar(30),
	nome					varchar(40),
	tipo					varchar(20) 
	CONSTRAINT equipamentos CHECK (
		UPPER(tipo) = 'EFEITO ESPECIAL' OR
		UPPER(tipo) = 'ILUMINACAO' OR
		UPPER(tipo) = 'SOM' OR
		UPPER(tipo) = 'CONTROLE'
	),
	CONSTRAINT equipamento_pk PRIMARY KEY (n_serie)
);


CREATE TABLE Instrumento(
	n_serie					varchar(30),
	nome_instrumento			varchar(40),
	tipo					varchar(20),
	CONSTRAINT Instrumento_pk PRIMARY KEY (n_serie)
);

CREATE TABLE Artista(
	nome					varchar(40),
	nacionalidade				varchar(20),
	CONSTRAINT artista_pk PRIMARY KEY (nome)
);

CREATE TABLE Apresentacao(
	apresentador			integer,
	cod_palco 				integer,
	dat_hr_inicio			timestamp,
	dat_hr_fim				timestamp,
	ano 					numeric(4,0) CHECK (ano > 0),
	CONSTRAINT apresentacao_fk  FOREIGN KEY (apresentador) REFERENCES Banda(cod),
	CONSTRAINT apresentacao_fk1 FOREIGN KEY (cod_palco) REFERENCES Palco(cod),
	CONSTRAINT apresentacao_pk  PRIMARY KEY (apresentador,cod_palco,dat_hr_inicio),
	CONSTRAINT ed_fk	    FOREIGN KEY (ano) REFERENCES Edicao(ano)
);



CREATE TABLE Patrocina(
	patroc					integer,
	edicao					NUMERIC(4,0),
	contribuicao				numeric(10,2) CHECK (contribuicao > 0),
	CONSTRAINT fk_patr	 	FOREIGN KEY (patroc) REFERENCES patrocinador(cod),
	CONSTRAINT fk_edicao		FOREIGN KEY (edicao) REFERENCES edicao(ano),
	CONSTRAINT pk_patrocina 	PRIMARY KEY (patroc,edicao)	
);


CREATE TABLE Produz (
	midia					varchar(40),
	tipo					varchar(10),
	ano_ed					NUMERIC(4,0),
	CONSTRAINT fk_edicao FOREIGN KEY (ano_ed) REFERENCES edicao(ano),
	CONSTRAINT fk_tmidia FOREIGN KEY (tipo,midia) REFERENCES midia(tipo,nome),
	CONSTRAINT pk_produz PRIMARY KEY (midia,tipo,ano_ed)
);

CREATE TABLE Utiliza(
	banda					integer,
	equipamento 				varchar(30),
	CONSTRAINT utiliza_pk 	PRIMARY KEY (banda,equipamento),
	CONSTRAINT utiliza_fk	FOREIGN KEY (banda) 		REFERENCES Banda(cod),
	CONSTRAINT utiliza_fk1	FOREIGN KEY (equipamento) 	REFERENCES Equipamento(n_serie)
);

CREATE TABLE Toca_em(
	artista 			varchar(40),
	banda				integer,
	CONSTRAINT toca_em_pk 	PRIMARY KEY (artista,banda),
	CONSTRAINT toca_em_fk	FOREIGN KEY (artista) 	REFERENCES Artista(nome),
	CONSTRAINT toca_em_fk1	FOREIGN KEY (banda) 	REFERENCES Banda(cod)
);

CREATE TABLE Toca (
	artista			varchar(40),
	insts 			varchar(30),
	CONSTRAINT toca_pk 	PRIMARY KEY (artista,insts),
	CONSTRAINT toca_fk	FOREIGN KEY (artista) 	REFERENCES Artista(nome),
	CONSTRAINT toca_fk1	FOREIGN KEY (insts) 	REFERENCES instrumento(n_serie)
);

CREATE TABLE Trabalha(
	palco				integer,
	cpf 				varchar(11),
	CONSTRAINT trabalha_pk 	PRIMARY KEY (palco,cpf),
	CONSTRAINT trabalha_fk 	FOREIGN KEY (palco) REFERENCES palco(cod),
	CONSTRAINT trabalha_fk1	FOREIGN KEY (cpf) REFERENCES funcionario(cpf)
);