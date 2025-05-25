# Fundamentos da Linguagem C
# Aula 1 - Conceitos Básicos

## 1.1 - A "Uma Linguagem"

+ Linguagem imperativa

O programa é feito através da escrita de enunciados que
representam comandos e instruções que o computador deve
executar.

+ Linguagem procedural

O código consiste em procedimentos que expressam um
conjunto de passos que o computador deve executar.

+ Linguagem de alto nível

São linguagens com um nível de abstração relativamente
distante do código da máquina e mais próximo da
linguagem humana.

+ Tipagem estática

O tipo da variável é definido no tempo da compilação.

: A ACM (Association for Computing Machinery)
: classifica a linguagem C como de "médio nível",
: mas esse é um debate que não tem fim e não leva
: a absolutamente nada.

## 1.2 - Compilação

+ Como compilar os nossos exemplos e exercícios

  * Nossos programas serão compilados com o seguinte
    comando do GCC:
    
:     :~$ gcc -Wall <fontes.c> -o <destino> 

  * Isso produz o binário executável <destino> na
    mesma pasta dos arquivos <fontes.c>.

  * Para executá-los...

:     :~$ ./programa

## 2 - Os elementos básicos

Existem algumas coisas que são comuns a todas as
linguagens de programação.

Então, às vezes ajuda muito começar descobrindo como
a linguagem que estamos aprendendo trata esses
elementos.

+ Nosso "check-list"

  * Tipos de dados
  * Variáveis e constantes
  * Operadores
  * Instruções
  * Funções
  * Diretivas do pré-processador
  * Estruturas de decisão
  * Estruturas de repetição

## 2.1 - Tipos de dados

Na linguagem C, nós trabalhamos com tipos 'primitivos',
'modificados' e 'definidos pelo usuário'.

+ Os tipos primitivos:

  * int    - valores numéricos inteiros
  * char   - caracteres (ASCII)
  * float  - números de ponto flutuante
  * double - números de dupla precisão
  * void   - tipo sem valor (vazio)

+ Os qualificadores modificam os tipos quanto...

  * ao tamanho - short e long
  * ao sinal   - signed e unsigned
  
+ Tipos definidos a partir dos tipos primitivos:

  * arrays  - agrupamento de dados do mesmo tipo
  * strings - arrays de caracteres

+ Tipos definidos pelo usuário:

  * Estruturas e uniões
  * Enumerações

## 2.2 - Variáveis e constantes

Na linguagem C, as 'constantes' são qualquer entidade
que expresse um valor imutável, enquanto uma 'variável'
é uma entidade que pode ter seu valor alterado.

+ São constantes...

  * Representações literais de um valor
  * Constantes simbólicas
  * Arrays
  * Ponteiros
  * Estruturas
  * Uniões
  * Enumerações

+ Variáveis

  * São identificadores para dados na memória.
  * Precisam ser declaradas.

+ Identificadores

  * Contém apenas caracteres alfunuméricos e o '_'
  * Primeiro caractere tem que ser uma letra ou '_'
  * Não pode ser uma palavra-chave

## 2.3 - Operadores

A linguagem C trabalha com praticamente os mesmos
operadores básicos de qualquer outra linguagem:

  * Operadores de atribuição
  * Operadores aritméticos
  * Operadores relacionais
  * Operadores lógicos
  * Operadores condicionais
  
Além desses grupos, outros operadores que veremos
muito na linguagem C são:

: *var     - Aponta para uma variável (indireção)
: &var     - Retorna o endereço de uma variável
: sizeof() - Retorna o tamanho de uma variável

## 2.4 - Instruções

As instruções na linguagem C são delimitadas pelo
caractere ';'.
    
Não utilizamos o ponto-e-vírgula após:

  * Funções
  * Estruturas de decisão
  * Estruturas de repetição
  * Diretivas do pré-processador

Tem seus blocos delimitados por chaves:

  * Funções
  * Estruturas condicionais
  * Estruturas de repetição
  * A definição de uma array
  * A definição de uma estrutura (struct)
  * A definição de uma união
  * A definição de uma enumeração

## 2.5 - Funções

  * Uma função é um agrupamento de instruções destinado
    a realizar uma tarefa específica.

  * Todo programa em C consiste em uma ou mais funções
    e deve ter pelo menos a função main().
  
  * Todo programa em C é executado na função main().
  
+ Bibliotecas

  * A linguagem C dispõe de várias bibliotecas contendo
    funções e outras definições para as mais diversas
    finalidades.

  * As funções da biblioteca 'glibc' são divididas em
    vários arquivos de cabeçalho, cada um contendo
    funções e definições para conjuntos de tarefas
    específicas.
    
  * Os cabeçalhos são incluídos no código pela diretiva...
  
:     #include <arquivo.h>
    
+ Funções definidas pelo usuário

  * Nós podemos criar nossas próprias funções.

## 2.6 - Diretivas do pré-processador

Antes de realizar a compilação em si, o compilador
fará uma leitura do código em busca de instruções
adicionais.

Essas instruções não fazem parte da linguagem C,
mas estão presentes em quase todos os códigos que
escrevemos.

Dentre as diretivas mais comuns, nós podemos citar:

+ Diretiva #include

Inclui um arquivo externo no ponto em que ela aparecer
no código. É utilizada para a inclusão de arquivos de
cabeçalho e, desta forma, disponibilizar funções e
outras definições para o nosso uso.

+ Diretiva #define

Define "macros", entre as quais, as constantes
simbólicas que poderão ser utilizadas de qualquer
parte do código.

## 2.7 - Estruturas de decisão

+ Cláusulas if/else if/else 

  * Podem ou não preceder um agrupamento de instruções.
  
  * Sem o agrupamento, precedem apenas uma instrução.
  
+ Cláusula switch/case

  * É uma instrução multiderecional para lidar
    com decisões.
    
  * Trabalha comparando o valor de uma expressão
    com as constantes nas cláusulas 'case'.
    
  * As instruções em cada cláusula 'case' serão
    executadas até que se encontre uma instrução
    'break'.


## 2.8 - Estruturas de repetição

+ Loop while

  * Executa uma instrução ou um  grupo de instruções
    enquanto dada condição for verdadeira.
    
  * A condição é testada antes do próximo ciclo.
  
+ Loop do/while

  * Idêntico ao loop while, mas testa a condição
    após o último ciclo.
  
+ Loop for

  * Executa um grupo de instruções de forma controlada
    por três expressões.
    
  * Dado um valor inicial e uma condição, executa um
    ciclo de instruções, opera a terceira expressão e
    faz uma nova avaliação da condição para decidir
    se haverá outro ciclo.


## 3 - Olá, você!

+ Dois programas mínimos em C:



* sucesso.c

: int main() {
:    return 0;
: }



* erro.c

: int main() {
:    return 1;
: }

## 3.1 - Escrevendo na saída padrão

+ Vamos prceisar do cabeçalho 'stdio.h'...


* ola-mundo.c

: #include <stdio.h>

: int main() {
    
:     puts("Olá, mundo!");
   
:     return 0;
: }

## 3.2 - Recebendo argumentos da linha de comando

+ Precisamos preparar a função main() para receber
+ argumentos vindos da linha de comando...



: #include <stdio.h>

: int main(int argc, char *argv[]) {
    
:     printf("Olá, %s!\\n", argv[1]);
    
:     return 0;
: }


