#include <iostream>
using namespace std;

int main() {

	int angulos[3], soma = 0;

	for (int i = 0; i < 3; i++) {
		cout << "Digite o " << (i+1) << " angulo de um triangulo: " << endl;
		cin >> angulos[i];

		soma += angulos[i];
	}

	if (angulos[0] == 60 && angulos[1] == 60 && angulos[2] == 60) {
		cout << "Triangulo Equilatero" << endl;
	}
	else if (angulos[0] == angulos[1] && angulos[0] != angulos[2] || angulos[0] == angulos[2] && angulos[0] != angulos[1]) {
		cout << "Triangulo Isosceles" << endl;
	}
	else if (angulos[0] != angulos[1] && angulos[1] != angulos[2] && angulos[2] != angulos[0]) {
		cout << "Triangulo Escaleno" << endl;
	}
	else if (soma > 180) {
		cout << "Digite angulos validos...";
	}
	return 0;
}