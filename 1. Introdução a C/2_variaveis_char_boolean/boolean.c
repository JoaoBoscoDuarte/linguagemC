#include <stdio.h>
#include <stdbool.h> // Permite trabalhar com booleanos

int main(void) {
  bool b;

  // O tamnho de um valor booleano na memória é também em bytes
  printf("O tamanho de b (bool) é: %lu\n", sizeof b);

  b = false;
  printf("O valor de b eh: %i\n", b);

  return 0;
}
