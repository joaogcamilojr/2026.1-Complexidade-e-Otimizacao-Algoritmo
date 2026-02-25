package complexidade.aula02;

/**
 * Aula 2 - Crescimento de Funções (Big-O)
 * O(log n) — Logarítmico
 *
 * A cada passo, reduz o problema pela metade.
 * Cresce muito devagar.
 * Exemplo clássico: busca binária.
 */
public class Aula02_02_OLogN_BuscaBinaria {
    public static int buscaBinaria(int[] arr, int target) {
        int inicio = 0, fim = arr.length - 1;

        while (inicio <= fim) {
            int meio = (inicio + fim) / 2;

            if (arr[meio] == target) return meio;
            else if (arr[meio] < target) inicio = meio + 1;
            else fim = meio - 1;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {1, 3, 5, 7, 9, 11, 13, 15};
        int target = 7;
        int idx = buscaBinaria(arr, target);
        System.out.println(idx >= 0 ? "Encontrado no indice " + idx : "Nao encontrado");

        // n = 8 → 3 passos
        // n = 1024 → 10 passos
        // Muito eficiente
    }
}
