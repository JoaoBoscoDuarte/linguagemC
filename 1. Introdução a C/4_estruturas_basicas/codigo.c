#include <stdio.h>
#include <stdbool.h>

// Protótipos das funções
void remover();
void adiciona();
void deleta();
void ler();

int main(void) {
  typedef struct {
    char nome[50];
    int idade;
    long int telefone;
  } Pessoa;

  Pessoa pessoa[20];

  printf("Seja bem vindo ao sistema de teste\n");
  printf("[1] Adicionar pessoa\n");
  printf("[2] Remover pessoa\n");
  printf("[3] Modifica pessoa\n");
  printf("[4] Listar pessoas\n");

  int escolha;

  boolean continuar = true;
  while (continuar) {
    printf("Escolha uma das opções:\n");
    scanf("%i", &escolha);
    printf("Opção escolhida: %i\n", escolha);
    adiciona();
  }

  remover();
  adiciona();
  deleta();
  ler();

  return 0;
}

void remover() {
  printf("Removendo\n");
}

void adiciona() {
  printf("Opção escolhida: %i\n", escolha);
  int qtd, boolean continuar;

  while(continuar) {
    printf("Quantas pessoas deseja adicionar? ");
    scanf("%", qtd);

    if (qtd > 20) {
      printf("Quantidade inválida. O máximo é de 20 pessoas.");
      printf("Tente novamente");

    } else if (qtd <= 0) {
      printf("Opção inválida. Entrada deve ser maior que 0.");
      printf("Tente novamente");

    } else {
      continuar = false;
    }
  }
}

void deleta() {
  printf("Deleta\n");
}

void ler() {
  printf("Ler\n");
}