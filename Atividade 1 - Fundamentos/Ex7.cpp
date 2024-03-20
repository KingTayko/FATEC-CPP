#include <iostream>
using namespace std;

int main(){

	int ano;

	cout << "Informe um ano: ";
	cin >> ano;

	if (ano % 4 == 0 || ano % 400 == 0) {
		cout << "O ano informado e bissexto" << endl;
	}
	else {
		cout << "O ano informado nao e bissexto" << endl;
	}

	return 0;
}