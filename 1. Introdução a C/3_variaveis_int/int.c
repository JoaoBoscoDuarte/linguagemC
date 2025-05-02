#include <stdio.h>
#include <limits.h>

int main(void) {
  // valor inteiro considerando o sinal (signed) 
  int i = INT_MAX;
  printf("O tamanho de i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i * 8);
  printf("O valor de i: %d\n");

  // valor inteiro sem considerar o sinal (unsigned)
  unsigned int j = UINT_MAX;

  printf("O tamanho de j (int): %zu bytes / %zu bits\n", sizeof j, sizeof j * 8);
  printf("O valor de j: %u\n");
  // observe o uso do %u, usado para referenciar os inteiros sem sinal
  
  return 0;
}
