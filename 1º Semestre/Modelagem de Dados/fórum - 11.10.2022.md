# Fórum - Modelagem de dados

## Normalização 3FN (Terceira forma normal)

A normalização é uma ferramenta que tem como objetivo reestruturar entidades e atributos, com os objetivos de: reduzir redundâncias e permitir um crescimento de forma mais acurada do banco de dados.

No caso da terceira forma normal temos que verificar os campos que não são chaves primárias, se algum deles possuir dependência com outro campo não chave primária, então é necessário o ajuste.

Um exemplo desse processo é:

Imagine que um professor mantém uma tabela com o resultados separados bimestralmente para cada aluno:

| id_aluno | nome | primeiro_bi | segundo_bi | terceiro_bi | quarto_bi | média |
| :------: | :--: | :---------: | :--------: | :---------: | :-------: | :---: |
| 15 | Luiza Pereira | 5 | 7 | 9 | 7 | 7 |
| 22 | Wagner Henrique | 4 | 6 | 6 | 5 | 5,25 |
| 43 | Fernanda Makengi | 8 | 9 | 10 | 8 | 8,75 |

Como o valor da média é o resultado de todas as outras notas dividido por 4, não é necessário que essa coluna seja mantida e por isso preferível que seja removida. Com a alteração a tabela ficaria da seguinte forma.

| id_aluno | nome | primeiro_bi | segundo_bi | terceiro_bi | quarto_bi |
| :------: | :--: | :---------: | :--------: | :---------: | :-------: |
| 15 | Luiza Pereira | 5 | 7 | 9 | 7 |
| 22 | Wagner Henrique | 4 | 6 | 6 | 5 |
| 43 | Fernanda Makengi | 8 | 9 | 10 | 8 |
