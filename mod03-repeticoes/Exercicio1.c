#include <stdio.h>

/*
1) Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e apresentar a
tabuada. Exemplo:
Entrada 7
Saída:
7 * 1 = 7
7 * 2 = 14
...
7 * 10 = 70
*/
int main(){
    int num;
    
    printf("Digite um valor inteiro entre 1 e 10: \n");
    scanf("%d", &num);

    if(num >= 1 && num <= 10){
        for(int i = 1; i <= 10; i++){
            printf("%d * %d = %d\n", num, i, num * i);
        }
    } else {
        printf("Número inválido! Por favor, digite um número entre 1 e 10.\n");
    }

    return 0;
}
