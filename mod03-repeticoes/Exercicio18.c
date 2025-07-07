#include <stdio.h>

/**
 * @author leo neto
 *
 * 18) Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade,
 * sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que
 * informe:
 * a) a média de salário do grupo;
 * b) a maior e a menor idade do grupo;
 * c) a quantidade de mulheres com salário até R$2000,00.
 */

int main() {
    int X;
    int idade, maior_idade = 0, menor_idade = 0;
    char sexo;
    float salario;

    float soma_salarios = 0;
    int count_mulheres_ate_2000 = 0;

    printf("Digite a quantidade de pessoas pesquisadas: ");
    scanf("%d", &X);

    if (X <= 0) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    for (int i = 1; i <= X; i++) {
        printf("\nPessoa %d:\n", i);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite o salario: ");
        scanf("%f", &salario);

        soma_salarios += salario;

     
        if (i == 1) {
            maior_idade = menor_idade = idade;
        } else {
            if (idade > maior_idade) maior_idade = idade;
            if (idade < menor_idade) menor_idade = idade;
        }

       
        if ((sexo == 'F' || sexo == 'f') && salario <= 2000.0) {
            count_mulheres_ate_2000++;
        }
    }

    float media_salarios = soma_salarios / X;

    printf("\nMedia salarial do grupo: R$ %.2f\n", media_salarios);
    printf("Maior idade do grupo: %d anos\n", maior_idade);
    printf("Menor idade do grupo: %d anos\n", menor_idade);
    printf("Quantidade de mulheres com salario ate R$ 2000,00: %d\n", count_mulheres_ate_2000);

    return 0;
}
