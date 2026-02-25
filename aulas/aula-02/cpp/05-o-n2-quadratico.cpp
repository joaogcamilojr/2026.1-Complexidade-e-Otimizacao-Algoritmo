/**
 * Aula 2 - Crescimento de Funções (Big-O)
 * O(n²) — Quadrático
 *
 * Cada elemento precisa interagir com todos os outros.
 * Cresce muito rápido.
 * Exemplo: dois loops aninhados.
 */

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << " " << j << endl;
        }
    }

    // n = 10 → 100 operações
    // n = 1.000 → 1.000.000 operações
    // Explode rápido

    return 0;
}
