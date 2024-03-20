#include <iostream>
using namespace std;

int main()
{
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade <= 11) {
        cout << "Crianca" << endl;
    }
    else if (idade >= 12 && idade <= 17) {
        cout << "Adolescente" << endl;
    }
    else if (idade >= 18 && idade <= 49) {
        cout << "Adulto" << endl;
    }
    else {
        cout << "Idoso" << endl;
    }

}