## Fórum de Algoritmos e Programação Estruturada - Questões

Conforme o conhecimento adquirido quanto ao tema de algoritmos realizar as atividades abaixo para nosso fórum:

### 1. Definição do que é pseudocódigo  
**R:** É uma linguagem de programação artificial, usada principalmente para introduzir novos estudantes à lógica de programação e o funcionamento de algoritmos, por ter uma escrita mais simples (sendo possível ser utilizado em português) e ser considerada alto nível, é uma ótima forma de inserir inexperientes ao raciocínio lógica.  
### 2. Definição do que são algoritmos  
**R:** Um algoritmo é um sequência de instruções definidas para resolver problemas ou chegar a um objetivo específico. É um sistema finito e sistêmico de passos que devem ser realizados para alcançar um determinado resultado.  
### 3. Demonstrar em exemplos onde temos aplicação de algoritmos em nosso dia a dia  
**R:** Usamos algoritmos para praticamente tudo que fazemos no dia-a-dia, ao fazer um bolo, tomar banho, trocar um pneu, consertar um móvel, em equações/funções matemáticas, entre muitos outros.  
### 4. Construir em pseudocódigo um algoritmo que faça a leitura de três nomes, armazene e por final imprima na tela os nomes armazenados  
**R:** Para essa questão utilizei o visualg, um software que eu já havia utilizada anteriormente.  

```
ALGORITMO "Leitor de nomes"
// Função: um algoritmo que faça a leitura de três nomes, armazene e por final imprima na tela os nomes armazenados
// Autor: Jonathan de Jesus
// Data: 01/08/2022
VAR
   //Vetor que receberá os nomes
   nomes: vetor [1..3] de caractere
   //Contador para uso no loop
   contador: inteiro
INICIO
   // Repetição usada para a leitura dos nomes
   PARA contador DE 1 ATE 3 FACA
     ESCREVA("Informe o nome",contador,": ")
     LEIA(nomes[contador])
   FIMPARA
   ESCREVAL("------------------------------------")
   // Repetição usada para a impressão dos nomes
   PARA contador DE 1 ATE 3 FACA
     ESCREVAL("Nome",contador,": ",nomes[contador])
   FIMPARA
FIMALGORITMO
```
