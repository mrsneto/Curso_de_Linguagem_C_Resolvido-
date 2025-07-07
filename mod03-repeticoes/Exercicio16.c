#include <stdio.h>

/**
 * @author leo neto
 *
 * 16) Faça um programa para encontrar o menor número inteiro que seja divisível por todos os
 * números inteiros entre 1 e 10.
 */


int mdc(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int mmc(int a, int b) {
    return (a / mdc(a, b)) * b;
}

int main() {
    int resultado = 1;

    for(int i = 1; i <= 10; i++) {
        resultado = mmc(resultado, i);
    }

    printf("O menor número divisível por todos os números de 1 a 10 é: %d\n", resultado);

    return 0;
}
