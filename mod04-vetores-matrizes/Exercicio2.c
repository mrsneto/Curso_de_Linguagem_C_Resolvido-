#include <stdio.h>

/**
* @author leo neto
*
* 2) Faca um programa que some o conteudo de dois vetores de tamanho 25 e armazene o resultado
* em um terceiro vetor. Imprima os tres vetores na tela.
*/

int main() {
    int valores_vetor1[25], valores_vetor2[25], totalSoma_vetor3[25];

    printf("Digite os 25 valores do primeiro vetor:\n");
    for(int i = 0; i < 25; i++) {
        scanf("%d", &valores_vetor1[i]);
    }

    printf("Digite os 25 valores do segundo vetor:\n");
    for(int i = 0; i < 25; i++) {
        scanf("%d", &valores_vetor2[i]);
    }

    // Calculo do terceiro vetor
    for(int i = 0; i < 25; i++) {
        totalSoma_vetor3[i] = valores_vetor1[i] + valores_vetor2[i];
    }

    // Impressao dos vetores
    printf("\nVetor 1: ");
    for(int i = 0; i < 25; i++) {
        printf("%d ", valores_vetor1[i]);
    }

    printf("\nVetor 2: ");
    for(int i = 0; i < 25; i++) {
        printf("%d ", valores_vetor2[i]);
    }

    printf("\nSoma dos vetores (Vetor 3): ");
    for(int i = 0; i < 25; i++) {
        printf("%d ", totalSoma_vetor3[i]);
    }

    printf("\n");

    return 0;
}
