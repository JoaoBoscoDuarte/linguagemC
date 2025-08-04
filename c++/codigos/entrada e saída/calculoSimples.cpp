#include <iostream>
#include <ostream>

int main (int argc, char *argv[]) {
  int codigo1, codigo2, quantidade1, quantidade2;
  double valor1, valor2, calculo;

  std::cin >> codigo1 >> quantidade1 >> valor1;
  std::cin >> codigo2 >> quantidade2 >> valor2;

  calculo = quantidade1 * valor1 + quantidade2 * valor2;

  std::cout << std::fixed << std::setprecision(2);
  std::cout <<"VALOR A PAGAR: R$ " << calculo << std::endl;
  
  return 0;
}
