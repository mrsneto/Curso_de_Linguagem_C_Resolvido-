#include <stdio.h>

/*
@author leo neto
10) Faca um programa que, dado tres valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triangulo. Caso positivo, o programa deve informar tambem se o triangulo e
equilatero, isosceles ou escaleno. Caso contrario, escrever a mensagem "Nao formam um triangulo".
*/

int main() {
    double a, b, c;

    printf("Digite os tres lados do triangulo:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

  
    if(a < b + c && b < a + c && c < a + b) {
        if(a == b && b == c) {
            printf("Triangulo equilatero.\n");
        } else if(a == b || a == c || b == c) {
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }
    } else {
        printf("Nao formam um triangulo.\n");
    }

    return 0;
}
