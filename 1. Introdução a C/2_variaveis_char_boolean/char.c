#include <stdio.h>

int main(void) {
  char c;

  // sizeof retorna o tamanho de uma variável em bytes
  printf("O tamanho de c (char): %lu bytes / %lu bits\n", sizeof c, sizeof c *8);

  c = 10;
  printf("O valor de c é: %i", c);

  // também pode ser definido o valor do tipo char sem considerar o sinal de magnitude:
  // os valores normais de um char variam entre -128 - 127
  unsigned char d = 255;
  printf("O valor de d é: %i", d); 
  return 0;
}
