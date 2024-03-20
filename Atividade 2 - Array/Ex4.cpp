#include <iostream>
#include <cstring> 
using namespace std;

int main() {
	int v[10], w[10] = {1,1,1,1,1,1,1,1,1,1};

	for (int i = 0; i < 10; i++) {
		cout << "Digite o " << (i + 1) << "o numero: ";
		cin >> v[i];

		for (int j = v[i]; j >= 1; j--) {
			cout << j << endl;
			w[i] *= j;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << "Resultado: " << w[i] << endl;
	}
	return 0;
}


