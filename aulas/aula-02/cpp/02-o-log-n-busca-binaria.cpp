/**
 * Aula 2 - Crescimento de Funções (Big-O)
 * O(log n) — Logarítmico
 *
 * A cada passo, reduz o problema pela metade.
 * Cresce muito devagar.
 * Exemplo clássico: busca binária.
 */

#include <iostream>
using namespace std;

int buscaBinaria(const int arr[], int n, int target) {
    int inicio = 0, fim = n - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (arr[meio] == target) return meio;
        if (arr[meio] < target)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int n = 8;
    int target = 7;
    int idx = buscaBinaria(arr, n, target);
    if (idx >= 0)
        cout << "Encontrado no indice " << idx << endl;
    else
        cout << "Nao encontrado" << endl;

    // n = 8 → 3 passos
    // n = 1024 → 10 passos
    // Muito eficiente

    return 0;
}
