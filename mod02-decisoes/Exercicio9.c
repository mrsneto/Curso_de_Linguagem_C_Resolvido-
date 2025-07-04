#include <stdio.h>

/*
@author leo neto
9) Um usuario deseja um programa onde possa escolher que tipo de media deseja calcular a partir
de tres notas. Faca um programa que leia as notas e o tipo da media escolhida pelo usuario e calcule
e apresente a media:
Opcoes:
• 'a' - Aritmetica.
• 'p' - Ponderada (pesos: 3, 3, 4).
*/

int main() {
    double nota1, nota2, nota3, media;
    char tipo;

    printf("Digite as tres notas:\n");
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

    printf("Escolha o tipo de media:\n");
    printf("'a' para Aritmetica ou 'p' para Ponderada:\n");
    scanf(" %c", &tipo); 

    if(tipo == 'a') {
        media = (nota1 + nota2 + nota3) / 3;
        printf("Media aritmetica: %.2lf\n", media);
    } else if(tipo == 'p') {
        media = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10;
        printf("Media ponderada: %.2lf\n", media);
    } else {
        printf("Opcao invalida.\n");
    }

    return 0;
}
