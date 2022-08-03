# Fundamentos a Algoritmos e das Linguagens de Programação

## Conceitos Iniciais

### Algoritmos
Uma sequência **ordenada** de passos que deve ser seguida para a realização de uma tarefa.  
` Entrada ` ⇾ ` Processamento ` ⇾ ` Saída `
##### Importante
* Passos finitos;
* Sem redundância;
* Sem subjetividade;
* Deve ser claro e objetivo.  

### Formas de representação de Algoritmos
* Descrição Narrativa
* Fluxograma
* Pseudocódigo

### Descrição Narrativa

##### Exemplos:
```
Receita de bolo 1:
    1. Misturar todos os ingredientes;
    2. Untar a forma;
    3. Despejar a mistura na forma;
    4. Levar a forma para o forno;
    5. Deixar o bolo 45 minutos no forno à 180ºC;
    6. Retirar a forma do bolo;
    7. Desenformar o bolo. 
```
```
Receita de bolo 2:
    1. Misturar os ingredientes;
    2. Untar a forma com manteiga;
    3. Despejar a mistura na forma;
    4. Se houver coco ralado então despeje sobre a mistura;
    5. Levar a forma para o forno;
    6. Enquanto não corar, deixar a forma no forno;
    7. Retirar a forma do bolo;
    8. Deixar esfriar. 
```

##### Vantagens da Descrição Narrativa
* O uso da linguagem natural;
##### Desvantagens da Descrição Narrativa
* Imprecisão;
* Não é metodológica.

### Fluxograma
* Representação **gráfica**;
* Cada **forma geométrica** define uma **função** genérica;
* As formas geométricas são ligadas por flechas que indicam o fluxo de execução.  

