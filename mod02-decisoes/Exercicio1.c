#include <stdio.h>

/*
@author leo neto
1) Escreva um programa em C que leia tres valores e apresente qual e o maior e qual e o menor.
*/

int main(){
    int a, b, c;
    int maior, menor;

    printf("Digite tres valores inteiros:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    maior = a;
    menor = a;

    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }

    if(b < menor){
        menor = b;
    }
    if(c < menor){
        menor = c;
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
