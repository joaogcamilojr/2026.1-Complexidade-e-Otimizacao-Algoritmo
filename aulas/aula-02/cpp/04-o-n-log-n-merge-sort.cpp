/**
 * Aula 2 - Crescimento de Funções (Big-O)
 * O(n log n) — Linear Logarítmico
 *
 * Mistura de percorrer todos os dados + dividir o problema.
 * Muito comum em algoritmos eficientes.
 * Exemplo: Merge Sort.
 */

#include <iostream>
using namespace std;

void merge(int arr[], int left[], int nL, int right[], int nR) {
    int i = 0, j = 0, k = 0;
    while (i < nL && j < nR) {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < nL) arr[k++] = left[i++];
    while (j < nR) arr[k++] = right[j++];
}

void mergeSort(int arr[], int n) {
    if (n < 2) return;

    int mid = n / 2;
    int* left = new int[mid];
    int* right = new int[n - mid];
    for (int i = 0; i < mid; i++) left[i] = arr[i];
    for (int i = mid; i < n; i++) right[i - mid] = arr[i];

    mergeSort(left, mid);
    mergeSort(right, n - mid);
    merge(arr, left, mid, right, n - mid);

    delete[] left;
    delete[] right;
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;
    mergeSort(arr, n);

    cout << "[";
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << ", ";
        cout << arr[i];
    }
    cout << "]" << endl;

    // Melhor que O(n²), pior que O(n)
    // Ótimo para grandes volumes

    return 0;
}
