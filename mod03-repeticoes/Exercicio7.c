#include <stdio.h>

/**
 * @author leo neto
 *
 * 7) Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
 * inclusive N, se for o caso.
 */

int main() {
    int N;

    printf("Digite um valor inteiro: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            printf("%d^2 = %d\n", i, i * i);
        }
    }

    return 0;
}
