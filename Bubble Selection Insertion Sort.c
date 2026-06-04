#include <stdio.h>

void bubbleSort(int v[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int v[], int n) {
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (v[j] < v[min]) {
                min = j;
            }
        }

        temp = v[i];
        v[i] = v[min];
        v[min] = temp;
    }
}

void insertionSort(int v[], int n) {
    int i, chave, j;

    for (i = 1; i < n; i++) {
        chave = v[i];
        j = i - 1;

        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = chave;
    }
}

void imprimir(int v[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {

    int vetor[] = {64, 25, 12, 22, 11};
    int n = 5;
    int opcao;
    int numero, encontrado = 0;

    printf("Vetor Original:\n");
    imprimir(vetor, n);

    printf("\nEscolha o algoritmo de ordenacao:\n");
    printf("1 - Bubble Sort\n");
    printf("2 - Selection Sort\n");
    printf("3 - Insertion Sort\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            bubbleSort(vetor, n);
            printf("\nBubble Sort Executado!\n");
            break;

        case 2:
            selectionSort(vetor, n);
            printf("\nSelection Sort Executado!\n");
            break;

        case 3:
            insertionSort(vetor, n);
            printf("\nInsertion Sort Executado!\n");
            break;

        default:
            printf("\nOpcao invalida!\n");
            return 1;
    }

    printf("\nVetor Ordenado:\n");
    imprimir(vetor, n);

    printf("\nDigite o numero que deseja procurar: ");
    scanf("%d", &numero);

    for (int i = 0; i < n; i++) {
        if (vetor[i] == numero) {
            encontrado = 1;
            printf("Numero %d encontrado na posicao %d.\n", numero, i);
            break;
        }
    }

    if (!encontrado) {
        printf("Numero %d nao encontrado no vetor.\n", numero);
    }

    return 0;
}