#include <iostream>
#include <ctime>

using namespace std;

long long comparacoes;
long long movimentacoes;

void preencherDecrescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = tamanho - i;
    }
}

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            comparacoes++;
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                movimentacoes++;
            }
        }
    }
}

void selectionSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < tamanho; j++) {
            comparacoes++;
            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }
        if (menor != i) {
            int temp = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = temp;
            movimentacoes++;
        }
    }
}

void executar(void (*algoritmo)(int[], int), string nome, int tamanho) {
    int *vetor = new int[tamanho];

    preencherDecrescente(vetor, tamanho);

    comparacoes = 0;
    movimentacoes = 0;

    clock_t inicio = clock();
    algoritmo(vetor, tamanho);
    clock_t fim = clock();

    double tempo_ms = (double)(fim - inicio) * 1000 / CLOCKS_PER_SEC;

    cout << nome << "\t"
         << tamanho << "\t"
         << tempo_ms << "\t"
         << comparacoes << "\t"
         << movimentacoes << endl;

    delete[] vetor;
}

int main() {

    cout << "Algoritmo\tTamanho\tTempo(ms)\tComparacoes\tMovimentacoes" << endl;

    executar(bubbleSort, "Bubble Sort", 100);
    executar(bubbleSort, "Bubble Sort", 1000);
    executar(bubbleSort, "Bubble Sort", 10000);

    executar(selectionSort, "Selection Sort", 100);
    executar(selectionSort, "Selection Sort", 1000);
    executar(selectionSort, "Selection Sort", 10000);

    return 0;
}
