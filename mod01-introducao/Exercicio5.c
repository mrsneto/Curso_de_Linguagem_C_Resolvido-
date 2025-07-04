#include <stdio.h>

/*
@author leo neto
6) Crie um programa em C que permita fazer a conversao cambial entre Reais e Dolares. Considere
como taxa de cambio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dolares.
*/

int main() {
    double valor_reais, valor_dolares;
    double taxa_cambio = 5.30;

    printf("Digite o valor em reais:\n");
    scanf("%lf", &valor_reais);

    valor_dolares = valor_reais / taxa_cambio;

    printf("O valor em dolares sera: US$ %.2lf\n", valor_dolares);

    return 0;
}
