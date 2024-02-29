#include <iostream>

using namespace std;

int main() {
  float peso, altura, imc;
  string classificacao;

  // Leitura do peso e altura
  cout << "Digite seu peso em kg: ";
  cin >> peso;
  cout << "Digite sua altura em metros: ";
  cin >> altura;

  // Cálculo do IMC
  imc = peso / (altura * altura);

  return 0;
}