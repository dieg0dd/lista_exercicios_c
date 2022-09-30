// 1. Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume v = 4 / 3 π R³.

#include <stdio.h>
#include <math.h>

float calc_esfera(float raio){
    float v;

    v = 4 * M_PI * pow(raio, 3) / 3;

    return v;
}

int main() {
    float r, valor;

    printf("Ola! Digite o raio da esfera: ");
    scanf("%f", &r);

    valor = calc_esfera(r);

    printf("O resultado do volume da esfera equivale a: %.2f", valor);

    return 0;
}