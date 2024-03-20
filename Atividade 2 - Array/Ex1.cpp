#include <iostream>

using namespace std;

int main() {

	int array[10];
	bool flag = false;

	for (int i = 0; i < 10; i++) {
		cout << "Digite o " << (i+1) << " numero inteiro positivo: " << endl;
		cin >> array[i];

		if (array[i] < 0) {
			cout << "Um numero negativo foi encontrado, tente novamente!" << endl;
			break;
		}
		if (i == 9) {
			cout << "O vetor foi completamente populado!" << endl;
			flag = true;
		}
	}
	cout << endl;

	if (flag == true) {
		for (int i = 0; i < 10; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
	return 0;
}