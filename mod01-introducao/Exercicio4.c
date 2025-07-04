#include <stdio.h>

/*
@author leo neto
5) Uma empresa contrata um encanador a R$ 45,00 por dia. Faca um programa que solicite o
numero de dias trabalhados pelo encanador e imprima a quantia liquida que devera ser paga,
sabendo que sao descontados 8%% para imposto de renda.
*/

int main(){
    int dias_trabalhados;
    double valor_diario = 45.00;
    double salario_bruto, salario_liquido;

    printf("Digite o numero de dias trabalhados pelo encanador:\n");
    scanf("%d", &dias_trabalhados);

    salario_bruto = dias_trabalhados * valor_diario;
    salario_liquido = salario_bruto - (salario_bruto * 0.08);

    printf("O valor liquido a ser pago ao encanador sera de: R$ %.2lf\n", salario_liquido);

    return 0;
}
