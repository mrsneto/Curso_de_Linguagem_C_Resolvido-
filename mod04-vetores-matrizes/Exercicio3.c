#include <stdio.h>

/*
@author leo neto
3) Escrever um programa que le um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1o elemento com o ultimo, o 2o com o penultimo, ... ate o 10o com o 11o. Imprima o vetor N
modificado.
*/

int main() {
    int N[20], temp;

    printf("Digite 20 numeros inteiros:\n");
    for(int i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }

    printf("\nVetor original:\n");
    for(int i = 0; i < 20; i++) {
        printf("%d ", N[i]);
    }

    for(int i = 0; i < 10; i++) {
        temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    printf("\n\nVetor modificado:\n");
    for(int i = 0; i < 20; i++) {
        printf("%d ", N[i]);
    }

    printf("\n");

    return 0;
}
