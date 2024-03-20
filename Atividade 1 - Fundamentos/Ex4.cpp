#include <iostream>
using namespace std;

int main()
{
    int bMaior, bMenor, h, a;

    cout << "Informe a base menor (b) do trapezio: ";
    cin >> bMenor;

    cout << "Informe a base maior (B) do trapezio: ";
    cin >> bMaior;

    cout << "Informe a altura (h) do trapezio: ";
    cin >> h;

    a = (bMaior + bMenor) * h / 2;

    cout << "Area do trapezio: " << a;
}