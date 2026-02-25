package complexidade.aula02;

/**
 * Aula 2 - Crescimento de Funções (Big-O)
 * O(2ⁿ) — Exponencial
 *
 * O número de operações dobra a cada novo elemento.
 * Extremamente lento.
 * Exemplo: Fibonacci recursivo (versão ingênua).
 */
public class Aula02_06_O2N_Exponencial {
    public static int fib(int n) {
        if (n <= 1) return n;
        return fib(n - 1) + fib(n - 2);
    }

    public static void main(String[] args) {
        int n = 10;
        System.out.println("fib(" + n + ") = " + fib(n));

        // n = 10 → ~1.000 chamadas
        // n = 30 → ~1.000.000 chamadas
        // Fica inviável rapidamente
        // Cada chamada gera duas novas chamadas
    }
}
