#include <stdio.h>

/*
@author leo neto
2) Escreva um programa em C que le 5 numeros inteiros, um por vez. Conte quantos destes valores
sao negativos e quantos sao positivos. Ao final, imprima na tela a quantidade de numeros negativos
e positivos.
*/

int main(){
    int valores;
    int qntNegativos = 0, qntPositivos = 0;

    printf("Digite 5 valores inteiros:\n");
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &valores);

        if(valores > 0){
            qntPositivos++;
        } else if(valores < 0){
            qntNegativos++;
        } else {
            printf("Zero nao considerado\n");
        }
    }

    printf("Quantidade de numeros positivos: %d\n", qntPositivos);
    printf("Quantidade de numeros negativos: %d\n", qntNegativos);

    return 0;
}
