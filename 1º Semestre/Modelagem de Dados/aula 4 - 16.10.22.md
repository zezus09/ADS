# Normalização de dados

* Visam o refinamento;
* Evitar a redundância;
* Técnicas para avaliar e corrigir estruturas e tabelas.

## Formas normais de Boyce-Codd

* 1FN, 2FN, 3FN e 4FN;
* Se baseiam nas dependência funcional entre atributos da entidade e nas PK;
  * Consiste em uma restrição entre dois ou mais conjuntos.

### Dependência funcional

Um conjunto de atributos X e Y de uma entidade:

* Y é dependente funcional de X;
* X determina Y;
* Y depende de X;
* Pode ser representado como: X -> Y.

### Regras de normalização

* Coerência: um único assunto por tabela;
* Duplicação de atributos;
* Todos os campos da tabela deve depender de uma PK;
* Livres de incosistência de dados.

#### Tipos de atributos

* Simples ou atômicos;
* Compostos;
* Monovalorado;
* Multivalorado;
* Derivado;
* Chave.

### Primeira forma normal - 1FN

* Todos os atributos forem atômicos,
* Não possuindo grupos repetitivos ou
* Colunas que possuam mais de um valor

> Exemplo

| CodCliente | Nome | Telefone | Cidade |
| :--------: | :--: | :------: | :----: |
| 1         | João | 1234-567 | São Paulo |
| 2         | Lais | *9876-543 1324-156* | Salvador |
| 3         | José | 7415-963 | Salvador |

> Segundo a 1FN

| CodCliente | Nome | CodCidade |
| :--------: | :--: | :-------: |
| 1          | João | 1         |
| 2          | Lais | 2         |
| 3          | José | 2         |

| CodCliente | Telefone |
| :--------: | :------: |
| 1          | 1234-567 |
| 2          | 9876-543 |
| 2          | 1324-156 |
| 3          | 7415-963 |

| CodCidade | Cidade |
| :-------: | :----: |
| 1         | São Paulo |
| 2         | Salvador |

### Segunda forma normal - 2FN

* Estiver na 1FN;
* Todas as colunas que não são chaves, dependam exclusivamente da PK.

> Exemplo

| NPedido | CodProduto | Produto | Qtde | ValorUnit |
| :-----: | :--------: | :-----: | :--: | :-------: |
| 1005    | 1-111      | impressora | 1 | 1500      |
| 1006    | 1-222      | teclado    | 5 | 200       |
| 1007    | 1-333      | mouse      | 8 | 100       |

> Segundo a 2FN

| NPedido | CodProduto | Qtde | ValorUnit |
| :-----: | :--------: | :--: | :-------: |
| 1005    | 1-111      |  1   | 1500      |
| 1006    | 1-222      |  5   | 200       |
| 1007    | 1-333      |  8   | 100       |

| CodProduto | Produto    |
| :--------: | :-----:    |
| 1-111      | impressora |
| 1-222      | teclado    |
| 1-333      | mouse      |

### Terceira forma normal - 3FN

* Somente se estiver na 2FN;
* Não pode conter dependências funcionais dos seus atributos não chave com outros atributos não chave;
* Atributos que são calculados baseado em outros atributos serão eliminados

> Exemplo

| cdFuncionário | Nome | idCargo | Descrição |
| :-----------: | :--: | :-----: | :-------: |
| 148-9    | Jane Anne | 15      | Professor1|
| 721-4    | Klaus Lins| 16      | Diretor   |
| 673-2    | Sandra C  | 17      | Professor2|

> Segundo a 3FN

| cdFuncionário | Nome | idCargo |
| :-----------: | :--: | :-----: |
| 148-9    | Jane Anne | 15      |
| 721-4    | Klaus Lins| 16      |
| 673-2    | Sandra C  | 17      |

| idCargo | Descrição |
| :-----: | :-------: |
| 15      | Professor1|
| 16      | Diretor   |
| 17      | Professor2|

### Quarta forma normal - 4FN

* Somente se estiver na 3FN;
* Se não existir dependência multivalorada;
  * Quando as informações inseridas nas tabelas podem ficar se repetindo e, produzir redundância na tabela;
* Todo campo precisa ser atômico (não pode ser dividido em vários campos)

> Exemplo

| cdFuncionário | Nome | idCargo | Dependente | Parentesco |
| :-----------: | :--: | :-----: | :--------: | :--------: |
| 148-9    | Jane Anne | 15      | Lucy Anne  | Filho      |
| 721-4    | Klaus Lins| 16      | João Lins  | Esposo     |
| 673-2    | Sandra C  | 17      | Johny C    | Filho      |

> Segunda a 4FN

| cdFuncionário | Nome | idCargo |
| :-----------: | :--: | :-----: |
| 148-9    | Jane Anne | 15      |
| 721-4    | Klaus Lins| 16      |
| 673-2    | Sandra C  | 17      |

| idFuncDepend | cdFuncionário | idDependente | Parentesco |
| :----------: | :-----------: | :----------: | :--------: |
|5             | 148-9         | 6            | Filho      |
|6             | 721-4         | 7            | Esposo     |
|7             | 673-2         | 8            | Filho      |

| idDependente | Nome |
| 6     | Lucy Anne   |
| 7     | João Lins   |
| 8     | Johny C     |
