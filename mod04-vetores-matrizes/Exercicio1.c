#include <stdio.h>

/*
@author leo neto
1) Faca um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuario.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.
*/

int main() {
    int valores[10];
    int quadrado[10];

    printf("Digite 10 valores inteiros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
        quadrado[i] = valores[i] * valores[i];
    }

    printf("\nValores originais: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", valores[i]);
    }

    printf("\nQuadrados dos valores: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", quadrado[i]);
    }

    printf("\n");

    return 0;
}
