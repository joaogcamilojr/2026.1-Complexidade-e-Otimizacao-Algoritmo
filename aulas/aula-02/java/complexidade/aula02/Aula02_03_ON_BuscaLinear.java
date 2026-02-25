package complexidade.aula02;

/**
 * Aula 2 - Crescimento de Funções (Big-O)
 * O(n) — Linear
 *
 * O tempo cresce proporcionalmente ao tamanho da entrada.
 * Exemplo: busca linear.
 */
public class Aula02_03_ON_BuscaLinear {
    public static int buscaLinear(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) return i;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40, 50};
        int target = 30;
        int idx = buscaLinear(arr, target);
        System.out.println(idx >= 0 ? "Encontrado no indice " + idx : "Nao encontrado");

        // n = 10 → 10 passos
        // n = 1_000_000 → 1_000_000 passos
        // Cresce direto
    }
}
