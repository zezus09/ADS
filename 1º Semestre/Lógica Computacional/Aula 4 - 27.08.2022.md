# Tabela Verdade

## Matrizes de Conectivos - AND

* No canto superior esquerdo temos a operação lógica;
* Nas linhas abaixo temos uma das preposições e nas colunas ao lado a outra preposição, recebendo as variações binárias.

Exemplo:  

| P AND Q | Q = V | Q = F |
| :-----: | :---: | :---: |
|**P = V**|   V   |   F   |
|**P = F**|   F   |   F   |

## Tabelas Verdades

* Recurso usado na avaliação dos **valores lógicos de propõsições e operações**;
* As proposições são distribuidas no topo da tabela, e as possibilidades binárias são distribuidos pela tabela;
* As operações são feitas também no topo e de acordo com as proposições recebem seus valores;
* Para determinar a quantidade de linhas da tabela verdade é usado **2 elevado ao número de proposições** diferentes;
* Separamos as operações de acordo com as **precedências** das operações;
* Pode ser usada como gabarito para operações lógicas, pois **contempla todas as possibilidades**.

|  p  |  q  | p^q | pvq | ~(p^q)  | ~(pvq)  |
| :-: | :-: | :-: | :-: | :-----: | :-----: |
|  V  |  V  |  V  |  V  |    F    |    F    |
|  V  |  F  |  F  |  V  |    V    |    F    |
|  F  |  V  |  F  |  V  |    V    |    F    |
|  F  |  F  |  F  |  F  |    V    |    V    |

### Negação

|  p  |  ~p  |
| :-: | :--: |
|  V  |  F   |
|  F  |  V   |

### Conjunção

|  p  |  q  |  p^q  |
| :-: | :-: | :---: |
|  V  |  V  |   V   |
|  V  |  F  |   F   |
|  F  |  V  |   F   |
|  F  |  F  |   F   |

### Disjunção

|  p  |  q  |  pvq  |
| :-: | :-: | :---: |
|  V  |  V  |   V   |
|  V  |  F  |   V   |
|  F  |  V  |   V   |
|  F  |  F  |   F   |

### Condicional

|  p  |  q  |  p⇾q |
| :-: | :-: | :---: |
|  V  |  V  |   V   |
|  V  |  F  |   F   |
|  F  |  V  |   V   |
|  F  |  F  |   V   |

## Tautologia

* Proposições compostas que **sempre assumem o valor Verdadeiro**;
* Quando a ultima coluna de sua tabela verdade assume sempre o valor verdadeiro.

## Contradição

* Proposições compostas que **sempre assumem o valor Falso**;
* Quando a ultima coluna de sua tabela verdade assume sempre o valor falso.

## Contigência

* Proposições compostas que não são, nem tautologias, nem contradições;
* Quando a ultima coluna de sua tabela verdade assume **tanto valores verdadeiros quanto falsos**.
