// Função padrão da biblioteca de entrada e saída
#include <stdio.h>

// Função principal do código, do tipo inteiro e não receba nada pelo parâmetro
int main(void) {
  // Definindo uma variável do tipo int
  int ret = 0;
  ret = printf("Mensagem vai ser exibida\n");
  printf("A mensagem anterior tem: %d caracteres\n", ret);
  // O caractere \n também foi contado ao total de caracteres do printf

  return 0; // Se esse retorno for diferente de 0, vai ser um erro
}

// Para compilar um arquivo em c:
// gcc -o nomeQueVoceQuer nomeDoArquivo.c
// ./nomeQueVoceQuer
//
// Exemplo:
//
//gcc -o hello hello.c
//./hello
