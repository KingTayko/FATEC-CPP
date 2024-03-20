#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int nums[4], aux, soma = 0, med = 0;

	for (int i = 0; i < 4; i++) {
		cout << "Digite o " << (i + 1) << " numero: ";
		cin >> nums[i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (nums[i] > nums[j]) {
				aux = nums[i];
				nums[i] = nums[j];
				nums[j] = aux;
			}
		}	
	}

	for (int i = 0; i < 4; i++) {
		soma += nums[i];
		med = soma / 4;
	}

	cout << "O menor numero digitado e: " << nums[3] << endl;
	cout << "O maior numero digitado e: " << nums[0] << endl;
	cout << "A media aritmetica dos numeros e: " << med << endl;

	return 0;
}