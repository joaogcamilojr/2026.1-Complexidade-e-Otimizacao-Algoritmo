#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        cout << "\n--- ITERAÇÃO " << i << " ---" << endl;
        cout << "Elemento atual (key): " << key << endl;

        while (j >= 0 && arr[j] > key) {
            cout << "Comparando " << arr[j] << " > " << key << " -> desloca" << endl;
            arr[j + 1] = arr[j];
            j--;
        }

        cout << "Inserindo " << key << " na posição " << j + 1 << endl;
        arr[j + 1] = key;

        cout << "Estado do vetor: ";
        printArray(arr, n);
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Vetor original: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "\nVetor final ordenado: ";
    printArray(arr, n);

    return 0;
}