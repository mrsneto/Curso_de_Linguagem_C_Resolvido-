#include <stdio.h>

/**
 * @author leo neto
 *
 * 4) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
 * 
 * Restrição:
 * → O bloco de repetição deve executar no máximo 500 vezes.
 */

int main() {
    int soma = 0;

    // Começa em 1 (ímpar) e vai até 999, pulando de 2 em 2
    for(int i = 1; i < 1000; i += 2) {
        soma += i;
    }

    printf("A soma dos números ímpares de 1 a 1000 é: %d\n", soma);

    return 0;
}
