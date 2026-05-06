#include <iostream>
using namespace std;

void imprimirArray(int arr[], int inicio, int fim) {
    cout << "[ ";
    for (int i = inicio; i <= fim; i++) {
        cout << arr[i] << " ";
    }
    cout << "]";
}

void intercalar(int arr[], int esquerda, int meio, int direita) {
    cout << "\nIntercalando: ";
    imprimirArray(arr, esquerda, direita);
    cout << endl;

    int tamanhoEsquerda = meio - esquerda + 1;
    int tamanhoDireita = direita - meio;

    int esquerdaArr[tamanhoEsquerda];
    int direitaArr[tamanhoDireita];

    for (int i = 0; i < tamanhoEsquerda; i++)
        esquerdaArr[i] = arr[esquerda + i];

    for (int j = 0; j < tamanhoDireita; j++)
        direitaArr[j] = arr[meio + 1 + j];

    int i = 0, j = 0, k = esquerda;

    while (i < tamanhoEsquerda && j < tamanhoDireita) {
        if (esquerdaArr[i] <= direitaArr[j]) {
            arr[k] = esquerdaArr[i];
            i++;
        } else {
            arr[k] = direitaArr[j];
            j++;
        }
        k++;
    }

    while (i < tamanhoEsquerda) {
        arr[k] = esquerdaArr[i];
        i++;
        k++;
    }

    while (j < tamanhoDireita) {
        arr[k] = direitaArr[j];
        j++;
        k++;
    }

    cout << "Resultado: ";
    imprimirArray(arr, esquerda, direita);
    cout << endl;
}

// Merge Sort com logs
void mergeSort(int arr[], int esquerda, int direita, int nivel = 0) {
    // Identação para visualizar níveis da recursão
    string indent = string(nivel * 2, ' ');

    cout << indent << "Chamando mergeSort(" << esquerda << ", " << direita << ") ";
    imprimirArray(arr, esquerda, direita);
    cout << endl;

    if (esquerda < direita) {
        int meio = (esquerda + direita) / 2;

        cout << indent << "Dividindo em:\n";
        cout << indent << "   Esquerda: ";
        imprimirArray(arr, esquerda, meio);
        cout << endl;

        cout << indent << "   Direita: ";
        imprimirArray(arr, meio + 1, direita);
        cout << endl;

        // Recursão
        mergeSort(arr, esquerda, meio, nivel + 1);
        mergeSort(arr, meio + 1, direita, nivel + 1);

        // Intercala
        intercalar(arr, esquerda, meio, direita);
    } else {
        cout << indent << "Caso base atingido\n";
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    cout << "Array original:\n";
    imprimirArray(arr, 0, tamanho - 1);
    cout << "\n\n";

    mergeSort(arr, 0, tamanho - 1);

    cout << "\n\n🎯 Array final ordenado:\n";
    imprimirArray(arr, 0, tamanho - 1);
    cout << endl;

    return 0;
}