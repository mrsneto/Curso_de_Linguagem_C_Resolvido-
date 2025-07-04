#include <stdio.h>
/*
@author leo neto
3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.

*/
int main() {
    int a, b;

    printf("Digite o valor de A:\n");
    scanf("%d", &a);

    printf("Digite o valor de B:\n");
    scanf("%d", &b);


    a = a + b;
    b = a - b;
    a = a - b;

    printf("Após a troca:\n");
    printf("Valor de A: %d\n", a);
    printf("Valor de B: %d\n", b);

    return 0;
}
