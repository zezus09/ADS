# Abordagem Entidade Relacionamento

## Ciclo de vida do banco de dados

1. Estudo inicial
2. Projeto
3. Implementação e carga
4. Teste e avaliação
5. Operação
6. Manutenção e evolução

### Fase de concepção e entendimento

* Delimitar dimensões de problema e solução;
* Estratégia top-down, bottom-up, middle-up-down;
* Padronização;
* Dicionário de dados.

|     | Modelagem de dados | Modelagem Lógica |
| :-: | :----------------: | :--------------: |
| Entidadades | Somente as importantes | Incluem todas as tabelas |
| Atributos | Não são especificados | Incluem todos os campos |
| Chaves | Não são especificados | Especificadas as chaves primárias e estrangeiras |
| Relacionamentos | Somente os importantes | Incluem todos os relacionamentos |

#### Dicionário de dados

* Descrição: nome, tabela, atributo e relações;
* Tipos de dados (domínio) e tamanhos;
* Chaves;
* Usuários e permissões;
* Cardinalidade: quantidade de relações entre tabelas

> Exemplo

Tabela Funcionário

|     | Campo | Descrição | Tipo | Tamanho |
| :-: | :---: | :-------: | :--: | :-----: |
| PK  | Cd_Func | Cód Funcionário | VARCHAR | 20 |
|     | Nm_Func | Nome Funcionário | VARCHAR | 100 |
|     | CPF_Func | CPF Funcionário | VARCHAR | 15 |
|     | Dt_Nasc_Func | Data de Nascimento do Funcionário | DATE | - |
| FK  | Id_Cidade | Cidade Funcionário | Inteiro | - |

## Programação orientada a objeto

* Utilizado e adotado por importantes linguagens de programação como: Java, C# e Python;
* Podemos usar ferramentas de modelagem de aplicações orientadas a objetos, para modelar o banco de dados.

### Conceitos POO

* Classe: Um tipo de dado, é formado por dados e comportamentos;
* Nome: refere-se ao que será armazenado;
* Atributo: dado e domínio;
* Métodos: comportamento

```txt
___________
|__CARRO__| <- Nome
|   Ano   |
|  Modelo | <- Atributos
|__Placa__|
| Andar() |
| Frear() | <- Métodos
```

### Linguagem de modelagem unificada (UML)

* Diagrama de atividades e caso de uso refletem o comportamento, funcionalidades e o fluxo de tarefas;
* Diagrama de classes especifica o relacionamento entre classes, atributos e métodos;
* Diagrama de sequência define a ordem que acontece o método e tratam os dados relacionados.

## Ferramenta Case

* Criação de Gráficos;
* Modelagem de banco de dados (notações);
* Geração de scripts SQL;
* Forward Engineer;
* Reverse Engineer;
* Documentação (geração de dicionário de dados).

### Tipos de ferramentas case

* Geração de código
* Geração de documentação
* Execução de testes
* Geração de relatórios
