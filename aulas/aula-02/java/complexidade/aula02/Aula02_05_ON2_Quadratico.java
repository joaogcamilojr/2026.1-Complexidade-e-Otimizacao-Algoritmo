package complexidade.aula02;

/**
 * Aula 2 - Crescimento de Funções (Big-O)
 * O(n²) — Quadrático
 *
 * Cada elemento precisa interagir com todos os outros.
 * Cresce muito rápido.
 * Exemplo: dois loops aninhados.
 */
public class Aula02_05_ON2_Quadratico {
    public static void main(String[] args) {
        int n = 4;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.println(i + " " + j);
            }
        }

        // n = 10 → 100 operações
        // n = 1_000 → 1_000_000 operações
        // Explode rápido
    }
}
