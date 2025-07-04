#include <stdio.h>

/*
@author leo neto
8) Elabore um programa que, dado o numero do mes, indica quantos dias tem esse mes. Utilize para
isso a estrutura de selecao switch.
Obs.: Considere fevereiro como tendo 28 dias.
*/

int main() {
    int mes;

    printf("Digite o numero do mes (1 a 12):\n");
    scanf("%d", &mes);

    switch(mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Esse mes tem 31 dias.\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Esse mes tem 30 dias.\n");
            break;
        case 2:
            printf("Esse mes tem 28 dias.\n");
            break;
        default:
            printf("Mes invalido.\n");
            break;
    }

    return 0;
}
