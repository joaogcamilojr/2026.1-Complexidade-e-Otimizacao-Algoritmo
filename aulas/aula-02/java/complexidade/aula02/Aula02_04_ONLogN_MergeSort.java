package complexidade.aula02;

import java.util.Arrays;

/**
 * Aula 2 - Crescimento de Funções (Big-O)
 * O(n log n) — Linear Logarítmico
 *
 * Mistura de percorrer todos os dados + dividir o problema.
 * Muito comum em algoritmos eficientes.
 * Exemplo: Merge Sort.
 */
public class Aula02_04_ONLogN_MergeSort {

    public static void merge(int[] arr, int[] left, int[] right) {
        int i = 0, j = 0, k = 0;
        while (i < left.length && j < right.length) {
            if (left[i] <= right[j])
                arr[k++] = left[i++];
            else
                arr[k++] = right[j++];
        }
        while (i < left.length) arr[k++] = left[i++];
        while (j < right.length) arr[k++] = right[j++];
    }

    public static void mergeSort(int[] arr) {
        if (arr.length < 2) return;

        int mid = arr.length / 2;
        int[] left = Arrays.copyOfRange(arr, 0, mid);
        int[] right = Arrays.copyOfRange(arr, mid, arr.length);

        mergeSort(left);
        mergeSort(right);
        merge(arr, left, right);
    }

    public static void main(String[] args) {
        int[] arr = {38, 27, 43, 3, 9, 82, 10};
        mergeSort(arr);
        System.out.println(Arrays.toString(arr));

        // Melhor que O(n²), pior que O(n)
        // Ótimo para grandes volumes
    }
}
