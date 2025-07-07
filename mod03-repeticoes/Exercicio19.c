#include <stdio.h>

/**
 * @author leo neto
 *
 * 19) Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de
 * pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence.
 * O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta
 * situação sem escrever mensagem alguma).
 */

int main() {
    int x, y;

    while(1) {
        scanf("%d %d", &x, &y);

        if(x == 0 || y == 0) {
            // Encerra sem imprimir nada
            break;
        }

        if(x > 0 && y > 0) {
            printf("primeiro\n");
        } else if(x < 0 && y > 0) {
            printf("segundo\n");
        } else if(x < 0 && y < 0) {
            printf("terceiro\n");
        } else if(x > 0 && y < 0) {
            printf("quarto\n");
        }
    }

    return 0;
}
