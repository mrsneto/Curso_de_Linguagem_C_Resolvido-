#include <stdio.h>

/*
@author leo neto
2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/

int main() {
    int a, b, temp;

    printf("Digite o valor inteiro de A:\n");
    scanf("%d", &a);

    printf("Digite o valor inteiro de B:\n");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("Após a troca:\n");
    printf("Valor de A: %d\n", a);
    printf("Valor de B: %d\n", b);

    return 0;
}
