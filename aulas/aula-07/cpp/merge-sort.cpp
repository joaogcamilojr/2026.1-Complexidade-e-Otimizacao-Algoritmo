#include <iostream>
using namespace std;

void printArray(int arr[], int left, int right) {
    cout << "[";
    for (int i = left; i <= right; i++) {
        cout << arr[i];
        if (i < right) cout << ", ";
    }
    cout << "]";
}

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    cout << "\n--- MERGE ---" << endl;
    cout << "Esquerda: [";
    for (int i = 0; i < n1; i++) {
        cout << L[i];
        if (i < n1 - 1) cout << ", ";
    }
    cout << "]" << endl;

    cout << "Direita:  [";
    for (int j = 0; j < n2; j++) {
        cout << R[j];
        if (j < n2 - 1) cout << ", ";
    }
    cout << "]" << endl;

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        cout << "Comparando " << L[i] << " e " << R[j] << endl;

        if (L[i] <= R[j]) {
            arr[k] = L[i];
            cout << "-> " << L[i] << " entra no vetor" << endl;
            i++;
        } else {
            arr[k] = R[j];
            cout << "-> " << R[j] << " entra no vetor" << endl;
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        cout << "Restante esquerda -> " << L[i] << " entra no vetor" << endl;
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        cout << "Restante direita -> " << R[j] << " entra no vetor" << endl;
        j++;
        k++;
    }

    cout << "Resultado do merge: ";
    printArray(arr, left, right);
    cout << endl;

    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        cout << "\nDividindo vetor ";
        printArray(arr, left, right);
        cout << " em:" << endl;

        cout << "  Esquerda: ";
        printArray(arr, left, mid);
        cout << endl;

        cout << "  Direita:  ";
        printArray(arr, mid + 1, right);
        cout << endl;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Vetor original: ";
    printArray(arr, 0, n - 1);
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "\nVetor ordenado final: ";
    printArray(arr, 0, n - 1);
    cout << endl;

    return 0;
}