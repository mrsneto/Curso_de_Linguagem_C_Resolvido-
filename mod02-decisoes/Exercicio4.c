#include <stdio.h>

/*
@author leo neto
4) Crie um programa que permita ao usuario escolher entre fazer a conversao de Real para Dolar ou
de Dolar para Real. Utilize como taxa de cambio $1 igual a R$5.30.
*/

int main() {
    int opcao;
    double valor, convertido;
    double taxa_cambio = 5.30;

    printf("Escolha uma opcao de conversao:\n");
    printf("1 - Real para Dolar\n");
    printf("2 - Dolar para Real\n");
    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("Digite o valor em reais:\n");
        scanf("%lf", &valor);
        convertido = valor / taxa_cambio;
        printf("Valor em dolar: US$ %.2lf\n", convertido);
    } else if(opcao == 2) {
        printf("Digite o valor em dolar:\n");
        scanf("%lf", &valor);
        convertido = valor * taxa_cambio;
        printf("Valor em reais: R$ %.2lf\n", convertido);
    } else {
        printf("Opcao invalida. Finalizando o programa.\n");
    }

    return 0;
}
