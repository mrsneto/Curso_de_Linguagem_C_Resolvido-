#include <stdio.h>

/*
@author leo neto

5) Faca um programa que receba a temperatura media de cada mes do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mes ocorreram (mostrar o
mes por extenso: janeiro, fevereiro ...). Desconsidere empates.
*/

int main() {
    float temperaturas[12];
    char *meses[12] = {
        "janeiro", "fevereiro", "marco", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    int mes_maior = 0, mes_menor = 0;

    // Leitura das temperaturas
    printf("Digite a temperatura media de cada mes:\n");
    for(int i = 0; i < 12; i++) {
        printf("%s: ", meses[i]);
        scanf("%f", &temperaturas[i]);

        if(temperaturas[i] > temperaturas[mes_maior]) {
            mes_maior = i;
        }
        if(temperaturas[i] < temperaturas[mes_menor]) {
            mes_menor = i;
        }
    }

    // Resultados
    printf("\nMaior temperatura do ano: %.2f graus em %s.\n", temperaturas[mes_maior], meses[mes_maior]);
    printf("Menor temperatura do ano: %.2f graus em %s.\n", temperaturas[mes_menor], meses[mes_menor]);

    return 0;
}
