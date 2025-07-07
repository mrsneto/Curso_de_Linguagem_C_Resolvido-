#include <stdio.h>

/**
 * @author leo neto
 *
 * 17) Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero)
 * o programa deve imprimir na tela quantos números positivos e negativos foram digitados.
 */

int main() {
    int num;
    int count_positivos = 0;
    int count_negativos = 0;

    printf("Digite numeros (0 para sair):\n");

    do {
        scanf("%d", &num);

        if(num > 0) {
            count_positivos++;
        } else if(num < 0) {
            count_negativos++;
        }
        // se num == 0, sai do loop
    } while(num != 0);

    printf("Quantidade de numeros positivos: %d\n", count_positivos);
    printf("Quantidade de numeros negativos: %d\n", count_negativos);

    return 0;
}
