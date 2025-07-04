#include <stdio.h>

/*
@author leo neto
3) Escreva um programa em C que leia um numero e informe se ele e divisivel por 2, por 3 ou por
5, ou se nao e divisivel por nenhum deles.
*/

int main(){
    int num;
    int nenhum = 1; // flag para saber se nao e divisivel por nenhum

    printf("Digite um valor:\n");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O numero digitado eh divisivel por 2\n");
        nenhum = 0;
    }
    if(num % 3 == 0){
        printf("O numero digitado eh divisivel por 3\n");
        nenhum = 0;
    }
    if(num % 5 == 0){
        printf("O numero digitado eh divisivel por 5\n");
        nenhum = 0;
    }

    if(nenhum){
        printf("O numero digitado nao eh divisivel por nenhum deles.\n");
    }

    return 0;
}