> Terminal - Representa o inicio ou o fim do fluxograma  
![Terminal](https://user-images.githubusercontent.com/110063335/182710018-da54fc22-9a1d-4bee-99cb-9a9fce96fd9b.png)

> Entrada Manual - Determina a entrada manual de dados
![Entrada](https://user-images.githubusercontent.com/110063335/182709982-26ea57e0-fac0-49b1-9d7e-c8fe6fd312f0.png)

> Processamento - Representa a execução de ações de processamento
![Processamento](https://user-images.githubusercontent.com/110063335/182709914-c37bf885-a9e0-441c-9918-82727b999c1f.png)

> Decisão - Representa os desvios condicionaisnas operações de tomada de decisão
![Decisão](https://user-images.githubusercontent.com/110063335/182710395-425c5179-be02-49ea-8b4d-626f7883391a.png)

> Comentário - Acrescente explicação ou comentários ao fluxograma
![Comentário](https://user-images.githubusercontent.com/110063335/182710562-c2383da0-9805-4c4c-9668-daf3bd4b04dc.png)

##### Exemplos:
![Fluxograma](https://user-images.githubusercontent.com/110063335/182711740-a8036f16-82fe-4d2c-9c9a-4416b8df70da.png)

### Pseudocódigo
* Assemelha-se a **forma quem que os programas são escritos**;
* **Português** estruturado;
* A intenção é chegar na **solução do problema**.
```
algoritmo "Calculo Media"
var
    nota1, nota2, media: real
inicio
    ESCREVA("DIGITE A PRIMEIRA NOTA: ")
    LEIA(nota1)
    ESCREVA("DIGITE A SEGUNDA NOTA: ")
    LEIA(nota2)

    media <- (nota1 + nota2)/2
    ESCREVA("Sua média é",media)
fimalgoritmo
```

## Componentes e elementos de Linguagem de Programação

### Variáveis
Local onde é armazenado o conteúdo específico na memória do computador.

| Variável | Conteúdo |
| -------- | -------- |
|  Nome    | Vanessa  |
|  Idade   | 18       |
| Telefone | 999-9999 |

#### Tipos de dados
Especifica as características, ou seja, os valores e operações possíveis de serem utilizadas com um dado desse tipo.

|   Tipo   |                 Descrição                    |
| -------- | -------------------------------------------- |
| Inteiro  | Representa valores inteiros. Ex: 18;300;-100 |
| Real     | Valores reais (decimal). Ex: 5.5;9.398;-22.2 |
| Caracter | Sequencia de um ou mais caracteres. Ex: A1;/ |
| Lógico   | Valores lógicos. Ex: Verdadeiro; Falso; 0; 1 |

#### Regras
* Identificação **única**;
* Nomes para as **variáveis significativos**;
* Caracteres **válidos**: números, letras maiúsculas ou minúsculas, underline;
* Caracteres **inválidos**: "espaço" ( ), caracteres especiais (@,$,*,+,etc.);
* O **primeiro caractere** de uma variável deve ser uma **letra**;
* **Não** pode usar **palavras reservadas**.

##### Exemplos:
**Válido** ` Salario, idade, nome, nota1, X2, nome_aluno `  
**Inválido** ` Endereço, Nome 1, 1valor, Nota# `  

## Problema
```
Fazer um fluxograma que apresenta o cadastro de um aluno, com as seguintes informações:
    * Nome;
    * Endereço;
    * Idade;
Apresentar as variáveis, e dar atenção aos seus tipos e características.
```
> Inicio ⇾ Entrada de dados: nome ⇾ Entrada de dados: endereço ⇾ Entrada de dados: idade ⇾ Desvio Condicional: idade valida ⇾ Inválida: retorna a solicitação da idade ⇄ Válida: Conclui o fluxograma  

##### Exercício
[ ] Só existe uma única solução para um algoritmo  
[x] O fluxograma é uma representação gráfica de um algoritmo  
[ ] Todas as váriaveis possuem o mesmo tipo

## Linguagem C
1 - Inicio do programa  
2 - Definição das variáveis  
3 - Instrução de leitura dos dados  
4 - Instrução do formato de escrita  
5 - Demais intruções e funções  
6 - Fim do programa

### Bibliotecas
As primeiras linhas de programação são definidas pelas bibliotecas.
* stdio: funções de entrada e saida;
* stdlib: transforma string em números;
* string: manipulação de string;
* math: operações matemáticas

##### Exemplo: #include <stdio.h>

### Função main()
Inicio da execução de um programa em C

main () { }  
int main() { }  
void main() { }

### Variáveis
|   Tipo  | Declaração em C |
|    --   |  -------------  |
| Inteiro |       int       |
|  Real   |      float      |
| Caracter|      char       |
|  Bool   |      enum       |

##### Exemplo:
#include <stdlib.h>  
void main() {  
    int valor1,valor2,soma;  
}  

### Operadores Matemáticos

| Operadores |    Funções    | Exemplos |
|   ------   |    -------    |   ----   |
|     +      | Adição        |  6 + 3   |
|     -      | Subtração     |  9 - 1   |
|     *      | Multiplicação |  3 * 3   |
|     /      | Divisão       |  4 / 2   |
|     %      | Resto         |  9 % 2   |

### Operadores de Atribuição
* Fornece um valor a uma variavel;
* Pode ser uma expressão;
* Símbolo Igual (=)

### Operadores Relacional
* .>  : Maior
* <   : Menor
* .>= : Maior ou igual
* <=  : Menor ou igual
* ==  : Igual
* <>  : Diferente

### Operadores Lógicos
* && : E = Conjunção
* || : Ou = Disjunção
* !  : Não = Negação

### Explicitando os tipos de variáveis
| Código |                  Função                  |
|  ----  |                  ------                  |
|   %c   | Permite a escrita de apenas um caractere |
|   %d   | Permite a escrita de números inteiros    |
|   %e   | Permite a escrita de números em NC       |
|   %f   | Permite a escrita de números reais       |
|   %s   | Permite a escrita de série de caracteres |

### Comando de saída de dados
As informações, mensagens e conteúdos de variáveis são enviadas para o usuários visualizá-las;  
* printf("expressão de controle", lista de argumentos)
* printf("O valor encontrado foi %d", valor1);

### Comando de entrada de dados
As informações dos usuários são transferidas para as variáveis do programa;
* scanf("expressão de controle", lista de argumentos)
* scanf("%d", &valor1);

##### Exemplo:
```
main () {
    int valor;
    printf("Digite um número:");
    scanf("%d",&valor);
    printf("\n o número é %d", valor);
}
```

## Voltando ao problema
```
Realize um cadastro de um aluno, com as seguinte informações:
    * Nome;
    * Endereço;
    * Idade;
Apresentar as variáveis, e dar atenção aos seus tipos e características.
```
```
void main(int argc, char**, argv) {
    char nome[30];
    char endereco[30];
    int idade;

    printf("Nome: \n);
    scanf("%s",&nome);
    printf("Endereço: \n);
    scanf("%s",&endereco);
    printf("Idade: \n);
    scanf("%d",&idade);

    printf("\n Nome: %s",nome);
    printf("\n Endereço: %s",endereco);
    printf("\n Idade: %d",idade);
}
```

##### Exemplo:
```
int main(int argc, char**, argv) {
    float nota1;
    float nota2;
    float media;

    printf("Insira nota 1: \n");
    scanf("%f",&nota1);
    printf("Insira nota 2: \n");
    scanf("%f",&nota2);

    media = (nota1 + nota2) / 2;

    printf("Média = %f: ",&media);
}
```

##### Exercício:
[ ] O printf é um comando de entrada de dados;  
[x] O float representa o tipo de dado decimal em C;  
[ ] Palavras reservadas são os nomes que damos as variáveis;  