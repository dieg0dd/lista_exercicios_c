//Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias.

#include <stdio.h>

int idade(int anos, int meses, int dias){
    int total;

    total = (anos * 365) + (meses * 30) + dias;

    return total;
}

int main() {
    int ano, mes, dia, conversao;

    printf("Digite a idade da pessoa, em Anos, Meses e Dias: ");
    scanf("%i %i %i", &ano, &mes, &dia);

    conversao = idade(ano, mes, dia);

    printf("Anos: %i\nMeses: %i\nDias: %i\nTotal Convertido em Dias: %i", ano, mes, dia, conversao);
}