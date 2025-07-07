#include <stdio.h>

/**
 * @author leo neto
 *
 * 11) Um determinado material radioativo perde metade de sua massa a cada 50 segundos.
 * Dada a massa inicial, em gramas, faça um programa que determine o tempo necessário para
 * que essa massa se torne menor que 0,05 gramas.
 */

int main() {
    double massa_inicial, massa_atual;
    int tempo = 0; 

    printf("Digite a massa inicial em gramas: ");
    scanf("%lf", &massa_inicial);

    massa_atual = massa_inicial;

    while(massa_atual >= 0.05) {
        massa_atual /= 2.0;
        tempo += 50;
    }

    printf("Tempo necessario para massa ser menor que 0,05g: %d segundos\n", tempo);

    return 0;
}
