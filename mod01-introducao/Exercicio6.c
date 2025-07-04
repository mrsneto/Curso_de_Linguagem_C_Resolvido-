#include <stdio.h>

/*
@author leo neto
7) Faca um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
conversao para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saida: 1:1:12
*/

int main() {
    int total_segundos;
    int horas, minutos, segundos;

    printf("Digite a quantidade de segundos:\n");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    printf("Conversao: %d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
