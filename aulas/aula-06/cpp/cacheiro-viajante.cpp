#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    vector<string> cidades = {"A", "B", "C", "D", "E", "F"};

    int dist[6][4] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0},
        {30, 17, 23, 0},
        {40, 25, 32, 5}
    };

    vector<int> perm = {1, 2, 3, 4, 5}; // fixa A como início
    int melhorCusto = INT_MAX;
    vector<int> melhorRota;

    int totalRotas = 0;

    do {
        int custo = 0;
        int atual = 0; // A

        cout << "Rota: A";

        for (int i : perm) {
            custo += dist[atual][i];
            atual = i;
            cout << " -> " << cidades[i];
        }

        custo += dist[atual][0];
        cout << " -> A";
        cout << " | Custo: " << custo << endl;

        if (custo < melhorCusto) {
            melhorCusto = custo;
            melhorRota = perm;
        }

        totalRotas++;
    } while (next_permutation(perm.begin(), perm.end()));

    cout << "\nTotal de rotas testadas: " << totalRotas << endl;
    cout << "Melhor rota: A";
    for (int i : melhorRota) {
        cout << " -> " << cidades[i];
    }
    cout << " -> A" << endl;
    cout << "Menor custo: " << melhorCusto << endl;

    return 0;
}