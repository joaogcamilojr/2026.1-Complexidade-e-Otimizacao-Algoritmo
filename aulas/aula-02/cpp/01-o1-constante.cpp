/**
 * Aula 2 - Crescimento de Funções (Big-O)
 * O(1) — Tempo Constante
 *
 * O tempo não depende do tamanho da entrada.
 * Sempre executa em tempo fixo.
 * Exemplo: acessar um elemento de um vetor.
 */

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    // Acesso direto por índice — 1 operação, independente de n
    cout << arr[2] << endl;  // 30

    // n = 10 → 1 operação
    // n = 1.000.000 → 1 operação
    // Sempre igual

    return 0;
}
