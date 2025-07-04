#include <stdio.h>

/*
@author leo neto
5) O IMC (Indice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC = m/h^2). Escreva um programa que leia o peso
e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o individuo se enquadra de acordo
com a tabela abaixo:

IMC Interpretacao
Menor que 18,5         Abaixo do peso
Entre 18,5 e menor 25  Peso normal
Entre 25 e menor 30    Sobrepeso
Entre 30 e menor 35    Obesidade grau 1
Entre 35 e menor 40    Obesidade grau 2
Maior ou igual a 40    Obesidade grau 3
*/

int main() {
    double peso, altura, imc;

    printf("Digite o peso em kg:\n");
    scanf("%lf", &peso);

    printf("Digite a altura em metros:\n");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC eh: %.2lf\n", imc);

    if(imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if(imc < 25) {
        printf("Classificacao: Peso normal\n");
    } else if(imc < 30) {
        printf("Classificacao: Sobrepeso\n");
    } else if(imc < 35) {
        printf("Classificacao: Obesidade grau 1\n");
    } else if(imc < 40) {
        printf("Classificacao: Obesidade grau 2\n");
    } else {
        printf("Classificacao: Obesidade grau 3\n");
    }

    return 0;
}
