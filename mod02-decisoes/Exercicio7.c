#include <stdio.h>
#include <ctype.h>

/*
@author leo neto
7) Faca um programa que peça ao usuario um caractere e diga se e uma vogal ou nao.
*/

int main() {
    char letra;

    printf("Digite um caractere:\n");
    scanf(" %c", &letra); 

    letra = tolower(letra); 

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("O caractere digitado eh uma vogal.\n");
    } else {
        printf("O caractere digitado nao eh uma vogal.\n");
    }

    return 0;
}
