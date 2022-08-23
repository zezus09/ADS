# Fundamentos da lógica

## Lógica

* **Soares (2014, p. 1)** Arte de pensar corretamente ou estudo dos modos corretos do pensamento;
* **Forbellone (2005, p. 1),** lógica é a "arte de bem pensar", que é a "ciência das formas de pensamento";
* O estudo da lógica nos permite entender como nosso **raciocionio lógico** é formado;
* Ciência que estuda **argumentos, premissas e conclusões**;
* Argumentos válidos ou inválidos.

**Proposição:** Consiste em um enunciado, uma frase declarativa;  
**Premissas:** Consistem em proprosições que são utilizadas como `base para o raciocínio`. Pode-se dizer que são as `proposições do silogismo`;  
**Argumento:** Conjunto de `enunciados que se relacionam` uns com os outros;  
**Silogismo:** Consiste em um `raciocínio dedutivo` (premissas) e possibilita a `dedução de uma conclusão` a partir das `premissas`.  
**Falácia:** Consiste em argumentos que logicamente estão incorretos.  

### Lógica Formal

* Aristóteles, Grécia Antiga;
* Analisa e representa a forma de qualquer **argumento** para que possa ser **considerada válida**;
* Lida com as **relações entre premissas e as conclusões**;
* `Não importa se as premissas são verdadeiras ou falsas`, o importante é chegar a uma conclusão;
* A partir de duas ou mais premissas chegamos a uma **conclusão**.

Exemplos:
> Todos os homens são mortais. P1  
> Elias é homem. P2  
> Logo, Elias é mortal. Conc

### Proposição

Toda a frase declarativa que possa ser atribuidos os valores **VERDADEIRO** ou **FALSO**;  

Exemplos:
> Marte é um planeta do Sistema Solar.  
> São Paulo é a capital do Paraguai.  
> O 11 é um número primo.

### Inferência

* Processo que permite chegar a **conclusões a partir de premissas**, constituindo a **argumentação lógica** perfeita;
* Uma inferência inválida é chamada **Falácia**;
* Pode ser **Indutiva** ou **Dedutiva**.

**Lógica Indutiva:** Partimos da experiência com `verdades e fatos` na busca por uma `conclusão geral`.  

Exemplo:
> O sol nasceu todas as manhãs até hoje.  
> Logo é provável que nasça amanhã.

**Lógica Dedutiva:** Partimos de `premissas gerais` para concluirmos `verdades específicas`.  

Exemplo:
> Todas as pessoas querem ser feliz.  
> Lara é uma pessoa.  
> Logo Lara quer ser feliz.

### Silogismo

* Um argumento constituído de **proposições** que extraem uma **conclusão**;
* Não tem importância o valor seja verdadeiro ou falso, mas apenas se observa a **forma constituída**;
* Raciocínio que fornece o **conhecimento de uma coisa a partir de outras coisas**;
* As premissas e conclusões, se **encaixam**, uma vez que as premissas são verdadeiras, a conclusão também será.

Exemplo:
> Todos os brasileiros torcem para o Brasil  
> José é brasileiro  
> Logo concluo que José torce para o Brasil

### Três Princípios da Lógica Clássica

Funcionam como leis, que regem a formulação de conclusões sobre premissas.  
  
**Identidade:** Uma preposição verdadeira é verdadeira, assimo como, uma preposição falsa é falsa.  
**Não-Contradição:** Uma preposição não pode ser verdadeira e falsa ao mesmo tempo.  
**Terceiro Excluído:** Toda preposição ou é verdadeira ou é falsa.

### Álgebra Booleana

* Foi o primeiro sistema lida com a **lógica como cálculo**;
* Se caracteriza por utilizar **0 e 1**, que significam respectivamente FALSO e VERDADEIRO;
* A adição é associada ao conectivo **ou**;
* A multiplicação é associada ao conectivo **e**;

### Álgebra dos Conjuntos

* Alicerce da matemática moderna;
* Operções particulares;
* União (u);
* Intersecção (∩).

Operadores Lógicos:
| Simbolo | Significado |
| :-----: | :---------- |
| ~ | Corresponde a Negação. Em programação pode ser representada por ! ou NOT |
| ∩ | Corresponde a Conjunção. Em programação pode ser representada por & ou AND |
| u | Corresponde a Disjunção. Em programação pode ser representada por | ou OR |
| ⇾ | Corresponde a Condição. Representa a relação se... então... |
| ⇿ | Corresponde a Bicondicional. Representa a relação se, e somente se,... |

### Matemática Discreta ou Matemática Combinatória

* Picado (2008), é um ramo da matemática voltado ao **estudo de objeto e estruturas distintas**;
* Estruturas discretas são estruturas formadas por **elementos distintos**;
* Os computadores armazenam as informações de forma discreta;
* Aborda três tipos de  problemas;  
    Problema de existência: Existe algum arranjo de objeto satisfazendo determinada propriedade?  
    Problema de contagem: Quantos arranjos desse tipo existem?  
    Problema de otimização: Qual a melhor configuração de um determinado critério.  

#### Arranjos

* Um subconjunto de elementos, chama-se **arranjos** quando usamos um subconjunto e calculamos a quantidade de elementos distintos dentro de outro conjunto;
* Para determinar o número de `p` elementos dentre os `n`;  
Fórmula:  
![fórmulaArranjo](https://user-images.githubusercontent.com/110063335/186039786-d85836c0-8984-45a8-b282-5c8c69c88d18.png)

Exemplo:  
> A = {1,2,3,4} - n = 4 - p = 2  
> ![exemploArranjo](https://user-images.githubusercontent.com/110063335/186039672-c660d8dc-d9e6-4782-b548-d53c89dd9e37.png)

#### Permutação

* Obtido quando um dado conjunto `p` de elementos distintos, seleciona exatamente a quantidade `n` de elementos ou seja seu total;  
Fórmula:  
![fórmulaPermutação](https://user-images.githubusercontent.com/110063335/186040643-e202f38c-2b3a-4b74-977b-980c9cb43c03.png)

Exemplo:  
> P = {1,2,3,4,5,6} - n = 6 - p = 6  
> ![exemploPermutação](https://user-images.githubusercontent.com/110063335/186040826-a93414f7-6084-4cca-a1fd-bea036b14bda.png)

#### Combinação

* Considera cada sequência obtida como um conjunto não ordenado;
* Dado um conjunto de `n` elementos, toma-se `p` a qualquer subconjunto distintos entre os `n` existente;  
Fórmula:  
![fórmulaCombinação](https://user-images.githubusercontent.com/110063335/186041355-975116f5-908e-420d-9057-8c77ef011660.png)

Exemplo:
> C = {1,2,3,4,5} - n = 5 - p = 2  
> ![exemploCombinação](https://user-images.githubusercontent.com/110063335/186041805-f00fe5b2-4f6c-457a-bb8b-3a03611cd34a.png)
