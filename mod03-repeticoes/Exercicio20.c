#include <stdio.h>
#include <stdint.h> // para uint64_t

/**
 * @author leo neto
 *
 * 20) Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço.
 * O monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito
 * com grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma
 * que o primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do
 * quadro anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.
 */

int main() {
    uint64_t total = 0;
    uint64_t grãos = 1;

    for(int i = 1; i <= 64; i++) {
        total += grãos;
        grãos *= 2;
    }

    printf("Total de graos de trigo no tabuleiro: %llu\n", total);

    return 0;
}
