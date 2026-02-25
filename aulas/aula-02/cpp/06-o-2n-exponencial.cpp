/**
 * Aula 2 - Crescimento de Funções (Big-O)
 * O(2ⁿ) — Exponencial
 *
 * O número de operações dobra a cada novo elemento.
 * Extremamente lento.
 * Exemplo: Fibonacci recursivo (versão ingênua).
 */

#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 10;
    cout << "fib(" << n << ") = " << fib(n) << endl;

    // n = 10 → ~1.000 chamadas
    // n = 30 → ~1.000.000 chamadas
    // Fica inviável rapidamente
    // Cada chamada gera duas novas chamadas

    return 0;
}
