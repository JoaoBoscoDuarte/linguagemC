#include <iostream>
using namespace std;
int main()
{
  cout << "Imprimindo o famoso HELLO WORLD!!!\n";

  // imprimindo uma linha usando múltiplos comandos
  cout << "Teste com ";
  cout << "dois couts\n";

  // usando o manipulador endl
  // endl gera um caractere nova linha, e também descarrega o buffer de saída
  cout << "Escrevendo uma linha..." << endl;

  cout << "Mais uma vez...\n";
  cout << flush;    // agora apenas esvaziando o buffer de saída, sem gerar nova linha

  return 0;
}
