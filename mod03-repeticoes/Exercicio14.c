#include <stdio.h>

/**
 * @author leo neto
 *
 * 14) Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
 * quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir
 * a média dos salários informados, o salário mais alto e o salário mais baixo.
 */

int main() {
    int qtd_funcionarios;
    float salario, soma_salarios = 0, salario_max = 0, salario_min = 0;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &qtd_funcionarios);

    if(qtd_funcionarios <= 0) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    for(int i = 1; i <= qtd_funcionarios; i++) {
        printf("Digite o salario do funcionario %d: ", i);
        scanf("%f", &salario);

       
        if(i == 1) {
            salario_max = salario_min = salario;
        } else {
            if(salario > salario_max) salario_max = salario;
            if(salario < salario_min) salario_min = salario;
        }

        soma_salarios += salario;
    }

    float media = soma_salarios / qtd_funcionarios;

    printf("\nMedia salarial: %.2f\n", media);
    printf("Salario mais alto: %.2f\n", salario_max);
    printf("Salario mais baixo: %.2f\n", salario_min);

    return 0;
}
