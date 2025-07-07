#include <stdio.h>

/**
 * @author leo neto
 *
 * 15) Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na
 * multiplicação entre os dois números sem utilizar a operação de multiplicação.
 */

int main() {
    int num1, num2;
    int resultado = 0;
    int positivo = 1;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);


    if(num1 < 0) {
        num1 = -num1;
        positivo = !positivo;
    }
    if(num2 < 0) {
        num2 = -num2;
        positivo = !positivo;
    }


    for(int i = 0; i < num2; i++) {
        resultado += num1;
    }

    if(!positivo) {
        resultado = -resultado;
    }

    printf("Resultado da multiplicacao: %d\n", resultado);

    return 0;
}
