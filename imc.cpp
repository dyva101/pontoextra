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

    // Determinação da classificação
  if (imc < 17) {
    classificacao = "Muito Abaixo do Peso (que nem eu)";
  } else if (imc < 18.5) {
    classificacao = "Abaixo do peso";
  } else if (imc < 25) {
    classificacao = "Peso normal";
  } else if (imc < 30) {
    classificacao = "Acima do peso";
  } else if (imc < 35) {
    classificacao = "Obesidade";
  } else if (imc < 40) {
    classificacao = "Obesidade Severa";
  } else {
    classificacao = "Obesidade Mórbida";
  }

  // Exibição do IMC e classificação
  cout << "Seu IMC é " << fixed << imc << " e você está " << classificacao << "." << endl;

  return 0;
}