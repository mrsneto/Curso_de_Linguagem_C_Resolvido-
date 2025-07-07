#include <stdio.h>

/**
 * @author leo neto
 *
 * 8) Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
 * um menu ao usuário da seguinte forma:
 * 1 – Somar
 * 2 – Subtrair
 * 3 – Multiplicar
 * 4 – Dividir
 * 0 – Sair
 *
 * Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case.
 * Após a escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
 * Se a operação escolhida for a 4 o divisor não pode ser zero, um novo valor deve ser solicitado.
 * O programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).
 */

int main() {
    int opcao;
    float a, b, resultado;

    do {
        // Exibe o menu
        printf("\n=== CALCULADORA ===\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: // Soma
                printf("Digite dois valores: ");
                scanf("%f %f", &a, &b);
                resultado = a + b;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2: // Subtração
                printf("Digite dois valores: ");
                scanf("%f %f", &a, &b);
                resultado = a - b;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3: // Multiplicação
                printf("Digite dois valores: ");
                scanf("%f %f", &a, &b);
                resultado = a * b;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4: // Divisão
                printf("Digite o dividendo: ");
                scanf("%f", &a);

                // Verifica divisor diferente de zero
                do {
                    printf("Digite o divisor (diferente de zero): ");
                    scanf("%f", &b);
                    if(b == 0) {
                        printf("Erro: divisor nao pode ser zero!\n");
                    }
                } while(b == 0);

                resultado = a / b;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 0: // Sair
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while(opcao != 0);

    return 0;
}
