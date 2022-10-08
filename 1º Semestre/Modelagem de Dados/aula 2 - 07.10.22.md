# Modelos de Banco de Dados

* Detalhamento dos tipos de informações que serão guardadas em um banco de dados;
* Processo progressivo, partindo de uma compreensão simples de um problema e, na medida que haja um melhor entendimento, então o nível de detalhes se ampliará.

* Modelo Conceitual: O que? > Lógico: Como? > Físico: SGBD  

## Como modelar?

* Linguagem textual: formal, menos formal e informal
* Linguagem gráfica

## Fases da análise e modelagem de dados

* Projeto de um sistema de informações é uma atividade complexa;
* Contemplado por planejamentos, especificações e construção de vários componentes;
* Segue sequência lógica, pautada em organização e técnicas, para guiar o processo de modelagem do banco de dados.

## Da análise de requisito à modelagem de dados

* Abrangência;
* Nível de detalhamento;
* Tempo para a produção do moodelo;
* Recursos disponíveis.

### Sequência de modelagem

* Análise de Requisitos - Planejamento
* Modelo Conceitual - Diagrama
* Modelo Lógico - DER
* Modelo Físico - SGBD

## Modelo Conceitual

* Uma descrição concisa das informações que deverá possuir, de acordo com seus requisitos;
* Representação do que precisa ser realizado e não como deverá ser realizado;
* Visão de nível macro;
* Independência de hardware e software;
* Focado no problema e não na solução.

> Linguagem textual

```txt
Ator: Nome do autor, valor do cachê, data de nascimento, altura
Filme: Nome do filme, data de lançamento, orçamento, duração
```

> Linguagem Gráfica

```txt
__________    Atua    __________
|__FILME__|----------|___ATOR___|
```

## Modelo Lógico

* Aplicamos o conceito de modelos de entidades e relacionamentos com o foco na criação do banco de dados;
* Entidade são transformadas em tabelas;
* Relacionamentos são reproduzidos ou criados;
* Tipos de dados e suas escalas são definidos.

```txt
______________         ____________          ____________
|____FILME____|        |__ATUAÇÃO__|        |____ATOR____|
|idFilme      |        |idFilme    |        |idAutor     |
|Nome (C)     |--------|idAutor    |--------|Nome (C)    |
|Data (D)     |        |Papel (C)  |        |Valor (V)   |
|Orçamento (V)|        |Data Cn (D)|        |Dt Nasc (D) |
|Duração (T)  |                             |Altura (N)  |
```

## Modelo Físico

* Definição das estruturas de armazenamento no BD, as chaves e os relacionamentos;
* Comandos com sintaxes específicas e executados diretamente SGBD;
* Sequência de execução.

```sql
CREATE TABLE NNNNN (
    id int primary key not null,
    aaa varchar(50),
    ddd Date,
    vvv Decimal,
    zzz Time
);
```

```sql
CREATE TABLE FILME (
    idFilme int primary key not null,
    Nome varchar(50),
    `Data` Date,
    Orçamento Decimal,
    Duração Time
);

CREATE TABLE ATOR (
    idAtor int primary key not null,
    Nome varchar(50),
    `Dt Nasc` Date,
    Valor_cachê Decimal,
    Altura Decimal
);

CREATE TABLE ATUAÇÃO (
    idFilme int foreign key not null,
    idAtor int foreign key not null,
    idAtuação int primary key not null,
    Papel varchar(50),
    `Data Cena` Date
);
```

## Conceitos de modalagem de dados

* Entidade: contém Atributos próprios;

```txt
___________          ___________
|__ALUNO__|          |__CURSO__|
```

* Atributo: campo da Entidade ou do Relacionamento.

  * Matricula
  * Nome
  * Curso
  * Duração

* Relacionamento: Relação determinada oela regra de negócio.

```txt
________________
|__Matriculado__|
```

### Vantagens do MER

* Independência dos dados;
* Melhor comunicação entre analistas e usuários;
* Redução de tempo de desenvolvimento e manutenção;
* Segurança e agilidade no gerenciamento.

### Tipos de Entidades

* Entidades Fortes: Obrigátorias
* Entidades Fracas ou Dependentes: Existem apenas à partir da Forte
* Entidades Agregadas: Entidades que juntamente contemplam um processo
* Entidades Subordinadas: Entidade que carrega características de outras
* Entidades Associativas: Entidades separadas que estão associadas

### Grau de Cardinalidade

* Valor específico ao relacionamento, expressando a faixa de ocorrências permitidas;
* Grau de relacionamento: Unário, Binário, Ternário, Quadrinário e n-ário;
* Graus de cardinalidades:
  * 1-1 (um para um);
  * 1-N (um para muitos);
  * N-1 (muitos para um);
  * N-N (muitos para muitos);
