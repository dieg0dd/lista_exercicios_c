#include <stdio.h>

float peso_ideal(float altura, char sexo){
    float calculo = 0;

    if (sexo == 'M'|| sexo == 'm')
        calculo = 72.7 * altura - 58;
    else if (sexo == 'F'|| sexo == 'f')
        calculo = 62.1 * altura - 44.7;

    return calculo;
}

int main() {
    float h, peso;
    char sex;

    printf("Vamos calcular seu peso ideal.\nDigite sua altura em Metros: ");
    scanf("%f", &h);
    printf("Agora, digite seu Sexo.\n(M) Masculino\n(F) Feminino\nDigite: ");
    scanf(" %c", &sex);

    peso = peso_ideal(h, sex);

    printf("Seu peso ideal sera de: %.2f", peso);

    return 0;
}