
#include <stdio.h>
#include "funcoes.h"

int main(){

    int vetor[] = {8,3,5,2,9,1,4};
    int n = 7;

    printf("Vetor original:\n");
    for(int i=0;i<n;i++){
        printf("%d ",vetor[i]);
    }

    printf("\n\nOrdenando com Bubble Sort...\n");

    bubbleSort(vetor,n);

    printf("Vetor ordenado:\n");

    for(int i=0;i<n;i++){
        printf("%d ",vetor[i]);
    }

    return 0;
}
