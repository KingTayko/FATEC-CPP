#include <iostream>
using namespace std;

int main()
{
	int a, b, c, x1, x2, delta;

	cout << "Informe a, b e c: " << endl;
	cin >> a >> b >> c;

	delta = (b * b) - 4 * a * c;

	x1 = ((-b) + sqrt(delta)) / 2 * a;

	x2 = ((-b) - sqrt(delta)) / 2 * a;

	cout << "X1: " << x1 << "\n" << "X2: " << x2 << endl;

	return 0;
}


