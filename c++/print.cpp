#include <iostream>

int main()
{
  std::cout << "Imprimindo o famoso HELLO WORLD!!!\n";

  // imprimindo uma linha usando múltiplos comandos
  std::cout << "Teste com ";
  std::cout << "dois couts\n";

  // usando o manipulador endl
  // endl gera um caractere nova linha, e também descarrega o buffer de saída
  std::cout << "Escrevendo uma linha..." << endl;

  std::cout << "Mais uma vez...\n";
  std::cout << flush;    // agora apenas esvaziando o buffer de saída, sem gerar nova linha

  return 0;
}
