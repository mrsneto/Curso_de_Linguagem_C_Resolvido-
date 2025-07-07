#include <stdio.h>

/**
 * @author leo neto
 *
 * 4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos.
 * O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas vendas.
 * O valor unitário dos objetos deve ser informado e armazenado em um vetor;
 * a quantidade vendida de cada objeto deve ficar em outro vetor, mas na mesma posição.
 * Crie um programa que receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores.
 * Depois, determine e mostre:
 *
 * a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
 *    o valor total das vendas e o valor da comissão que será paga ao vendedor.
 *
 * b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos empatados).
 */

int main() {
    float valorUnitario_objeto[10];
    int qnt_ObjetoVendida[10];
    float valorTotal = 0;
    float comissao;
    int i;

    // Entrada de dados
    printf("Digite o valor unitario de cada um dos 10 objetos:\n");
    for(i = 0; i < 10; i++) {
        printf("Valor do objeto %d: R$ ", i + 1);
        scanf("%f", &valorUnitario_objeto[i]);
    }

    printf("\nDigite a quantidade vendida de cada objeto:\n");
    for(i = 0; i < 10; i++) {
        printf("Quantidade vendida do objeto %d: ", i + 1);
        scanf("%d", &qnt_ObjetoVendida[i]);
    }

    printf("\n--- Relatorio de Vendas ---\n");
    for(i = 0; i < 10; i++) {
        float totalPorObjeto = valorUnitario_objeto[i] * qnt_ObjetoVendida[i];
        valorTotal += totalPorObjeto;

        printf("Objeto %d - Qtd vendida: %d | Preco unitario: R$%.2f | Total: R$%.2f\n",
               i + 1, qnt_ObjetoVendida[i], valorUnitario_objeto[i], totalPorObjeto);
    }

    comissao = valorTotal * 0.05;

    printf("\nValor total das vendas: R$%.2f\n", valorTotal);
    printf("Comissao do vendedor (5%%): R$%.2f\n", comissao);

    // Identificando o(s) objeto(s) mais vendido(s)
    int maiorQuantidade = qnt_ObjetoVendida[0];
    for(i = 1; i < 10; i++) {
        if(qnt_ObjetoVendida[i] > maiorQuantidade) {
            maiorQuantidade = qnt_ObjetoVendida[i];
        }
    }

    printf("\nObjeto(s) mais vendido(s) com %d unidades:\n", maiorQuantidade);
    for(i = 0; i < 10; i++) {
        if(qnt_ObjetoVendida[i] == maiorQuantidade) {
            printf("Objeto %d (Preco unitario: R$%.2f)\n", i + 1, valorUnitario_objeto[i]);
        }
    }

    return 0;
}
