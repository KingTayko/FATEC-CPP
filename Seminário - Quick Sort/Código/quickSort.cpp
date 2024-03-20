#include <iostream>
using namespace std;

int escolherPivot(int vetor[], int inicio, int fim, int valorPivot) {
    for (int i = inicio;i <= fim;i++) {
        if (vetor[i] == valorPivot) {
            swap(vetor[i], vetor[fim]);
            break;
        }
    }
    return fim;
}

void quicksort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int valorPivot = vetor[fim];
        int indiceVetor = escolherPivot(vetor, inicio, fim, valorPivot);

        int i = inicio;
        for (int j = inicio;j < fim;j++) {
            if (vetor[j] < valorPivot) {
                swap(vetor[i], vetor[j]);
                i++;
            }
        }
        swap(vetor[i], vetor[indiceVetor]);

        quicksort(vetor, inicio, i - 1);
        quicksort(vetor, i + 1, fim);
    }
}

int main()
{
    int tamanho = 0;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int vetor[tamanho];
    cout << "Digite os elementos do array: ";
    for (int i = 0;i < tamanho;i++) {
        cin >> vetor[i];
    }

    cout << "\nVetor criado: ";
    for (int i = 0;i < tamanho;i++) {
        cout << vetor[i] << " ";
    }

    int valorPivot;
    cout << "\nDigite o valor do pivot: ";
    cin >> valorPivot;

    quicksort(vetor, 0, tamanho - 1);

    cout << "\nVetor ordenado: ";
    for (int i = 0;i < tamanho;i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}
