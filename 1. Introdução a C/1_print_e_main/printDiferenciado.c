#include <stdio.h>

int main(void) {
  int ret = 0;

  printf("papobinario.com.br\n");

  printf("%c", 10); 
  //Imprime uma linha vazia; O %c exibe um caractere, 10 equivale a \n em ASCII

  printf("%x - %x - %x = %c\n", ret, 10, 0xa, 0x41);
  // %x imprime valores exadecimais, portanto:
  // ret -> 0
  // 10 -> 0xa (0x significa que o número é hexadecimal) (10 em decimal é A)
  // 0xa -> 10 em decimal (no print está %x, logo, será exibido "a")
  // 0x41 -> 41 (em hexadecimal é 65, no print está c, logo, vai exibir o correspondente de 65 em ASCII, que é a letra "A")

  return 0;
}

