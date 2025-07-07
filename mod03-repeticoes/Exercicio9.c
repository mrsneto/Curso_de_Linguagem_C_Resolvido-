#include <stdio.h>

/**
 * @author leo neto
 *
 * 9) Faça um programa que calcule o valor de A, dado por:
 * A = 1 + 2 + 3 + 4 + ... + n, onde n é um número inteiro, maior que zero informado pelo usuário.
 */

int main() {
    int n, soma = 0;

    // Leitura e validação de n
    do {
        printf("Digite um número inteiro maior que zero: ");
        scanf("%d", &n);

        if(n <= 0) {
            printf("Valor inválido! n deve ser maior que zero.\n");
        }

    } while(n <= 0);

    // Cálculo da soma de 1 até n
    for(int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("A soma de 1 até %d é: %d\n", n, soma);

    return 0;
}
