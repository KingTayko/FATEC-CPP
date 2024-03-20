#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Digite um numero: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Numero par!" << endl;
    }
    else {
        cout << "Numero impar!" << endl;
    }
    return 0;
}