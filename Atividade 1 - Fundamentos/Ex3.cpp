#include <iostream>
using namespace std;


int main()
{
    int b, h, a;

    cout << "Informe a base(b) do triangulo: ";
    cin >> b;

    cout << "Informe a altura(h) do triangulo: ";
    cin >> h;

    a = (b * h) / 2;

    cout << "Area do triangulo: " << a;
}