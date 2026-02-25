package complexidade.aula02;

/**
 * Aula 2 - Crescimento de Funções (Big-O)
 * O(1) — Tempo Constante
 *
 * O tempo não depende do tamanho da entrada.
 * Sempre executa em tempo fixo.
 * Exemplo: acessar um elemento de um vetor.
 */
public class Aula02_01_O1_Constante {
    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40};
        // Acesso direto por índice — 1 operação, independente de n
        System.out.println(arr[2]);  // 30

        // n = 10 → 1 operação
        // n = 1_000_000 → 1 operação
        // Sempre igual
    }
}
