/**
 * Aula 2 - Crescimento de Funções (Big-O)
 * O(n) — Linear
 *
 * O tempo cresce proporcionalmente ao tamanho da entrada.
 * Exemplo: busca linear.
 */

#include <iostream>
using namespace std;

int buscaLinear(const int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 30;
    int idx = buscaLinear(arr, n, target);
    if (idx >= 0)
        cout << "Encontrado no indice " << idx << endl;
    else
        cout << "Nao encontrado" << endl;

    // n = 10 → 10 passos
    // n = 1.000.000 → 1.000.000 passos
    // Cresce direto

    return 0;
}
