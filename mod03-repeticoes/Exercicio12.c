#include <stdio.h>

/**
 * @author leo neto
 *
 * 12) Para uma turma de 45 alunos, construa um algoritmo que determine:
 * a) A idade média dos alunos com menos de 1,70m de altura;
 * b) A altura média dos alunos com mais de 20 anos.
 */

int main() {
    int total_alunos = 45;
    int idade, soma_idade_alt_baixa = 0, cont_idade_alt_baixa = 0;
    float altura, soma_alt_idade_maior20 = 0;
    int cont_alt_idade_maior20 = 0;

    for(int i = 1; i <= total_alunos; i++) {
        printf("Aluno %d:\n", i);
        
        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite a altura (em metros): ");
        scanf("%f", &altura);

        
        if(altura < 1.70) {
            soma_idade_alt_baixa += idade;
            cont_idade_alt_baixa++;
        }

       
        if(idade > 20) {
            soma_alt_idade_maior20 += altura;
            cont_alt_idade_maior20++;
        }
    }

    if(cont_idade_alt_baixa > 0) {
        printf("\nIdade media dos alunos com menos de 1,70m: %.2f anos\n", 
               (float)soma_idade_alt_baixa / cont_idade_alt_baixa);
    } else {
        printf("\nNao ha alunos com menos de 1,70m.\n");
    }

    if(cont_alt_idade_maior20 > 0) {
        printf("Altura media dos alunos com mais de 20 anos: %.2f metros\n", 
               soma_alt_idade_maior20 / cont_alt_idade_maior20);
    } else {
        printf("Nao ha alunos com mais de 20 anos.\n");
    }

    return 0;
}
