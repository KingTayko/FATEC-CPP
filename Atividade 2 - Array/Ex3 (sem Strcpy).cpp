#include <iostream>
#include <cstring> 
using namespace std;

int main() {

    char array[10];
    int n;

    cout << "Quantas letras tem seu primeiro nome: ";
    cin >> n;

    cout << "Soletre seu primeiro nome: " << "\n";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "\n";    
    for (int i = n - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}

