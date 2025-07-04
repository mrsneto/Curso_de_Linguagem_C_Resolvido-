#include <stdio.h>
#include <ctype.h>

/*
@author leo neto
4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o numero de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta sera dividida igualmente.
*/

int main(){
    double despesa_restaurante, valor_gorjeta, valorTotal, valorUnitario;
    int numPessoas;
    char opcao;

    printf("Digite o valor total da despesa do restaurante: \n");
    scanf("%lf", &despesa_restaurante);

    printf("Digite a quantidade de pessoas: \n");
    scanf("%d", &numPessoas);

    printf("Deseja dar gorjeta? ('s' para sim, 'n' para nao): \n");
    scanf(" %c", &opcao); // espaco antes de %c ignora o \n anterior
    opcao = tolower(opcao);

    if(opcao == 's'){
        printf("Digite o valor da gorjeta em porcentagem: \n");
        scanf("%lf", &valor_gorjeta);

        valorTotal = despesa_restaurante + (despesa_restaurante * valor_gorjeta / 100.0);
        valorUnitario = valorTotal / numPessoas;

        printf("O valor a ser dividido entre %d pessoas sera de: %.2lf\n", numPessoas, valorUnitario);
    } else if(opcao == 'n'){
        valorTotal = despesa_restaurante;
        valorUnitario = valorTotal / numPessoas;

        printf("O valor a ser dividido entre %d pessoas sera de: %.2lf\n", numPessoas, valorUnitario)
