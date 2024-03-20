#include <iostream>
#include <cstring> 

using namespace std;

int main() {

        int array[12], aux, menor = 10000, maior = 0, par = 0, soma = 0;

        for (int i = 0; i < 12; i++) {
            cout << "Digite o " << (i + 1) << " numero: ";
            cin >> array[i];

            aux = array[i];

            if (aux < menor) {
                menor = array[i];
            }
            else if (aux >= maior) {
                maior = array[i];
            }

            if (array[i] % 2 == 0) {
                par += 1;

            }
            soma += array[i];
        }

        cout << endl;
        cout << "Menor numero digitado: " << menor << endl;
        cout << "Maior numero digitado: " << maior << endl;


        if (par < 3) {
            cout << endl;
            cout << "Menos 25% dos numeros digitados e par!" << endl;
        }
        else if (par > 3 && par <= 6) {
            cout << endl;
            cout << "Aproximadamente 50% dos numeros digitados e par!" << endl;
        }
        else {
            cout << endl;   
            cout << "Mais de 50% dos numeros digitados e par!" << endl;
        }

        cout << endl;
        cout << "Media: " << soma/12 << endl;

        return 0;
}



