#include <stdio.h>

/**
 * @author leo neto
 *
 * 10) Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal,
 * decidiu guardar 1 centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia,
 * 8 centavos no quarto dia, e assim por diante. Faça um programa para calcular quanto você terá
 * ao final dos 30 dias.
 */

int main() {
    long long total = 0;      
    long long valor = 1;      

    for(int dia = 1; dia <= 30; dia++) {
        total += valor;
        valor *= 2;  
    }

   
    double total_reais = total / 100.0;

    printf("Total guardado após 30 dias: %lld centavos\n", total);
    printf("Que equivale a: R$ %.2f\n", total_reais);

    return 0;
}
