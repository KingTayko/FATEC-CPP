#include <iostream>
#include <cstring> 
using namespace std;

int main() {

    const char origem[] = "Maria";  
    char destino[10]; 

    strcpy_s(destino, origem);

    cout << "Nome copiado: " << destino << endl;

    for (int i = 4; i >= 0; i--) {
        cout << destino[i] << " ";
    }
    cout << endl;
    return 0;
}

