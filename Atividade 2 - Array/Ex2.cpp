#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int array[100], soma = 0;
	bool flag = false;

	for (int i = 0; i < 100; i++) {

		cout << "Digite o " << (i + 1) << " numero: ";
		cin >> array[i];

		if (array[i] == 0) {
			break;
		}
	}

	for (int i = 0; i < 99; i++) {

		if (array[i] == 0) {
			break;
		}
		if (array[1] == 0) {
			cout << "Nao houve numeros iguais" << endl;
			flag = true;
			break;
		}
		if (array[i] == array[(i + 1)]) {
			soma++;
		}

	}
	if (flag == false) {
		cout << "Numero(s) igual(is) ao ultimo: " << soma << endl;
	}
	return 0;
}
