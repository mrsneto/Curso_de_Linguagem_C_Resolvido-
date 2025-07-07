#include <stdio.h>

/**
 * @author leo neto
 *
 * 5) Faça um programa que leia as notas referentes às duas avaliações de um aluno.
 * Calcule e imprima a média semestral. Faça com que o programa só aceite notas válidas
 * (uma nota válida deve pertencer ao intervalo de 0 a 10). Cada nota deve ser validada separadamente.
 */

int main() {
    float nota1, nota2;

    // Leitura e validação da primeira nota
    do {
        printf("Digite a primeira nota (0 a 10): ");
        scanf("%f", &nota1);
        if(nota1 < 0 || nota1 > 10) {
            printf("Nota invalida!\n");
        }
    } while(nota1 < 0 || nota1 > 10);

    // Leitura e validação da segunda nota
    do {
        printf("Digite a segunda nota (0 a 10): ");
        scanf("%f", &nota2);
        if(nota2 < 0 || nota2 > 10) {
            printf("Nota invalida!\n");
        }
    } while(nota2 < 0 || nota2 > 10);

    float media = (nota1 + nota2) / 2;

    printf("Media semestral: %.2f\n", media);

    return 0;
}
