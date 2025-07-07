#include <stdio.h>
#include <stdbool.h>

/**
 * @author leo neto
 *
 * 13) Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número
 * informado é primo ou não.
 */

int main() {
    int num;
    bool is_primo = true;


    do {
        printf("Digite um número inteiro maior que 2: ");
        scanf("%d", &num);
        if(num <= 2) {
            printf("Número inválido! Deve ser maior que 2.\n");
        }
    } while(num <= 2);

    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            is_primo = false;
            break;
        }
    }

    if(is_primo) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
