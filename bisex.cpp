#include <iostream>

using namespace std;

int main() {

    //Leitura do ano desejado
    int ano;
    int continuar = 0;

    while(continuar == 0){

        cout << "Digite o ano que você deseja saber se é bi: " << endl;
        cin >> ano;

        //É ou não é?
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {

            cout << "O ano é bissexto, parabéns pelo dia a mais para sofrer" << endl;
        }
        else {
            cout << "O ano não é bissexto, um dia a menos para você terminar suas demandas!" << endl;
        }
        
        cout << "Deseja continuar? (1 para finalizar, 0 para repetir)";
        cin >> continuar;
    }
    
    if (continuar == 1) {
        return 0;
    }
}