#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Atividade {
    string nome;
    int inicio;
    int fim;
};

bool compararPorFim(Atividade a, Atividade b) {
    return a.fim < b.fim;
}

int main() {
    vector<Atividade> atividades = {
        {"A1", 1, 4},
        {"A2", 3, 5},
        {"A3", 0, 6},
        {"A4", 5, 7},
        {"A5", 3, 9},
        {"A6", 5, 9},
        {"A7", 6, 10},
        {"A8", 8, 11},
        {"A9", 8, 12},
        {"A10", 2, 14},
        {"A11", 12, 16}
    };

    sort(atividades.begin(), atividades.end(), compararPorFim);

    vector<Atividade> selecionadas;

    int ultimoFim = -1;

    for (int i = 0; i < atividades.size(); i++) {

        if (atividades[i].inicio >= ultimoFim) {
            selecionadas.push_back(atividades[i]);
            ultimoFim = atividades[i].fim;
        }
    }

    cout << "Atividades selecionadas:" << endl;

    for (int i = 0; i < selecionadas.size(); i++) {
        cout << selecionadas[i].nome
             << " | Inicio: " << selecionadas[i].inicio
             << " | Fim: " << selecionadas[i].fim
             << endl;
    }

    cout << endl;
    cout << "Complexidade do algoritmo:" << endl;
    cout << "Ordenacao: O(n log n)" << endl;
    cout << "Selecao: O(n)" << endl;
    cout << "Total: O(n log n)" << endl;

    return 0;
}