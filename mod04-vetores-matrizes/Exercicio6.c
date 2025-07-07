#include <stdio.h>

/*
@author leo neto

6) Faca um programa que leia 10 numeros reais e os armazene em um vetor. Em seguida, leia um
codigo inteiro e faca uma das acoes abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do inicio ao fim;
2 – imprime o vetor na ordem inversa (do fim para o inicio).
O programa deve funcionar ate que o usuario digite 0 para finalizar.
*/

int main() {
    float numeros[10];
    int codigo;

    // Leitura dos numeros
    printf("Digite 10 numeros reais:\n");
    for(int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    // Loop para os comandos
    do {
        printf("\nDigite um codigo (0 = sair, 1 = ordem normal, 2 = ordem inversa): ");
        scanf("%d", &codigo);

        switch(codigo) {
            case 0:
                printf("Finalizando o programa...\n");
                break;
            case 1:
                printf("Vetor na ordem do inicio ao fim:\n");
                for(int i = 0; i < 10; i++) {
                    printf("%.2f ", numeros[i]);
                }
                printf("\n");
                break;
            case 2:
                printf("Vetor na ordem inversa:\n");
                for(int i = 9; i >= 0; i--) {
                    printf("%.2f ", numeros[i]);
                }
                printf("\n");
                break;
            default:
                printf("Codigo invalido. Tente novamente.\n");
        }

    } while(codigo != 0);

    return 0;
}
