# Fundamentos de Banco de Dados

1. Aquirir competência e habilidade para criar banco de dados correto e seguro.
2. Usar o SGBD como ferramenta fundamental no desenvolvimento e uso de software.
3. Compreender como o dado será base para a tomada de decisões.
4. Aprender como a modelagem de dados auxiliará na resolução dos problemas do cliente.

## SGBD - Sistema Gerenciador de Banco de Dados

* Banco de dados são coleções inter-relacionados de arquivos;
* É uma coletânia de dados dúraveis e acessíveis a vários softwares;
* Cada processo da organização tem dados específicos e pode conter dados comuns entre outros processos:
    * Cadastro de produto
    * Contato do cliente
    * Venda: produto > cliente

### Funções

* Organizar, acessar, controlar, manter, compartilhar e proteger as informações;
* Possibilita a implementação de modelagem de dados;
* Garantir segurança dos dados;
* Estar distríbuidos entre vários computadores;
* Possibilitar o isolamento das transações.

## Sistema

* Composto por dados, hardware, software e usuários.

**Hardware:** Determina a capacidade de armazenamento e da disponibilização dos dados
**Software:** SGBD para construir o banco de dados e demais softwares para usuários
**Usuários:** Atoresque realizam as operações

* Programadores
* Usuários (sofisticado, especialistas, navegantes e desenvolvedores)
* Administrador do banco de dados (DBA)

### Funções DBA

* Cria e modifica o esquema do banco de dados;
* Concessão de autorização ao acesso aos dados;
* Manutenção - Liberar espaço, realizar backup, etc.

## Modelagem de Dados

* Baseado na teoria de conjuntos;
* Se prende a modelos.

### Modelo Gráfico

* Linguagem simplificada;
* Entidades e atributos em destaque

### Modelo Relacional

* Não estático;
* Informações acomodadas em tabelas e linhas;
* Operações baseada em álgebra relacional e teoria de conjuntos.
    * Seleção
    * Subtração
    * União
    * Produto cartersiano
    * Junção
    * Projeção

> Exemplo  

#### Aluno

| Matricula |     Nome    |  Dt. Nasc  |
| :-------: | :---------: | :--------: |
| 1515      | Ana Lee     | 18/06/1989 |
| 1819      | Pedro Luz   | 21/07/2000 |
| 2125      | Karla Keen  | 01/02/1999 |

**Tabela/Entidade:** Aluno
**Coluna/Atributo:** Matricula, Nome, Dt. Nasc
**Tupla/Linha:** 1515, Ana Lee, 18/06/1989

## Redundância

* Grande número de dados e falhas na modelagem de um banco de dados levam a problemas;
* Análise dos atributos das entidades.

### Redudância para recuperação de falhas

* Política de Backup;
* Quem fará o backup? Quem terá acesso?
* Como será realizado o backup? Qual mídia ou nuvem? Qual software? Qual hardware?
* Qual o intervalo dos backups?
* Quanto tempo o backup deve ficar armazenado na mesma mídia?
* Onde será armazenado?

## ACID

**Atomicidade:** Nenhuma ou a totalidade das operações da transação são realizadas com sucesso.
**Consistência:** Preserva as regras impostas no banco de dados.
**Isolamento:** É a segurança de que uma transação não interfira no trabalho de outra.
**Durabilidade:** É o armazenamento confiável e seguro.

### Registro de LOG

* Autentificação de usuário;
* Registrar todas as operações realizadas no BD;
* Permite recuperação de uma transação, com falhas, usando LOG;
* Auditoria em operação e em alteração de dados.

## Banco de dados

* Repositório de dados;
* Produção de inteligência de negócio;
* Visualização e composição para a tomada de decisões;
* Obtém informações de alto nível a partir de informações detalhadas.

> Dados > Regras de negócios > Estratégia > Decisões

### Data Warehouse

* Repositório de informações estruturadas;
* Vários Bancos de Dados;
* Origem de dados interna e externa;
* Armazenamento em um único local e com um esquema unificado;
* Permite consultas para o apoio à decisão.

### Data Mining

* Mineração de informações conhecidas;
* Descoberta de informações em função de novas regras ou padrões;
* Análise de informações semiautomáticas;
* Obter respostas à perguntas estratégicas.

#### OLTP

* Operações repetidas realizadas no SGBD;
* Dos níveis operacionais administrativos.

#### OLAP

* Processo interativo de criar, gerenciar, analisar e gerar relatórios;
* Armazenados em uma tabela multidimensional;
* Análise de algoritmos e softwares específicos.

| OLTP (Online Transaction Processing) | OLAP (Online Analytical Processing) |
| :----------------------------------: | :---------------------------------: |
| Operações de rotina                  | Operações analíticas                |
| Baixo desempenho em consultas        | Alto desempenho em consultas        |
| Sem histórico de consultas           | Possibilita histórico de consultas  |
| Estruturas convecionais de armazenamento | Armazenamento em Data WareHouse |
| Dados voláteis                       | Dados históricos e não voláteis     |
